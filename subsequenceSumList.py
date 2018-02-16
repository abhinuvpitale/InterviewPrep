'''
Find subsequence which adds up to the given number in an array

2 # testcases
5 12 # number of elements, sum to expect
1 2 3 5 7  # actual arrau
3 10 # number of elements, sum to expectedSum
12 14 15

output
2,4
-1,-1
'''

nCases = int(input())

n = []
expectedSum = []
listNums = []
for count in range(nCases):
    args = list(map(int,input().split(' ')))
    n.append(args[0])
    expectedSum.append(args[1])
    nums = list(map(int,input().split(' ')))
    listNums.append(nums)
sol = []
for case in range(nCases):
    eSum = expectedSum[case]
    startIdx = 0
    endIdx = 0
    currSum = 0
    flag = True
    while flag:
         if currSum < eSum:
             currSum = currSum + listNums[case][endIdx]
             endIdx = endIdx + 1
         elif currSum > eSum:
             currSum = currSum - listNums[case][startIdx]
             startIdx = startIdx + 1
         else:
             flag = False
         if startIdx == n[case] - 1:
             startIdx = 0
             endIdx = 0
             flag = False
    sol.append([startIdx-1,endIdx-1])
print(sol)
