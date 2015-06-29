/* CS261- Assignment 1 - Q.3*/
/* Name:
 * Date:
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int* number, int n){
    /*Sort the given array number , of length n*/
    int temp;
    int x;

    for (x = 0; x < n; x++)
    {
	if (number[x] > number[x+1])
	{
	    temp = number[x+1];
	    number[x+1] = number[x];
	    number[x] = temp;
	}
    }
 
}

int main(){
    /*Declare an integer n and assign it a value of 20.*/
    int n = 20;

    /*Allocate memory for an array of n integers using malloc.*/
    int myArray[n];

    /*Fill this array with random numbers, using rand().*/
    srand(time(NULL));

    for (int x = 0; x < n; x++)
    {
	myArray[x] = rand() % 100 + 1;
    };
    
    /*Print the contents of the array.*/
    printf("\n");
    
    for (int y = 0; y < n; y++)
    {
	printf(" %d", myArray[y]);
    };
    
    printf("\n");

    /*Pass this array along with n to the sort() function of part a.*/
    sort(&myArray[n], n);

    /*Print the contents of the array.*/    
    printf("\n");

    for (int z = 0; z < n; z++)
    {
	printf(" %d", myArray[z]);
    };

    return 0;
}
