#Ah 7th loops notes

foods = ["chocolate", "pasta", "brownies", "cookies", "garlic", "bread", "fajitas"]
#for loop
for food in foods:
    print(f"{food} is my favorite food")
    print(f"Hi")
for x in range(1,21):
    print(x)
#i=0
#while True:
#    print(i)
#    i+= 1
#infinit loop
i = 1
while i < 21:
    print(i)
    i+= 1
x = 1
while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even number")
    else:
        print(f"{x} is an odd number")
    x += 1
import random
d = 1
end = random.randint(1,20)
#while d != end:
#    print("duck")
#    d += 1
#print("goose")
while True:
    if d == end:
        print("goose")
        break
    else:
        print("duck")
        d +=1




#What is a loop? 
#a repitiing comand

#What are the two types of loops?
#for loop, wlile loop broken up into how mene times run, stopong point, increas, how maney tims run inctese

#What is iteration
#how maney times a code has run

#What are lists? 
#a whay of storing mutipule things

#How do you make lists in python? 
#vareable_name =["thing 1", "thing 2", "ect"]

#How do you make for loops in python? 
#for nonplueralname in list_name:

#How do you make while loops in python?
#while vareabel is thing:
