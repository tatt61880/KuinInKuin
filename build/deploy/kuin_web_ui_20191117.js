"use strict";!function(f){let d=document;function h(){d.removeEventListener("DOMContentLoaded",h);removeEventListener("load",h);f()}"complete"===d.readyState||"loading"!==d.readyState&&!d.documentElement.doScroll?setTimeout(f):(d.addEventListener("DOMContentLoaded",h),addEventListener("load",h))}(function(){
	let d = document, src = d.getElementById("src"), compile = d.getElementById("compile"), log = d.getElementById("log"), output = d.getElementById("output");
	compile.addEventListener("click", function(){
		let platforms = document.getElementsByName("platform"), platform = null, target = null, write = null, extra = null;
		for(let i = 0; i <= platforms.length; i++){
			if(platforms[i].checked){
				platform = platforms[i].value;
				break;
			}
		}
		if(platform === "run"){
			target = "web";
			write = function(p, s, c){ if(p === "./out.js") c.S += s; };
			extra = ["-x", "static"];
		}else if(platform === "web"){
			target = "web";
			write = function(p, s, c){ c.S += s; };
			extra = ["-x", "merge"];
		}else if(platform === "cpp"){
			target = "cpp";
			write = function(p, s, c){ c.S += s; };
			extra = ["-x", "merge"];
		}else
			return;
		output.value = "";
		log.value = "";
		let code = { S: "" };
		kuin({
			cmdLine: ["-i", "main.kn", "-s", "res/sys/", "-e", target].concat(extra),
			readFile: function(p){
				if(p === "./main.kn") return src.value;
				return null;
			},
			writeFile: function(p, s){ write(p, s, code); },
			print: function(s){ log.value += s; }
		});
		if(platform === "run")
			eval(code.S + "out({print:function(s){output.value+=s}});");
		else
			output.value = code.S;
	});
	log.value = "";
	output.value = "";
	log.addEventListener("focus", function(){ this.select(); } );
	output.addEventListener("focus", function(){ this.select(); } );
})
