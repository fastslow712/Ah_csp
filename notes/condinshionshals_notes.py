# ah 7th condishonals notes

#homework_done = input("is your homework done\n").strip().lower()

#if homework_done =="yes":
#    print("yes you can go")
#else:
#    print("then go do your homwork")

#What puts something inside of the “if” statement?
#if it is indented it is in the condishinal

#What do if statements do?
#they do somthing if the statmints is true

#What are boolean statements? 
#statments that ask the computer is it true or fales 

#What do else statements do?
#else statmints tells the computer what to do if the statmint is false

#What kind of statement do you use if you have more than 2 needed outcomes?
#elif it is shot for else if it will onley run if it is true and the if statmint is fales
grade = 100

if grade >= 90:
    if grade > 100:
        print(f"you cheated that isn't posible!")
    else:
        print(f"you have {grade}% that is an A!")
elif grade > 80:
    print(f"you have {grade}% that is a B!")
elif grade >= 70:
    print(f"you have {grade}% that is a c!")
else:
    print(f"you have a {grade}% that is a d or lower:(")

#What do each of the different symbols mean in conditionals?

#<
#less than
#>
#grater than
#<=
#less than or eqwal to
#>=
#grater than
#==
# are they eqwal
#!
#not equal to##
#What are the 3 logical operators?
#and, or, not.
name=input("what is your name\n")
if name == "Ms laRose":
    print(f"you are the teacher")
elif name == "Tia" or name =="Ashley":
    print(f"you are a Ta")
else:
    print(f"you are a student")

#What are logical operators for?
#they allow us to combin mutepule condishions

#What does a nested conditional statement do?
#it is a condishnal that is in a condishionl and onley runs if the first condishional is true

#you put the most likley out com in the else len=find leangth