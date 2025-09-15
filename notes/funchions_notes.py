# ah 7th notes

#What a function is
#set of code that makes somthing hapen print and input are the basick funchionsh 

def welcome():
    name = input("what is your name")
    print(f"hello, {name}!")

print("this is not in my funchion")
#welcome()
#welcome()
#welcome()
#welcome()

#Why we use functions
#to makes somthing hapen

#How to write a function in Python
#def function name. when use function: name run function

#What parameters and arguments are
#parameters vereables that egzists onley in a funchon arguments what the parameter is asined when the funchion is called on
#def add(number)

#How to use parameters and arguments in python
#make a funchion

#What return statements are
#
import random

def roll(mod):
    return random.randint(2, 18) + mod
str = roll(0)
dex = roll(1)
int = roll(1)
char = roll(0)
print(f"str: {str}\ndex: {dex}\nint: {int}\nchar: {char}")


#How to use return statements in a program
#must be in a funchion

#indents mean it goes inside funchion