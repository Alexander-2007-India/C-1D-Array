//1D ARRAY

#include <stdio.h>
int main()
{
    int marks[5];//an array of 5 elements
    printf("Enter 5 marks: ");
    for(int i=0; i<5; i++)//will run till 0, 1, 2, 3, 4
    {
        scanf("%d", &marks[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%4d", marks[i]);
    }
    
    return 0;
}