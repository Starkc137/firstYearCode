grade = int(input())
if (grade >= 75 and grade <= 100){
   print("First")
elif grade >= 70:
   print("Upper second")
elif grade >= 60:
   print("Lower second")
elif grade >= 50:
   print("Third")
elif grade < 50 and grade >= 0:
   print("Fail")
else:
   # if none of the above were true, then we execute this line!
   print("Invalid input! Expected value in range [0, 100]")


