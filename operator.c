#include <stdio.h>
int main()
{
    int number1,number2;

    printf("input Number1 = ");
    scanf("%d",&number1);
    printf("input Number2 =");
    scanf("%d",&number2);

    
    printf("%d + %d = %d\n",number1,number2,number1+number2);
    printf("%d - %d = %d\n", number1,number2,number1-number2);
    printf("%d X %d = %d\n",number1,number2,number1*number2);
    printf("%d / %d = %d\n",number1,number2,number1+number2);
    printf("%d mod %d = %d\n",number1,number2,number1%number2);
    return 0;
}