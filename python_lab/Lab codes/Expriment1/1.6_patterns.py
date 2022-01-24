# A                  *****               1                   * 
# B B                ****               121                 *  * 
# C C C              ***               12321               *  *  * 
# D D D D            **               1234321             *  *  *  * 
# E E E E E          *               123454321           *  *  *  *  * 

# pattern 1:
row = int(input("Enter the no of rows : "))

for i in range(row) :
    for j in range(i + 1) :
        print(chr(65 + i),end = " ")
    print()

print()
print()

# pattern 2  :
for i in range(row + 1) :
     for j in range(i) :
        print(' ', end = " ")
     for j in range(row - i ) :
        print("* ",end = "")
     print()
     
# pattern 3 :
for i in range(row) :
    for j in range(row - i - 1 ):
        print(' ', end = " ")
    for j in range(i + 1) :
        print(j + 1 , end = " ")
    for j in range(i):
        print(i - j , end = " ")
    print()


   
# pattern 4 :

for i in range(row + 1) :
    for j in range(row - i) :
        print(' ',end = "")
    for j in range(i) :
        print("* ",end = "")
    print()
        



