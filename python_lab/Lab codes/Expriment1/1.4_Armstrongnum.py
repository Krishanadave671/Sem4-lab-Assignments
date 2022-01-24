# Program to print all armstrong number in range 1 to 1000.

for i in range(1, 1000):
    sum = 0
    n = i
    while(n > 0):
        ld = n % 10
        sum += ld ** 3
        n //= 10
        
    if(sum == i) :
        print(i, end = " ")
    
    


    


