// https://cses.fi/problemset/task/1140
#include <iostream>
#include <vector>
#include <algorithm>

#define start first
#define finish second.first
#define weight second.second

using namespace std;

bool compare_finish(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.start < b.start;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, pair<int, int>>> intervals(n);

    int s, f, w;
    for (int i = 0; i < n; ++i)
    {
        cin >> s >> f >> w;
        intervals[i] = {s, {f, w}};
    }
    sort(intervals.begin(), intervals.end(), compare_finish);

    vector<int> p(n);
    for (int i = -1, j = 0; j < n; ++j)
    {
        while (intervals[i + 1].finish < intervals[j].start)
            ++i;

        p[j] = i;
    }

    vector<long long> dp(n + 1);
    dp[0] = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i + 1] = max(dp[i], intervals[i].weight + dp[p[i] + 1]);
    }
    cout << dp[n] << endl;
}