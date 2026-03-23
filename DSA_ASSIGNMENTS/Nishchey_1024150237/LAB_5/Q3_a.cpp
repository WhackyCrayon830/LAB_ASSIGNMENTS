#include <stdio.h>

// recursive function to solve Tower of Hanoi
void moveDisks(int n, char from, char helper, char to)
{
    // base condition
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    // move n-1 disks to helper pole first
    moveDisks(n-1, from, to, helper);

    // move the largest disk
    printf("Move disk %d from %c to %c\n", n, from, to);

    // move the n-1 disks from helper to destination
    moveDisks(n-1, helper, from, to);
}

int main()
{
    int disks;

    printf("Enter number of disks: ");
    scanf("%d", &disks);

    moveDisks(disks, 'A', 'B', 'C');

    return 0;
}