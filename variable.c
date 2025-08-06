#include <stdio.h>
#include <stdbool.h>

int main()
{
        //student data
        char name [10] = "Tang", gender = 'M';
        int Age = 15;
        float GPAX = 3.53;
        bool status = true;

        Age = 15;
        GPAX = 4.00;


        //output data
        printf("name = %s \n", name);
        printf("Age = %d \n",Age);
        printf("Gender = %c \n",gender);
        printf("status = %2.f \n",GPAX);
        printf("DFA = %d \n",status);
        return 0;
}