# ah 7th update calculator

def money(type):
    cost = int(input(f"what is your {type}\n"))
    return cost

rent_cost = money("rent")
utilities_cost = money("utilities cost")
groceries_cost = money("groceries cost")
transport_cost = money("transport cost")
income = money("income")

cost = transport_cost + groceries_cost + utilities_cost + rent_cost
savings=income*1/10
def calculate_persent(type_of_cost):
    percent= type_of_cost/income*100
    return percent

transport_percent = calculate_persent(transport_cost)
groceries_percent = calculate_persent(groceries_cost)
utilities_percent = calculate_persent(utilities_cost)
rent_percent = calculate_persent(rent_cost)
costs = transport_cost + groceries_cost + utilities_cost + rent_cost - savings
spening_money = income - costs

print(savings,"in savings")
print(f"rent is: {rent_percent},% of income")
print(f"utilities is: {utilities_percent},% of income")
print(f"groceries is: {groceries_percent},% of income")
print(f"transport is: {transport_percent},% of income")
print(f"your spening_money is: {spening_money}")
