#Ah 7th old enough

age = int(input("what is your age?\n"))
if age >= 18:
    print("you can vote!")
elif age >= 16:
    print("you can drive!")
elif age >= 15:
    print("you can get a learners permit!")
elif age >= 4:
    print("you can go to school!")
else:
    print("you are not old enough!")