# HW 7th loops notes

foods = ["Chocolate", "pasta", "Brownies", "cookies", "Garlic bread"]

for food in foods:
    print(f"{food} is my favorite food!")
    
#What is a loop? loops repeat the code in them for a specified number of times
#What are the two types of loops? while loop and for loops
#What is iteration? repetition of the same code
#What are lists? a list is a collection of data
#How do you make lists in python? using square brackets
#How do you make for loops in python? for i in range(5) put code here
#How do you make while loops in python? it breaks your information down into 3 parts (interator, set stopping point, increase iterator)

"""i = 0
while True:
    print(i)
    i+= 1"""
#Infinate while loop(bad)

#correct while loop
'''i = 1
while i <20:
    print(i)
    i += 1

    x = 1

    while x< 21:
        if x % 2 == 0:
            print(f"{x} is an even number")
        else:
            print(f"{x} is an odd number")
        print(x)
        x+=1'''

import random

d=1
end= random.randint(1,20)

while d !=end:
    print("duck")
    d+=1

print("goose")


while True:
    if d == end:
        print("GOOSE!")
        break

