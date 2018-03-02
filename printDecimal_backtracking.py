def printDecimal(digits,prefix = ''):
	if digits == 0:
		print(prefix)
	else:
		for idx in range(10):
			printDecimal(digits-1,prefix + str(idx))


# Main
printDecimal(1)
print('Next')
printDecimal(2)
