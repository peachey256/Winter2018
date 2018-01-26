function [result] = myJpgEncode( pep,Q )
%myJpgEncode implement my own jpeg algorithm
%   using the notes 
A=zeros(size(pep)); 

for i=1:512/8
    for j=1:512/8
        tempA=dct2(pep(8*(i-1)+1:i*8,8*(j-1)+1:j*8)); 
        pep_quan=round(tempA./Q).*Q; 
        A(8*(i-1)+1:i*8,8*(j-1)+1:j*8)=pep_quan; 
    end 
end 


result=uint8(A); 


end

