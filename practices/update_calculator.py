# HW 7th Update budget calculator

income = float(input("what is your monthly income: "))
rent = float(input("What is you monthly rent: "))

utilities = float(input("what is your monthly utilites: "))
groceries = float(input("what is your monthly groceries: "))
transportation = float(input("what is your monthly transportation: "))

rent_percent = (rent / income) * 100
utilites_percent = (utilities / income) * 100
groceries_percent = (groceries / income) * 100
transport_percent = (transportation / income) * 100

savings = income * 0.10

leftover = income - (rent + utilities + groceries + transportation + savings)

print(f"Your rent is ${rent:.2f} and that is {rent_percent:.0f}% of your income.")
print(f"Your utilites are ${utilities:.2f} and that is {utilites_percent:.0f}% of your income")
print(f"Your groceries are${groceries:.2f} and that is {groceries_percent:.0f}% of your income")
print(f"Your transportation is ${transportation:.2f} and that is {transport_percent:.0f}% of your income")
print(f"You should save ${savings:.2f} a month, that is 10% of your income")
print(f"You have ${leftover:.2f} of spending money each month!")