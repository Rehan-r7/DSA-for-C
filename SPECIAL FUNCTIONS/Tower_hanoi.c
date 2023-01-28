#include <stdio.h>
void hanoi(int n, int x, int y, int z);
int main()
{
    int a;
    printf("Enter the no. of disks : ");
    scanf("%d", &a);
    printf("Sequence will be :  ");
    //pegs are considerd as 1,2,3 respectively
    hanoi(3, 1, 2, 3);
    return 0;
}
void hanoi(int n, int x, int y, int z)
{
    if (n > 0)
    {
        hanoi(n - 1, x, z, y);
        printf("%d->%d  ", x, z);
        hanoi(n - 1, y, x, z);
    }
}
