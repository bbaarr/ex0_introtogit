#include <stdio.h>
#include <stdlib.h>

#define NOT_POWER -1
#define MAX_SIZE 256

// returns the exponent j if the number is a power of 2: 2^j
int exponentIfIsPower(int number){
    int exponent=0;
    int i=1;
    while(i<=number){
        if(i==number){
            return exponent;
        }

        i=i*2;
        exponent++;
    }

    return NOT_POWER;
}

int main()
{
    printf("Enter size of input:\n");
    int size;
    scanf("%d", &size);
    if(size<=0){
        printf("Invalid size\n");
        return 0;
    }

    int numberIsPower[MAX_SIZE];
    int number;
    printf("Enter numbers:\n");
    int i;

    int exponents_sum=0;
    int exponent[MAX_SIZE];
    int countPower=0;
    for(i=0; i<size; i++){
        if(scanf("%d", &number)!=1){
            printf("Invalid number\n");
            return 0;
        }
        if(exponentIfIsPower(number)!=NOT_POWER){
            exponent[countPower]=exponentIfIsPower(number);
            number[countPower]=number;
            exponents_sum+=exponent[countPower];
            countPower++;
        }
    }
    for(i=0; i<countPower; i++){
        printf("The number %d is a power of 2: %d = 2^%d\n");
    }
    printf("Total exponent sum is %d\n", exponents_sum);

    return 0;
}
