#include <stdio.h> 

int main() {
    float num1, num2, sum, quotient, difference, product; 
    char operands;
    printf("-------------------------\n");
    printf("Select operation:  \n ");
    printf("+, -, *, / \n"); 
    printf("-------------------------\n");



    printf("Enter numbers: "); 
    scanf("%f" "%f", &num1, &num2);

    printf("Enter operation: ");
    scanf(" %c",&operands);
    

        if (operands == '+')
        {
            sum = num1 + num2; 
            printf("%f", sum);
        }
        else if (operands == '*')
        {
            product = num1 * num2; 
            printf("%f", product);
        }
        else if (operands == '-') {
            difference = num1 - num2; 
            printf("%f", difference);
        }
        else if(operands == '/'){
            quotient = num1 / num2; 
            printf("%f",quotient);
        }
        else {
            printf("Invalid!"); 
        }

    return 0; 
}