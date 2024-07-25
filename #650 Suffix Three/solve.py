t = int(input())
for _ in range(t):
  s = input()
  # solution
  if s.endswith("po"):
    print("FILIPINO")
  elif s.endswith("mnida"):
    print("KOREAN")
  else:
    print("JAPANESE")