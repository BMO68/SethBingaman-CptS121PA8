/* */

#ifndef HEADER_H
#define HEADER_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#endif

int binary_search(int list[], int n, int key);

int is_palindrome(char* string, int length);

int check(char* string, int B, int E);

char* my_str_n_cat(char* destination, const char* source, int n);

void bubble_sort(char* array[], int n);

void swap(char** a, char** b);

int sum_primes(int n);

int prime(int n, int m);

typedef struct occurence {
	int N_occ;
	double freq;

} Occurence;

void maximum_occurence(char* string, Occurence* array, int* num, char* C);