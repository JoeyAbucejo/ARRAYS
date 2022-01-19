#include <stdio.h>
#include <stdlib.h>


int main()
{
    int size, *arr, sum, errHandler; //Variables
    size = 0;
    sum = 0;


    printf("  Size of Array:  "); //Input the Array Size
    errHandler = scanf("%d",&size);

    if(!errHandler){ //Prints error if non-numerical characters are inputted.
        printf("\n Invalid Input!  Enter number Only \n\n");
        return 0;
    }

    if(size < 5 || size > 10)
    {
        printf("  Array Size Limit is 5 to 10 Only.  ");
        return 0;   //Prints invalid if size limit is less than 5 and greater than 10.

    }
     arr = (int *) malloc(sizeof(int) * size);


     for(int i = 0; i < size; i++)
     {
          printf("  Element %d :  ",i+1);
          scanf("%d", &arr[i]);

          sum += arr[i]; //Adds the inputted elements.
     }
     printf("\n  Sum of all array elements : %d \n", sum);

     return 0;
}
