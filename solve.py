import os

folders = os.listdir()

for i in folders:
  print(f"<li><a href='https://github.com/atef7534/codeforces1000/tree/main/%23{i[1: 4]}{i[4:].replace(' ','%20')}/solve.cpp'>{i}</a></li>")