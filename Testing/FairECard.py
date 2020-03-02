#!/usr/bin/python3
import random
def compare(eC, sC):
      #  print (eC+" "+ sC)
        if eC == sC and eC == 'O':
            return 0
        elif eC == 'X' and sC == 'X':
            #print ("ZOINK")
            return -1 #slave won
        else:
            return 1

def cardSelect(_citizen):
    cInd = random.randint(0,_citizen)
    if cInd == 0:
        return 'X'
    else:
        return 'O'
def ARound(p1Status):
    citizen = 5;
    while (citizen > 0):
        player1Card = cardSelect(citizen)
        player2Card = cardSelect(citizen)
        citizen -= 1
        if p1Status == 'E':
            winState = compare(player1Card, player2Card)
            if winState == 1: #emperor won p1
               # print("Meow")
                return 1 #add to player1s score
            if winState == -1:
               # print("Woof")
                return -1

        else:
            
            winState = compare(player2Card, player1Card)
            if winState == 1: #emperor won p2
                #print("Woof")
                return -1 #add to player2's score
            if winState == -1:
               # print("Meow")
                return 1


def match(rounds):
    player1 = 'S'
    player2 = 'E'
    p1Score = 1
    p2Score = 0
    swaps = 0
    for x in range(rounds):
        rWin = ARound(player1)
        if rWin == 1:
            p1Score += 1
            if player1 == 'S':
                p1Score += 3
                player1 = 'E'
                player2 = 'S'
                swaps += 1
        if rWin == -1:
            p2Score += 1
            if player2 == 'S':
                p2Score += 3
                player2 = 'E'
                player1 = 'S'
                swaps += 1
    print(p1Score , " Starting Slave")
    print(p2Score , " Starting Emperor")
    print (swaps)
    
    if (p1Score>p2Score):
        return 1
    elif p2Score>p1Score:
        return -1
    else:
        return 0

p1Wins = 0
p2Wins = 0
for x in range(10000):
    sol = match(15)
    if sol == 1:
        p1Wins += 1
    if sol == -1:
        p2Wins +=1

print(p1Wins)
print(p2Wins)
print(abs(p1Wins - p2Wins)

