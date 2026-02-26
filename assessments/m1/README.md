# Statistical Functions Library
> This project contains functions that take a one dimenional char type array of a known length and return;  
the median, the mean, maximum and minimum value and also sort the array.

## Usage Instructions:
> Put these files in the same directory with your test.c code that will contain your array. After, you may:  
> * Print your array  
> * Sort your array  
> * Print your sorted array  
> * And run print statistics as a sorted array will ensure that metrics like median are calculated right

>_**an example:**_  
>**#include "stats.h"** //importing stats.h into your test.c file  
>// in your main function you can call say the print array function like:  
>**print_array(test_arr, SIZE);** 

## Configuration:
> The project only requires a C compiler, so a decent gcc will do. if you lack one, just run;  
>sudo apt install gcc  

## Final Notes
>This code is to fulfill the assignment of module one of the Embedded systems course and to make it easy for  
>peer grading, the main function in the stats.c file was removed to just have one import the stats.h easily   
>for tests and this gives the one testing the freedom to use any array they want to as long as it is of type  
>unsigned char.

>Second note is, this assumes the one testing is familiar with how to run code on a linux environment.