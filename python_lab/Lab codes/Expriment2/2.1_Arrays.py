import  array as arr

def printarr(arr):
    for i in arr :
        print(i, end = " ")
    print()
def inputarr(arr):
   str = input("Enter array elements here ")
   res_str = str.split(' ')
   for i in res_str: 
    arr.append(int(i))

        

int_array = arr.array('i',[])
inputarr(int_array)
print("Array elements are : " ,end = '')
printarr(int_array)

 # append 
x = int(input("Enter the element you want to append? \n"))
int_array.append(x)
print("Array after append : ",end = "")
printarr(int_array)

# slice operators in python - slice() --> reverse the array 
reverse_array = int_array[::-1]
print("Reverse Array : ", end = "")
printarr(reverse_array)

# Get the length in bytes of one array item 
print('Bytes length : ',end = " ")
print(int_array.itemsize)

# To append items from another array - extend()
print("Make another array and enter elements by space ")
dummy_array = arr.array('i',[])
inputarr(dummy_array)
int_array.extend(dummy_array)
print("array after extending : ", end = " ")
printarr(int_array)

# remove elements from array 
x = int(input("Enter the index you want to remove from array?"))
int_array.pop(x)
print("array after removing element : ")
printarr(int_array)

# Insert a specified item at the specified position in the array - Insert()
x = int(input("Enter the position of an array where you want to insert an element "))
y = int(input("Enter the element "))
int_array.insert(x-1 ,y)
print("array after Inserting element : ")
printarr(int_array)