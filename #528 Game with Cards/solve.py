"""
  author: atef_ai
  date: Jul 12 2024
  A. Game with Cards
"""
tests = int(input())
for _ in range(tests):
  size_a = int(input())
  a_nums = max(list(map(int, input().split())))
  size_b = int(input())
  b_nums = max(list(map(int, input().split())))
  print("Alice\nAlice") if a_nums > b_nums else print("Bob\nBob") if a_nums < b_nums else print("Alice\nBob")
  