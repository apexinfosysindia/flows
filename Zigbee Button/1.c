#include <stdio.h>
int main()
{
    int n, num1, num2, num3, num4, num5, sum;
    printf("Input 5 numbers : ");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    int repeat=1;
    while(repeat==1){
        printf("\nChoose any one from below");
        printf("\nEnter 1 to find out smallest number\n");
        printf("Enter 2 to find out largest number\n");
        printf("Enter 3 to find out sum of the numbers\n");
        printf("Enter 4 to find out average of the numbers\n");
        printf("\nEnter choice no :");
        scanf("%d", &n);
        switch (n)
        {
        case 1:{
            if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
            {
                printf("Smallest number is %d \n", num1);
            }
            else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
            {
                printf("Smallest number is %d \n", num2);
            }
            else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
            {
                printf("Smallest number is %d \n", num3);
            }
            else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
            {
                printf("Smallest number is %d \n", num4);
            }
            else if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
            {
                printf("Smallest number is %d \n", num5);
            }
            break;
        }
        case 2:{
            if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
            {
                printf("Greatest number is %d  \n", num1);
            }
            else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
            {
                printf("Greatest number is %d  \n", num2);
            }
            else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
            {
                printf("Greatest number is %d  \n", num3);
            }
            else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
            {
                printf("Greatest number is %d \n", num4);
            }
            else if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
            {
                printf("Greatest number is %d \n", num5);
            }
            break;
        }
        case 3:{
            sum = num1 + num2 + num3 + num4 + num5;
            printf("The sum of the 5 numbers you entered is %d \n", sum);
            break;
        }
        case 4:{
            float average = (num1 + num2 + num3 + num4 + num5) / 5;
            printf("The average of the 5 numbers you entered is %f \n", average);
            break;
        }
        default: printf("wrong choice");
        }
        int again;
        printf("\n\nDo you want to run again? \nEnter 1 for yes and 0 for no: ");
        scanf("%d",&again);
        if(again==0){
            repeat = 0;
        }
}
}
