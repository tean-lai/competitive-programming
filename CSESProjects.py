intervals = []
memo = {}
p = []


def dp(j):
    if j == 0:
        return 0
    elif j not in memo:
        memo[j] = max(intervals[j][2] + dp(p[j]), dp(j - 1))
    return memo[j]


def main():
    global p
    n = int(input())
    for i in range(n):
        a, b, w = input().split()
        intervals.append((int(a), int(b), int(w)))
    intervals.sort(key=lambda x: x[1])
    p = [0] * n
    i = 0
    j = 0
    while j < n:
        while intervals[i + 1][1] <= intervals[j][0]:
            i += 1
        p[j] = i
        j += 1
    print(dp(n - 1))


main()
