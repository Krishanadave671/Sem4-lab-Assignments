str = input("Enter a string \n")

result = str[0] + str[1 : ].replace(str[0], "@")
print("Resultant string = ",end = " ")
print(result)
