inputstring = input("Enter strings seperated by a space\n")
user_list = inputstring.split()
user_list.sort()
print("sorted order are : ",end = " ")
for i in user_list :
    print(i, end = " ")
