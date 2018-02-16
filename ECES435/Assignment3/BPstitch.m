function [encoded] = BPstitch(img,msg,N)
%UNTITLED5 Summary of this function goes here
%   Detailed explanation goes here
    encoded=uint8(zeros(size(img)));
    for i=(N+1):8
        encoded=encoded+(2^(i-1))*bitget(img,i);
    end
    if N==1
        encoded=encoded+bitget(msg,8);
    else
        for i=1:N
            encoded=encoded+(2^(N-i))*bitget(msg,9-i);
        end
    end

    encoded=uint8(encoded);
end

