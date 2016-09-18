import random

def generator(x,y):
	mynum = random.randint(x,y)
	return mynum

def generator2(x,y):
	mynum2 = random.randint(x,y)
	return mynum2



rand_num = generator(0, 6)
rand_num2 = generator2(0,6)

dice = rand_num + rand_num2

print 'Rolling two six sided dice: %d ' % dice
