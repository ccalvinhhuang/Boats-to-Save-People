#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int numRescueBoats(vector<int>& people, int limit){
    sort(people.begin(), people.end());
    int l = 0;
    int h = people.size() - 1;
    int ans = 0;
    while(l <= h){
        if(l == h){
            ans++;
            break;
        }
        int sum = people[l] + people[h];
        if(sum > limit){
            ans++;
            h--;
        }
        else {
            l++;
            h--;
            ans++;
        }
    }
    return ans;
}