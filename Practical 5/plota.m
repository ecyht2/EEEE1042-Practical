#!/usr/bin/octave
function plota(filename)
	a=load(filename);
	plot(a);
	title(filename)
	print('-deps2', '-color', [filename, ".eps"]);
endfunction
