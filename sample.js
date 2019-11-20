const { pid } = require("./index")
setTimeout(()=> console.log(pid(process.ppid)), 2000)