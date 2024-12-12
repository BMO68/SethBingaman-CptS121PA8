/* */

#include "Header.h"

void main()
{
	for (;;) {
		int choice = 0;
		printf("enter function case: \n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: //binrary search
			
				int n, i, list[100], key;
				printf("enter number of elements in array (max 100):\n");
				scanf("%d", &n);
				printf("\nenter elements in ascending order:\n");

				for (i = 0; i < n; ++i)
				{
					scanf("%d", &list[i]);
				}
			int j = 0;
			while(j == 0) {
				printf("\nenter key value for search:\n");
				scanf("%d", &key);
				
				int index = binary_search(list, n, key);
				if (index != -1) {
					printf("Key value found at array position: %d\n", index + 1);
					j = 1;
				}
				else {
					printf("key value was not found\n");
				}
			}
			break;

		case 2: //maximum occurences
			char* str = (char*)malloc(100 * sizeof(char)); int num; char c;
			Occurence* array = (Occurence*)malloc(256 * sizeof(Occurence));
			while (getchar() != '\n');
			printf("Enter a string (max 100 char): ");
			fgets(str, 100, stdin);
			maximum_occurence(str, array, &num, &c);
			printf("%c occurs %d times\n", c, num);

			break;

		case 3: //case for detecting if a string is a palindrome
			printf("enter palindrome:\n");
			char arrays[100] = { '\0' }; int length = 0;
			scanf("%s", &arrays);
			printf("enter length:\n");
			scanf("%d", &length);

			if (is_palindrome(arrays, length) == 1) { printf("is palindrome"); }
			else { printf("is not palindrome\nf"); }

			break;

		case 4: //case for bubble_sort
			int temp3 = 0; char* strings[100] = { '\0' };
			printf("enter amount of strings (max 10):\n");
			scanf("%d", &temp3);
			for (int i = 0; i < temp3; i++)
			{
				scanf("%s", strings[i]);
			}
			bubble_sort(strings, temp3);

			for (int i = 0; i < temp3; i++)
			{
				printf("%s", strings[i]);
			}


			break;

		case 5: //case for sum of prime numbers
			int temp = 0;
			printf("enter number:\n");
			scanf("%d", &temp);
			printf("%d", sum_primes(temp));

			break;
		}
	}
}