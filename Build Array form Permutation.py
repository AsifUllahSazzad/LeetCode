#1920.Build Array from Permutation

#Brute Force Solution:
#Time Complexity: O(n)
#Space Complexity: O(n)
def BuildArray(nums):
    ans = []
    return [nums[i] for i in nums]

nums = [[5,0,1,2,3,4],[0,2,1,5,3,4],[],[0,1]]
for i in nums:
    result = BuildArray(i)
    print(result)

#Optimize Solution:
#Time Complexity: O(n)
#Space Complexity: O(1)
    
def buildArray(nums):
    n = len(nums)
    for i in range(n):
        nums[i] = n*(nums[nums[i]]%100)+nums[i]

    for i in range(n):
        nums[i] = nums[i]%n
    return nums

nums = [0,2,1,5,3,4]
buildArray(nums)
print(nums)