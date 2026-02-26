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
 * @file stats.h
 * @brief This file contains all finction declarations for the statistical analysis functions defined in stats.c
 * @author KYAMBADDE MARK ARTHUR
 * @date 03/02/2026
 */

#ifndef __STATS_H__
#define __STATS_H__

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

/**
 * @brief prints the statistics of a given one-d array like: mean, median, maximum and minimum
 * @param arr dereferences a one-d array of type unsigned char
 * @param size captures the number of elements that array got
 * @return nothing
 */
void print_statistics(unsigned char *arr, unsigned int size);

/**
 * @brief prints the elements of a given one-d array
 * @param arr dereferences a one-d array of type unsigned char
 * @param size captures the number of elements that array got
 * @return its the void type so it returns nothing
 */
void print_array(unsigned char *arr, unsigned int size);

/**
 * @brief calculates and returns the median of a sorted one-d array
 * @param arr dereferences a one-d array of type unsigned char
 * @param size captures the number of elements that array got
 * @return a floating point value representing the median of that array
 */
float find_median(unsigned char *arr, unsigned int size);

/**
 * @brief calculates and returns the mean of a given one-d array
 * @param arr dereferences a one-d array of type unsigned char
 * @param size captures the number of elements that array got
 * @return a floating point value representing the mean of that array
 */
float find_mean(unsigned char *arr, unsigned int size);

/**
 * @brief compares all elements of a one-d array and returns the biggest element
 * @param arr dereferences a one-d array of type unsigned char
 * @param size captures the number of elements that array got
 * @return an unsigned integer representing the maximum elemenat of a given array
 */
unsigned int find_max(unsigned char *arr, unsigned int size);

/**
 * @brief compares all elements of given one-d array and returns the smallest element
 * @param arr dereferences a one-d array of type unsigned char
 * @param size captures the number of elements that array got
 * @return an unsigned integer representing the minimum element of an array
 */
unsigned int find_min(unsigned char *arr, unsigned int size);

/**
 * @brief sorts a one-d array smallest to largest
 * @param arr dereferences a one-d array of type unsigned char
 * @param size captures the number of elements that array got
 * @return nothing but modifies the original array
 */
void sort_array(unsigned char *arr, unsigned int size);

#endif /* __STATS_H__ */
