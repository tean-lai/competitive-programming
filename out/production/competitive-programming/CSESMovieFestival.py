n = int(input())
intervals = []

for i in range(n):
    a, b = input().split()
    a, b = int(a), int(b)
    intervals.append((a, b))

intervals.sort(key=lambda x: x[1])
print(intervals)

count = 0
curr_time = intervals[0][1] - 1
for i in intervals:
    if curr_time < i[1]:
        count += 1
        curr_time = i[1]

print(count)
