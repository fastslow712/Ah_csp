// ah 7th update calculator
#include <stdio.h>
#include <math.h>

int find_amownt(char* cost_type){
    int amownt;
    printf("what is your %s per month\n", cost_type);
    scanf("%d", &amownt);
    return amownt;
}
int find_percent(int cost, float divider){
    int percent;
    percent=cost/divider*100;
}
void print_results(char* type, int cost, int percent){
    printf("your %s of %d$ is %d percent of income\n", type, cost, percent);
}
int main(void){
    int rent_cost = find_amownt("rent");
    int utilities_cost = find_amownt("utilities");
    int groceries_cost= find_amownt("groceries");
    int transport_cost= find_amownt("transport");
    float income = find_amownt("income");
    int cost=rent_cost+utilities_cost+groceries_cost+transport_cost;
    int savings=income*1/10;
    int rent_percent = find_percent(rent_cost, income);
    int utilities_percent = find_percent(utilities_cost, income);
    int groceries_percent = find_percent(groceries_cost, income);
    int transport_percent = find_percent(transport_cost, income);
    printf("%d$ in savings\n", savings);
    print_results("rent", rent_cost, rent_percent);
    print_results("utilities", utilities_cost, utilities_percent);
    print_results("groceries", groceries_cost, groceries_percent);
    print_results("transport", transport_cost, transport_percent);

    return 0;
}