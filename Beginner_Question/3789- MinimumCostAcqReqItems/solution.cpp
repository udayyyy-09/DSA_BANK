/*



class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long res = 0;

        long long mini = min(need1, need2);

        long long costA = mini*min(cost1 + cost2, costBoth);

        long long rem1 = need1 - mini, rem2 = need2 - mini;

        long long add = rem1*min(cost1, costBoth) + rem2*min(cost2, costBoth);

        return add + costA;
    }
};




*/