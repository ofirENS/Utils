function PowerSpectralDensityFunction(signal)% Unfinished
% calculate the power spectral density function of the input signal 
% at the moment signal is a 2D signal 
% the power spectral density function is the Fourier transform of the
%  autocorrelation of the signal 
% signal should be a column vector 
R = conv(signal,signal,'valid');