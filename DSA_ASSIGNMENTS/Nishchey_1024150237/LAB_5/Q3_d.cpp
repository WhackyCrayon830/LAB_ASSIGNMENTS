#include <stdio.h>

// function to count valid bitstrings
int countBitStrings(int n)
{
    // base conditions
    if(n == 0)
        return 1;

    if(n == 1)
        return 2;

    // recursive relation
    return countBitStrings(n-1) + countBitStrings(n-2);
}

int main()
{
    int n;

    printf("Enter length of bitstring: ");
    scanf("%d", &n);

    printf("Total valid bitstrings: %d", countBitStrings(n));

    return 0;
}