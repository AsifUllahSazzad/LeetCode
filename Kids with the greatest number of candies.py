#1431. Kids with the greatest number of candies
def kidsWithCandies(candies,extraCandies):
    ans = []
    maximum = max(candies)
    for i in range(len(candies)):
        if candies[i]+extraCandies>=maximum:
            ans.append(True)
        else:
            ans.append(False)
    return ans
candies = [10,1,12]
extraCandies = 10
print(kidsWithCandies(candies,extraCandies))