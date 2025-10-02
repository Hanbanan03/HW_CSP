# HW 7th functions notes

#What a function is- print and intut
print()
input()
#Why we use functions- smaller codes
#How to write a function in Python-
def welcome():
    name = input("what is your name?")
    print(f"Hello {name}!")

print("This is not in my function")
#welcome()
#What parameters and arguments are- peramiter-what is in the parenthesis  argument-value you give
#How to use parameters and arguments in python
def add(number):
    number+=num_two
    print(number + num_two)

num_one = 12
num_two = 4 

add(80)
#What return statements are- stops the execution of a function and sends the value back
#How to use return statements in a program-

import random

def roll(mod):
    return random.randint(2,18) + mod

print("Here are your stats!")
print(f"Strength: {roll(0)}\nDex: {roll(1)}\nInt: {roll(1)}\nChar: {roll(0)}")