import { pid } from "../index";

describe("to front by pid", function(){

    it("should throw if undefined is passed", function(){

        try {
            //@ts-ignore
            pid()
        } catch (e){

            expect(e).toEqual(TypeError("Invalid argument expected pid as number"))
        }

    })
    it("should throw if string is passed", function(){

        try {
            //@ts-ignore
            pid("invalid")
        } catch (e){

            expect(e).toEqual(TypeError("Invalid argument expected pid as number"))
        }
    })
    it("should throw if function is passed", function(){
        try {
            //@ts-ignore
            pid(()=>null)
        } catch (e){

            expect(e).toEqual(TypeError("Invalid argument expected pid as number"))
        }
    })
    it("should return hwnd of current window" , function(){

        // expect(pid(process.ppid)).toBeGreaterThan(0)
    })

    it("should return <= 0 if pid has no window", function(){

        expect(pid(123)).toBeLessThanOrEqual(0)
    })
})