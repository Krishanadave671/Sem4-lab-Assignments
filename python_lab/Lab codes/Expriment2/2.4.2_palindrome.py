def isPalindrome(str):
     return str == str[::-1] # reverses a string 
 
 
str = input("Enter a string\n")

if(isPalindrome(str)):
    print(" It is a palindrome")
else :
    print("It is not an palindrome")
 