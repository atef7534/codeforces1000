s = input()
s = s.split("WUB")

res = ""
length = len(s)

for i, v in enumerate(s):
    if v == "":
        continue
    if i == length - 1:
        res += v
    else:
        res += f"{v} "

print(res)
