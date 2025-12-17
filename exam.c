#include<stdio.h>
int main(){

        
        float celcius,fer;
        printf("enter temp in  celcius: ");
        scanf("%f",&celcius);
        fer=(celcius*9/5)+32;
        printf("The Temp in fer is %f\n",fer) ; 
        
        

        //gross salary

        float hrapr,dapr,tapr,hra,da,ta,grossalary, basicsalary;
        printf("\nEnter Your Salary:");
        scanf("%f",&basicsalary);
        printf("Enter Your HRA:");
        scanf("%f",&hrapr);        
        printf("Enter Your DA:");
        scanf("%f",&dapr);        
        printf("Enter Your TA:");
        scanf("%f",&tapr);
        hra = basicsalary * (hrapr / 100.0);
        da =  basicsalary * (dapr/ 100.0);
        ta =  basicsalary * (tapr/ 100.0);
        grossalary = basicsalary + hra + da + ta;
        printf("The gross salary is:%f\n",grossalary);

        //triangle finder
        int first,second,third;
        printf("\nEnter first angle:");
        scanf("%d",&first);
        printf("Enter second angle:");
        scanf("%d",&second);
        third=180-(first+second);
        printf("The Third angle is %d",third);
}
