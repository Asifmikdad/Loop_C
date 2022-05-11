#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <=n; i++){
        sum += i;
        printf("i = %d, Sum = %d\n", i, sum);
    }
    printf("Final sum = %d\n", sum);
    return 0;
}
