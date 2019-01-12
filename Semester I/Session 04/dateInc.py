#! python3
#  dateInc.py - Increments a given date by one day manually.

def Inc(n):
    if n:
        date[0] = 1; date[1] += 1
    else:
        date[0] += 1

while True:
    date = input("Enter a date (DD/MM/YYYY)\n").split("/")
    date = [ int(i) for i in date ]

    if 1<=date[0]<=31 and 1<=date[1]<=12 and 1<=date[2]<=9999:
        if date != 12:
            if date[1] in [1, 3, 5, 7, 8, 10]:
                if date[0] == 31:
                    Inc(1)
                else:
                    Inc(0)
            elif date[1] in [4, 6, 9, 11]:
                if date[0] == 30:
                    Inc(1)
                else:
                    Inc(0)
            elif not date[2]%4:
                print("LEAP YEAR!")
                if date[0] == 29:
                    Inc(1)
                else:
                    Inc(0)
            else:
                if date[0] == 28:
                    Inc(1)
                else:
                    Inc(0)
            break
        else:
            if date[0] == 31:
                date[0] = 1; date[1] = 1; date[2] += 1
            else:
                Inc(0)
    else:
        print("Invalid date format!")

date = [ str(i) for i in date ]
print("/".join(date))
