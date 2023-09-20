grade = int(input())
if grade >= 75 and grade <= 100:
   print("A")
elif grade >= 70:
   print("B")
elif grade >= 60:
   print("C")
elif grade >= 50:
   print("D")
elif grade < 50 and grade >= 0:
   print("F")
else:
   # if none of the above were true, then we execute this line!
   print("Invalid input! Expected value in range [0, 100])

print("Program terminating...)
