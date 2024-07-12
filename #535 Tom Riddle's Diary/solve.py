"""
  author: atef_ai
  date: Jul 12 2024
  A. Tom Riddle's Diary
"""
people = int(input())
diary = dict()
for _ in range(people):
  person = input()
  if not diary.get(person, 0):
    print("NO")
    diary[person] = True
  else:
    print("YES")

