from datetime import datetime
DOB = input("Enter your DOB (DD/MM/YYYY)\n")
DOB = datetime.strptime(DOB, "%d/%m/%Y")
T = datetime.today()
delta = T - DOB
print("Total No. of days =", int(delta.days))
print("Total No. of seconds =", int(delta.total_seconds()))
