/* */

#include "Header.h"

char* my_str_n_cat(char* destination, const char* source, int n)
{
	char* pointer = destination;

	while (*pointer != '\0') //find end of string
	{
		pointer++;
	}
	while (n-- && *source != '\0') //copy up to n
	{
		*pointer++ = *source++;
	}
	*pointer = '\0'; 

	return destination;
}

int binary_search(int list[], int n, int key)
{
	int F = 1, L = n, M = 0;
	while (F <= L)
	{
		M = (F + L) / 2;
		if (key == list[M])
		{
			return(M);
		}
		else
		{
			if (key > list[M])
			{
				F = M + 1;
			}
			else
			{
				F = M - 1;
			}
		}
		
		return -1;
	}
}

void bubble_sort(char* array[], int n)
{
	int u = n - 1;
	int c = 1;
	while (c > 0) 
	{
		while (c <= u)
		{
			if (strcmp(array[c], array[c - 1]) < 0)
			{
				swap(&array[c], &array[c - 1]);
			}
			c++;
		}
		u--;
	}
}

void swap(char** a, char** b) //complimentary for bubble_sort. It keeps swaps the pointers outside the function for (somewhat) easier evaluation inside the function
{
	char* temp = *a;
	*a = *b;
	*b = temp;
}

int is_palindrome(char* string, int length)
{
	return check(string, 0, length - 1);
}

int check(char* string, int B, int E)
{
	if (string[B] == string[E]) { return 1; }
	if (string[B] != string[E]) { return 0; }

	return check(string, B + 1, E - 1);
}

int sum_primes(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else
	{
		if (prime(n, n / 2))
		{
			return n + sum_primes(n - 1);
		}
		return 0 + sum_primes(n - 1);
	}
}

int prime(int n, int m)
{
	{
		if (m == 1)
		{
			return 1;
		}
		else
		{
			if (n % m == 0)
			{
				return 0;
			}
			else
			{
				return (n, m - 1);
			}
		}
	}
}

void maximum_occurence(char *string, Occurence* array, int* num, char* C) 
{
	int M = -1, MI = -1, j = 0;
	for (int i = 0; i < 256; i++)
	{
		array[0].N_occ = 0;
		array[0].freq = 0;
	}

	for (int i = 0; i < strlen(string); i++)
	{
		j = (string)[i];
		array[j].N_occ++;
		array[j].freq += (1.0 / strlen(string));
	}

	for (int i = 0; i < 256; i++)
	{
		if (M < array[i].N_occ) { M = array[i].N_occ; MI = i; }
	}

	*num = M;
	*C = (char)MI;
}