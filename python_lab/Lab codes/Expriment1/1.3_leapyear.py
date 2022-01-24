# condition for leap year is Every year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years if they are exactly divisible by 400. For example, the years 1700, 1800, and 1900 are not leap years, but the years 1600 and 2000 are

year = int(input("Enter the Year : "))
if(year % 4 == 0):
    if(year % 100 == 0):
        if(year % 400 == 0) :
            print(" It is a leap year")
        else:
            print("Not a leap year ")
    else:
        print(" It is a leap year ")
        
else :
    print("It is not a leap year")
    