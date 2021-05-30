#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    for(int i=0;i<nums.size()-1;i++){
    for(int j=0;j<nums.size()-1;j++){
    if(nums[j]==0){

       swap(nums[j],nums[j+1]);

    }}
}
     for(int i=0;i<nums.size();i++){
      cout<<nums[i]<<endl;}
    }

};

int main()
{
    int num=0;
vector<int>x;
x.push_back(0);
x.push_back(1);
x.push_back(0);
x.push_back(3);
x.push_back(12);
 Solution s;

 s.moveZeroes(x);


    return 0;
}
