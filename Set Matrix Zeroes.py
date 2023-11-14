#Leetcode Problem: 73. Set Matrix Zeroes:
#Brute Force Solution:
def row(arr,i):
    for j in range(len(arr[i])):
        if arr[i][j] !=0:
            arr[i][j] = -1
    return arr

def col(arr,j):
    for i in range(len(arr)):
        if arr[i][j]!=0:
            arr[i][j] = -1
    return arr

arr = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

for i in range(len(arr)):
    for j in range(len(arr[i])):
        if arr[i][j]==0:
            row(arr,i)
            col(arr,j)
        
for i in range(len(arr)):
    for j in range(len(arr[i])):
        if arr[i][j] ==-1:
            arr[i][j] =0
for i in arr:
    print(i)