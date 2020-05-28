t = int(input())
for i in range(t):
	n = int(input())
	factrial = 1
	for j in range(2, n+1):
		factorial = factorial*j
	print(factorial)
