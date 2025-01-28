/*_____________________PROBLEM NO : LEETCODE 678__________________________*/
/*solution is not mine -> it taken from runtime analysis of leetcode*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define nl endl

bool checkLeftToRight(string &s)
{
    int open = 0, close = 0, star = 0;
    for (char &c : s)
    {
        if (c == '(') open++;
        else if (c == ')') close++;
        else star++;
        if (close > open + star)return false;
    }
    if (close == open || abs(open - close) <= star) return true;
    return false;
}
bool checkRightToLeft(string &s)
{
    int open = 0, close = 0, star = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ')') open++;
        else if (s[i] == '(') close++;
        else star++;
        if (close > open + star) return false;
    }
    if (close == open || abs(open - close) <= star) return true;
    return false;
}

bool checkValidString(string s)
{
    if (s.empty())return true;
    return checkLeftToRight(s) && checkRightToLeft(s);
}