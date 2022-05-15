#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int product = 1;

    for (int i = 1; i <=n; i++){
        product *= i;
        printf("i = %d, product = %d\n", i, product);
    }
    printf("Final product = %d\n", product);
    return 0;
}
