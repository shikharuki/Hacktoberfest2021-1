/*weight in pounds and
height in inches 
 Now calculating the user’s BMI ((weight
multiplied by 703), divided by (height times height)). If the bmi is 30 or
greater, the script should write, “Your weight is considered to be unhealthy.”
Otherwise if the bmi is 25 or greater, then write, “You are currently
considered to be overweight.” Otherwise if the bmi is 18.5 or over, then write
“Your weight is considered normal and healthy”. Otherwise write, “You are
considered underweight.*/

#include<stdio.h>

int main()
{
    char name[20];
    float weight,height,BMI;
    
    printf("Please enter your name: ");
    gets(name);

    printf("\nEnter the basic details");
    printf("\nWEIGHT(in pounds): ");
    scanf("%f",&weight);
    printf("\nHEIGHT(in inches): ");
    scanf("%f",&height);
     
     BMI = (weight*703)/(height*height);
    printf("\nYour BMI is: %f", BMI);

    if(BMI >= 30)
    {
      printf("\n%s ,Your weight is considered to be unhealthy.",name);
    }

    else if(BMI >= 25)
    {
      printf("\n%s ,You are currently considered to be overweight.",name);
    }
    
    else if(BMI >= 18.5)
    {
       printf("\n%s ,Your weight is considered normal and healthy",name);
    }

    else
    {
         printf("\n%s ,You are considered underweight.",name);
    }

    return 0;

}
