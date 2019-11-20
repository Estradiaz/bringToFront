"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const bringToFront = require('bindings')('bringToFront');
function pid(pid) {
    return bringToFront.pidToFront(pid);
}
exports.pid = pid;
