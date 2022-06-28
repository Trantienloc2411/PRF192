#include<stdio.h>
#include<math.h>
void bin_To_dec () 
{
    int binary_num = num;
    int remain;
    int base = 1;
    int decimal_num = 0;
    printf("Please insert binary number (>0): ");
    scanf("%d", &num);
    while (num > 0)
    do
    {
        remain = num % 10;
        decimal_num = decimal_num + remain * base;
        num = num / 10;
        base *= 2;
    }
    
    printf("The decimal number is: %d \t", decimal_num);
}
void octal_To_dec ()
{
    int p = 0, decimal_num = 0;
    int octal_number = num ;
    int remain;
    printf("Please insert octal number: ");
    scanf("%d\t", &num);
    while(num > 0)
    do
    {
        remain = num % 10 ;
        octal_number /= 10;
        decimal_num = decimal_num + remain * pow(8 , p);
        ++p;
    }
    printf("The decimal number is: %d \t", decimal_num);
}
// void hexal_To_dec ()
// {

// }
int main ()
{
    int num;
    int num_main;
    printf("                Welcome to my Assigment:                \n" );
    printf("                Please enter number to start program                \n" );
    printf("                Program 1[1]:Convert Binary to Decimal;               \n" );
    printf("                Program 2[2]:Convert Octal to Decimal;               \n" );
    printf("                     Exit[E]:Exit Program                          \n" );
    scanf("%d", &num_main);
    switch (num_main)
        case '1':
        bin_To_dec();
        case '2':
        octal_To_dec();
        case 'E' :
        return 0;
}