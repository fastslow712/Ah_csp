# ah 7th financhal calculater
#rent utilities groceries transport income savinges 10% of income expince/income*100

rent=input("what is your rent\n")
utilities_cost=input("what is your utilities cost\n")
groceries_cost=input("what is your groceries cost\n")
transport_cost=input("what is your transport cost\n")
income=input("what is your income\n")
cost=rent+utilities+groceries+transport
savings=income*1/10
rent_percent=rent/income*100
utilities_percent=utilities/income*100
groceries_percent=groceries/income*100
transport_percent=income/income*100
print(savings)
print(rent_percent,rent)
print(utilities_percent,utilities)
print(groceries_percent,groceries)
print(transport_percent,transport)
spening_money=income-rent-utilities-groceries-transport-savings
print(spening_money)