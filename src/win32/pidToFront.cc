#include "./pidToFront.h"
#include <windows.h>

using namespace v8;

void SetForegroundWindowInternal(HWND hWnd)
{
	if(!::IsWindow(hWnd)) return;

	BYTE keyState[256] = {0};
	//to unlock SetForegroundWindow we need to imitate Alt pressing
	if(::GetKeyboardState((LPBYTE)&keyState))
	{
		if(!(keyState[VK_MENU] & 0x80))
		{
			::keybd_event(VK_MENU, 0, KEYEVENTF_EXTENDEDKEY | 0, 0);
		}
	}

	::SetForegroundWindow(hWnd);

	if(::GetKeyboardState((LPBYTE)&keyState))
	if(::GetKeyboardState((LPBYTE)&keyState))
	if(::GetKeyboardState((LPBYTE)&keyState))
	{
		if(!(keyState[VK_MENU] & 0x80))
		{
			::keybd_event(VK_MENU, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
		}
	}
}

HWND g_HWND=NULL;
BOOL CALLBACK EnumWindowsProcMy(HWND hwnd,LPARAM lParam)
{
    DWORD lpdwProcessId;
    GetWindowThreadProcessId(hwnd,&lpdwProcessId);
    if(lpdwProcessId==lParam)
    {
        g_HWND=hwnd;
        return FALSE;
    }
    return TRUE;
}
void win32js::toFront(const Nan::FunctionCallbackInfo<Value>& info){
    Local<Context> context = info.GetIsolate()->GetCurrentContext();
    if(info.Length() < 1 || !info[0]->IsNumber()){
        Nan::ThrowTypeError("Invalid argument expected pid as number");
    }

    LPARAM pid = info[0]->NumberValue(context).FromJust();
    if(EnumWindows(EnumWindowsProcMy, (double)pid)){
        info.GetReturnValue().Set(-2);
    }
    if(g_HWND > 0){
        SetForegroundWindow(g_HWND);
        if(GetForegroundWindow() == g_HWND){
            info.GetReturnValue().Set((double)(unsigned long)g_HWND);
            g_HWND = NULL;
            return;
        }
        SetForegroundWindowInternal(g_HWND);
        if(GetForegroundWindow() == g_HWND){
            info.GetReturnValue().Set((double)(unsigned long)g_HWND);
            g_HWND = NULL;
            return;
        }
    } else {
        info.GetReturnValue().Set(-1);
    }
}