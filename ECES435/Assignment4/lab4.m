% Feb 16, 2018 
% Brian Hosler & Sarah Peachey 
% Assignment 4 
clear
close all 
clc
%% Part 1 
% extract the metadata tag associated with image 
%   1) reading the quatization tables used to encode and decode in the
%   jpeg header 
%   2) compare to list of digital camera models 
% Need wine to use JPEGsnoop.exe :( 


%% Part 2 

im1=imread('Assignment4Files/blockArtifacts1.tif');
k1=blockDetect(im1)

im2=imread('Assignment4Files/blockArtifacts2.tif');
k1=blockDetect(im2)

im3=imread('Assignment4Files/blockArtifacts3.tif');
k1=blockDetect(im2)

type('blockDetect.m')