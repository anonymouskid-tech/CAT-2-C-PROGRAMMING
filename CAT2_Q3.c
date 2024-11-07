/*
A C PROGRAM TO CALCULATE THE GROSS PAY ,TAX AND NET PAY OF AN EMPLOYEE IN A WEEK.
AUTHOR:MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE:07/11/24.
*/
#include<stdio.h>
int main(){
float hours_worked,hourly_wage,gross_pay,net_pay,tax,overtime_pay,regularS_pay;

// prompt the user to enter  hours worked and hourly wage
printf("Enter the hours worked:");
scanf("%f",&hours_worked);

printf("Enter the hourly wage:");
scanf("%f",&hourly_wage);

//calculate the gross pay
if(hours_worked>40){
	regular_pay=40*hourly_wage;
	overtime_pay=(hours_worked-40)*1.5*hourly_wage;
	gross_pay=regular_pay+overtime_pay;
}
else{
	gross_pay=hours_worked*hourly_wage;
}
//calculate tax.
if(gross_pay<=600){
	tax=gross_pay*0.15;
}
else{
	tax=(600*0.15)+(gross_pay-600)*0.20;
}
// calculate net pay
net_pay=gross_pay-tax;

// print the results
printf("Gross pay: $%.2f \n",gross_pay);
printf("Tax: $%.2f \n",tax);
printf("Net pay: $%.2f \n",net_pay);

return 0;
}