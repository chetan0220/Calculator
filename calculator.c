             //calculator simulator




#include<stdio.h>
#include<math.h>

int main()          

{
    int num1,num2, operation;
    float base,exp;
    int i,factorial,n; // for factorial
     
    
    printf("\t\t$ CALCULATOR $\n\n");
    printf("For Addition type 1\n");
    printf("For Subtraction type 2\n");
    printf("For Multiplication type 3\n");
    printf("For Division type 4\n");
    printf("For calculating Power (x^y) type 5\n");
    printf("For calculating Factorial [x!] type 6\n");
    printf("To exit calculator type 0\n\n");

    repeat:

    printf("Enter your choice : ");
    scanf(" %d", &operation);

    


   switch (operation)
    {
        case 1:

        printf("Enter first number \n ");
        scanf(" %d",&num1);
        printf("Enter second number \n ");
        scanf(" %d",&num2);
        printf("Addition of entered numbers is : %d\n ",num1+num2);
        break;
        

        case 2:
        printf("Enter first number : ");
        scanf(" %d",&num1);
        printf("Enter second number : ");
        scanf(" %d",&num2);
        printf("Subtraction of entered numbers is : %d\n ",num1-num2);
        break;


        case 3:
        printf("Enter first number : ");
        scanf(" %d",&num1);
        printf("Enter second number : ");
        scanf(" %d",&num2);
        printf("Multiplication of entered numbers is : %d\n ",num1*num2);
        break;


        case 4:
        printf("Enter numerator : ");
        scanf(" %d",&num1);
        printf("Enter denominator : ");
        scanf(" %d",&num2);
        printf("Division of entered numbers is : %d\n",num1/num2);
        break;


        case 5:
        
        printf("Enter Base :\n");
        scanf(" %f",&base);
        printf("Enter exponent :\n");
        scanf(" %f",&exp);
        printf("Power is : %.2f\n",pow(base,exp));
        break;


        case 6:
        i=1,n,factorial=1; 
        printf("Enter the number:\n");
        scanf(" %d",&n);
        a:
        if(i<n)
        {
        i+=1;
        factorial *=i;
        goto a;
        }
        printf("Factorial of entered number is : %d\n",factorial);
        break;


        case 0:
        return 0;



        default :
        printf(":( Enter valid choice \n");


    }
   goto repeat;
  

    
    return 0;
}