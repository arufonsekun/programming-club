def encryption():
	strings = []
	cases = int(input())
	for e in range(cases):
		message = input()
		strings.append(shiftRight(message))
	
	for string in strings:
		reverseShiftHalfLeft(string) 

	

def shiftRight(string):
	output = str()
	for char in string:
		if (char >= 'a' and char <= 'z') or (char >= 'A' and char <= 'Z'):
			output += chr(ord(char) + 3)
		else:
			output += char
	return output

def reverseShiftHalfLeft(string):
	reversedd = string[::-1]
	if len(reversedd) % 2 == 0:
		middle = int(len(reversedd) / 2)
	else:
		middle = int(len(reversedd) / 2)

	half1 = reversedd[0:middle]
	while middle < len(reversedd):
		half1 += chr(ord(reversedd[middle]) - 1)
		middle += 1

	print(half1)

encryption()
	