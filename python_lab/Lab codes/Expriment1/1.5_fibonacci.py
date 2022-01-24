# Program to find fibonacci series of n term
#  using reccursion 
def fib(n) :
    if n <= 1 :
        return n
    else :
        return fib(n - 1 ) + fib(n - 2 )


n = int(input("Which term you want to find of fibonacci series : "))
for i in range(n) :
    print(fib(i + 1), end = " ")