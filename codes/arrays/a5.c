#include<stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE], i;
    for ( i = 0 ; i < SIZE ; i++ )
    {
        array[i] = i * 1.1;
    }
    for ( i = (SIZE - 1) ; i >= 0 ; i-- )
    {
        printf("%d\t", array[i]);
    }
    return 0;
}