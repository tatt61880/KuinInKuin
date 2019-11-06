"use strict";!function(f){let d=document;function h(){d.removeEventListener("DOMContentLoaded",h);removeEventListener("load",h);f()}"complete"===d.readyState||"loading"!==d.readyState&&!d.documentElement.doScroll?setTimeout(f):(d.addEventListener("DOMContentLoaded",h),addEventListener("load",h))}(function(){
	let d = document, src = d.getElementById("src"), compile = d.getElementById("compile"), log = d.getElementById("log"), output = d.getElementById("output");
	compile.addEventListener("click", function(){
		output.value = "";
		log.value = "";
		kuin({
			cmdLine: ["-i", "main.kn", "-s", "res/sys/", "-e", "web"],
			readFile: function(p){
				if(p === "./main.kn") return src.value;
				return null;
			},
			writeFile: function(p, s){ output.value += s; },
			print: function(s){ log.value += s; }
		});
	});
})
