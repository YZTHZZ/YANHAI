#include <stdio.h>
int main(){
    int div=10000;
    int mod=30000;
    int mul=1;
    
    int sum = 0;
    do{
        printf("%d,%d,%d\n", mod / div,mod % div,div/10);
        sum += (mod / div) * mul;
        mod = mod % div;
        div = div / 10;
        mul*=10;
        if (div > 0) {
            printf(",");
    
        }
    } while (div > 0);

    printf("%d\n",sum);

    return 0;

}