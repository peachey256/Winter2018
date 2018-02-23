function [ k ] = blockDetect( im )
%blockDetect implements the Fan and de Quieroz?s JPEG blocking artifact
    % detecting algorithm. inputs any image and output the k, blcoking 
    % strength value. 
    Zp=[]; 
    Zpp=[];
    [r,c]=size(im); 
    for i=1:8:r-8 % dont do the last 8x8 block in row or cols 
        for j=1:8:c-8
            grid=im(i:i+7,j:j+7); % grid plus one 
            A=grid(4,4); 
            B=grid(4,5); 
            C=grid(5,4); 
            D=grid(5,5); 
            Zp=[Zp, double(abs(A-B-C+D))]; 
            E=grid(8,8); 
            F=im(i+7,j+8); 
            G=im(i+8,j+7); 
            H=im(i+8,j+8); 
            Zpp=[Zpp, double(abs(E-F-G+H))]; 
        end 
    end 
    % 2)
    figure 
    HI=histogram(Zp,255); 
    HI.Normalization = 'probability'; 
    hold on 
    HII=histogram(Zpp,255); 
    HII.Normalization = 'probability'; 
    legend('Normalized center values','Normalized edge values')
    % 3)
    k=sum(abs(HI.Values-HII.Values)); 
    n=0.25; 
    % 4) 
    jpegDetect = (k>n); 
    fprintf('The strength of the blocking fingerprint is %d.\n',k); 
    if jpegDetect==1
        fprintf('So the image was JPEG compressed \n')
    else
        fprintf('So the image was not JPEG compressed \n')
    end

end

