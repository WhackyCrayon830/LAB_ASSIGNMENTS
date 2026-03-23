#include <stdio.h>

// function to count ways to climb stairs
int countWays(int steps)
{
    // base cases
    if(steps == 0 || steps == 1)
        return 1;

    if(steps == 2)
        return 2;

    // recursive calculation
    return countWays(steps-1) + countWays(steps-2);
}

int main()
{
    int n;

    printf("Enter number of stairs: ");
    scanf("%d", &n);

    printf("Total ways to reach the top: %d", countWays(n));

    return 0;
}