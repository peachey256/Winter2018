function [ pmap_approx ] = kirchners( im )
%UNTITLED approximates the pmap 
%   Detailed explanation goes here
I=double(im); 
% 1)
alpha=[-0.25 0.5 -0.25; 0.5 0 0.5;-0.25 0.5 -.25]; 
I_hat=filter2(alpha, I); 
% 2)
pred_error=I-I_hat; 
% 3)
lambda=1; 
tau=2; 
sigma=1; 
pmap_approx=lambda*exp((-pred_error.^tau)./sigma); 

end

