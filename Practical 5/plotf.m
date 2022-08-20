#!/usr/bin/octave
% plot the abs fft of signal in filename
% N is an averaging number to average the FFT over to reduce the noise
function plotf(filename,M)
	a=load(filename);
	a=a-mean(a); % subtract the mean
	a=fft(a); % take the fft of the data squared
	a=abs(a.*a); % take the fft of the data squared
	b=conv(a,ones(M,1)/M); % Calculate moving average
	b=b(M/2:end-M/2); % Remove the edges
	plot(b,['r;avg over ' num2str(M) ' ;']); hold off
	title(filename)
	print('-deps2', '-color',[filename ' fft.eps']);
endfunction
