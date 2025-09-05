# HW 7th expression notes

# what is an algorithm?
    # Just a set of instuction to complete a task
name = input("Hello, what is your name:\n")
print("Hello", name)

# List steps in an algorithm
# 1. Declare variables(get needed info)
# 2. Do the equations- Do the things
# 3. Display results
# Treyson has 12 apples, he has 5 friends that he wants to give apples to. How many apples does each friend get? 
apples = 12
friends =5
print("Each friend gets", apples/friends, "apples!")


# List ALL of the different mathematical operators (Give me the symbol and tell me what it does)
num_1= int(input("Tell me a number:\n"))
num_2=float(input("Tell me another number:\n"))
num_1+=num_2

print("Subtrction(-): ", num_1)
num_1-=num_2
print("Addition(+): ", num_1)
num_1+=num_2
print("Multiplication(*): ", num_1)
num_1*=num_2
print("Division(/): ", round (num_1, 2)) #floats are numbers with decimals #to round numbers write round division/: , round(num<1/num_2, 2) 2=number of decimal places
num_1/=num_2
print("exponents(**): ", num_1)
num_1**=num_2
print("Interger division(//): ", num_1) #will only give you the whole number of a division equation
num_1//=num_2
print("Modulo(%): ", num_1) #gives the remainder
num_1%=num_2

#average age of a group of 4 people
age=3
age2=29
age3=10
age4=18
print("The average is", (age+age2+age3+age4)/4)

# = is assignment operator 