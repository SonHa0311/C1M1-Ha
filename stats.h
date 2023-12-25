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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Ha Tien Son
 * @date 12/25/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_array( unsigned char * data , int dataLength );
 //@brief Prints data array 
unsigned char find_median( unsigned char * sortedData , int dataLength );
                             
unsigned char find_mean( unsigned char * data , int dataLength );

unsigned find_maximum( unsigned char * data , int dataLength );

unsigned char find_minimum( unsigned char * data , int dataLength );

void sort_array( unsigned char * data , int dataLength );

void swap( unsigned char * firstItem , unsigned char * secondItem );

#endif /* __STATS_H__ */
