days = 398

years = days//365
days -= years*365
weeks = days//7
days -= weeks*7
print(years, weeks, days)
