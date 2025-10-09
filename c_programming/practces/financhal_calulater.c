// ah 7th financhal calculater 
//rent utilities groceries transport income savinges 10% of income expince/income*100
#include <stdio.h>
#include <math.h>

int main(void){

    int rent_cost;
    int utilities_cost;
    int groceries_cost;
    int transport_cost;
    float income;

    printf("what is your rent cost per month\n");
    scanf("%d", &rent_cost);;
    printf("what is your utilities cost per month\n");
    scanf(" %d", &utilities_cost);;
    printf("what is your groceries_cost per month\n");
    scanf(" %d", &groceries_cost);;
    printf("what is your transport_cost per month\n");
    scanf(" %d", &transport_cost);;
    printf("what is your income per month\n");
    scanf(" %f", &income);

    int cost=rent_cost+utilities_cost+groceries_cost+transport_cost;
    int savings=income*1/10;
    int rent_percent=rent_cost / income * 100;
    int utilities_percent=utilities_cost / income * 100 ;
    int groceries_percent=groceries_cost / income * 100;
    int transport_percent=transport_cost / income * 100;
    int spening_money=income-cost-savings;

    printf("%d$ in savings\n", savings);
    printf("your rent of %d$ is %d percent of income\n", rent_cost, rent_percent);
    printf("your utilities of %d$ is %d percent of income\n", utilities_cost, utilities_percent);
    printf("your groceries of %d$ is %d percent of income\n", groceries_cost, groceries_percent);
    printf("your transport of %d$ is %d percent of income\n", transport_cost, transport_percent);
    printf("you have %d$ left to spend\n", spening_money);

    return 0;
}