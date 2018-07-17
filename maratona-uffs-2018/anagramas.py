def nonRepeated(entry):
	alpha = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
	p = 0
	i = 0 
	i2 = 0
	while i < len(entry):
		if (alpha[ord(entry[i]) - 97]) == 0:
			alpha[ord(entry[i]) - 97] = 1
		else:
			alpha[ord(entry[i]) - 97] = 2
		i += 1

	while i2 < len(alpha):
		if alpha[i2] == 1:
			p += 1
		i2 += 1
	return p

def combinations(p, n):
	result = 1
	index = 0
	while index < p:
		result *= n - index
		index += 1
	print (result)
	return result % 1000000007


def anagramas():
	entry = input()
	p = nonRepeated(entry)
	n = len(entry)
	print (combinations(p, n))

anagramas()

