#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<algorithm>

using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2){
    if(p1.second>p2.second)  return true;
    if(p1.second<p2.second)  return false;

    if(p1.first > p2.first) return true;
    else return false;   
}

int main(){
vector<pair<int,int>>v={{1,3},{6,7},{2,3},{6,8}};

sort(v.begin(), v.end(), comparator);

for(auto p: v){
    cout<<p.first<<" "<<p.second<<" "<<endl;
}
return 0;
}

