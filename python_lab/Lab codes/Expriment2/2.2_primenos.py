import array as arr 

    #  Sample input arr[] = {3,4,6,9,13,14,16,17} 
    #        Output arr[] = {4,6,9,13,16}
def printarr(arr):
    for i in arr :
        print(i, end = " ")
    print()
def inputarr(arr):
   str = input("Enter array elements here ")
   res_str = str.split(' ')
   for i in res_str: 
    arr.append(int(i))

def primechecker(n) :
            if n > 1:
                for i in range(2, int(n/2)+1):
                    if (n % i) == 0:
                        return False
    
                else:
                    return True
  
            else:
               return False
  
    
numbers  = arr.array('i', [] )
inputarr(numbers)
for i in numbers :
    if primechecker(i) :
        numbers.remove(i)
printarr(numbers)