#!/usr/bin/python

def binarySearch(nums, target):
    start  = 0
    end = len(nums)-1
    while start <= end:
        idx = int((start+end)/2)
        if nums[idx]>target:
            end = idx - 1
        elif nums[idx]<target:
            start = idx + 1
        else:
            return idx
    return -1

if __name__ == "__main__":
    nums = [1,2,3,4,5,6,8,10,12]
    target = 6
    print(binarySearch(nums, target))
