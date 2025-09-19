# ah 7th update calculator

def money(type):
    cost = int(input(f"what is your, {type}\n"))
    return cost
money("rent")
rent_cost = cost

money("utilities cost")
utilities_cost = cost

money("groceries cost")
groceries_cost = cost

money("transport cost")
transport_cost = cost

money("income")
income = cost

cost = transport_cost + groceries_cost + utilities_cost + rent_cost
savings=income*1/10
def calculate_persent(type_of_cost):
    percent= type_of_cost/income*100
    return percent

calculate_persent(transport_cost)
transport_percent = percent
calculate_persent(groceries_cost)
groceries_percent =percent
calculate_persent(utilities_cost)
utilities_percent = percent
calculate_persent(rent_cost)
rent_percent = percent
spening_money = income - transport_cost + groceries_cost + utilities_cost + rent_cost

print(savings,"in savings")
print(rent_percent,"% of income")
print(utilities_percent,"% of income")
print(groceries_percent,"% of income")
print(transport_percent,"% of income")
print("your spening_money is", spening_money)
