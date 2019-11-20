const bringToFront = require('bindings')('bringToFront')

export function pid(pid: number): number{

    return bringToFront.pidToFront(pid);
}