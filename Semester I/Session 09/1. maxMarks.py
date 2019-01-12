#! python3
#  maxMarks.py - Given two lists (marks and names), WAF to return a tuple containing the highest marks and the corresponding names.

def highest(marks, names):
  TopM = max(marks)
  TopN = names[marks.index(TopM)]
  return(TopM, TopN)

marks = [20, 30, 40, 50, 60, 100]
names = ['A', 'B', 'C', 'D', 'E', 'VRG']
print(highest(marks, names))
