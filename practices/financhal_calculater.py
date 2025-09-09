# ah 7th financhal calculater 
#rent utilities groceries transport income savinges 10% of income expince/income*100

rent=int(input("what is your rent\n"))
utilities_cost=int(input("what is your utilities cost\n"))
groceries_cost=int(input("what is your groceries cost\n"))
transport_cost=int(input("what is your transport cost\n"))
income=int(input("what is your income\n"))

cost=rent+utilities_cost+groceries_cost+transport_cost
savings=income*1/10
rent_percent=rent/income*100
utilities_percent=utilities_cost/income*100
groceries_percent=groceries_cost/income*100
transport_percent=transport_cost/income*100
spening_money=income-cost-savings

print(savings,"in savings")
print(rent_percent,"% of income")
print(utilities_percent,"% of income")
print(groceries_percent,"% of income")
print(transport_percent,"% of income")
print(spening_money)