num = int(input("Enter No. : "))
r = 0
num_cube = 0

while(num > 0):
    r = num%10
    num = int(num/10)
    num_cube += pow(r, 3)
    print(num_cube)