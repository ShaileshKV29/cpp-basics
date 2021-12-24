import random

arr = [1,2,3]
arr2 = []

for item in arr:
    arr2.append(item)
    arr2.append(2*item)

print(arr2)

for i in range(0, len(arr2)):
    randInt = random.randint(0, 5)
    arr2[i], arr2[randInt] = arr2[randInt], arr2[i]

print(arr2)