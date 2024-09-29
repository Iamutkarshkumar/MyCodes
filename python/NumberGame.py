'''number game program
wap in python that randomly selects a number between 1 and 10 . it will then ask the player to enter their guess .
it will then check to see if that number is the same as the one the computer randomly generated ; if it is then the player has won. if the players
guess is not the same , then it will check to see if the number is higher or lower than the guess and tell the player . the player will have 4 goes
to guess the number correctly ; if they dont guess the number within the number of attempts , then they have lost the game and will be told
what the actual number was'''
import random
i=random.randrange(1,10)
a=int(input('enter a number:'))
if a==i:
  print('you won')
elif a!=i:
  if a>i:
    print('your number is greater than the random no.')
  elif a<i:
      print('your number is smaller than the given no.')
  for x in range(0,4):
    b=int(input('enter another choice:'))
    if b==i:
      print('you won')
      break
    elif b!=i:pass
  if b!=i:
    print('you lost')
    print('the actual number was',i)
