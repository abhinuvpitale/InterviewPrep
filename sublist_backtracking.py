'''
Backtracking 101
'''

def subList(a):
	subListHelper(a,[],a)

def subListHelper(a,chosen,available):
	if len(available) == 0:
		print(chosen)
	else:
		chosen.append(available[0])
		subListHelper(a,chosen,available)
		available.remove(chosen[len(chosen)-1])
		subListHelper(a,chosen,available)
		#available.add(chosen[len(chosen)-1])


subList([1,2,3,4])
