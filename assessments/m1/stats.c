/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief This file contains all functions that will perform statistical analysis on a one-dimensional array.
 * @author KYAMBADDE MARK ARTHUR
 * @date 21.02.2026
 */

#include <stdio.h>
#include <stdbool.h>

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistics(unsigned char *arr, unsigned int size)
{
  printf("Statistics:\r\n");
  printf("  Mean: %.2f\r\n", find_mean(arr, size));
  printf("  Median: %.2f\r\n", find_median(arr, size));
  printf("  Max: %d\r\n", find_max(arr, size));
  printf("  Min: %d\r\n", find_min(arr, size));
}

void print_array(unsigned char *arr, unsigned int size)
{
  printf("{");
  for(unsigned int i=0; i<size; i++)
  {
    printf("%d", *(arr+i));
    if (i < size - 1) 
    {
      printf(", ");
    }
  }
  printf("}\r\n");
}

float find_median(unsigned char *arr, unsigned int size)
{
  float median = 0;
  if(size %2 == 0)
  {
    median = (*(arr + (size/2)) + *(arr + ((size-2)/2)))/2;
  }
  else
  {
    median = (*(arr+((size-1)/2)));
  }
  return median;
}

float find_mean(unsigned char *arr, unsigned int size)
{
  float mean = 0;
  for(unsigned int i=0; i<size; i++)
  {
    mean += *(arr+i);
  }
  mean = mean/size;
  return mean;
}

unsigned int find_max(unsigned char *arr, unsigned int size)
{
  unsigned int max = *(arr);
  for(unsigned int i=0; i<size; i++)
  {
    if(*(arr+i) > max)
    {
      max = *(arr+i);
    }
  }
  return max;
}

unsigned int find_min(unsigned char *arr, unsigned int size)
{
  unsigned int min = *(arr);
  for(unsigned int i=0; i<size; i++)
  {
    if(*(arr+i) < min)
    {
      min = *(arr+i);
    }
  }
  return min;
}

void sort_array(unsigned char *arr, unsigned int size)
{
  unsigned char temp = 0;
  for (unsigned int i = 0; i < size - 1; i++) 
  {
    for (unsigned int j = 0; j < size - i - 1; j++) 
    {
      if (*(arr+j) > *(arr+j+1)) 
      {
          temp = *(arr+j);
          *(arr+j) = *(arr+j+1);
          *(arr+j+1) = temp;
      }
    }
  }
}
/* Add other Implementation File Code Here */
