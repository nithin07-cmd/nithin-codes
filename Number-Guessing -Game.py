from random import randrange 
n=randrange(1000)
count=0
first,second=10,10
while True :
    x = int(input("Guess the Number: "))

    if n==x:
        count+=1
        print("You Won !!! ")
        print("Steps Taken : ",count)
        print("Game Over")
        break
    elif n<x:
        count+=1
        print("Smaller")
        print("Steps Taken : ",count)
        print()
    else:
        count+=1
        print("Bigger")
        print("Steps Taken : ",count)
        print()

    



    