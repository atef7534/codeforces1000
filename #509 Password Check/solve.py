import string
password = input()
small_letters = string.ascii_lowercase
capital_letters = string.ascii_uppercase
digits = string.digits
f_s = False
f_c = False
f_d = False
for c in password:
  f_s = True if c in small_letters else f_s
  f_c = True if c in capital_letters else f_c
  f_d = True if c in digits else f_d
print("Correct") if len(password) >= 5 and f_s + f_d + f_c == 3 else print("Too weak")
