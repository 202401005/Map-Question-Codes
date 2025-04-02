class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

         vector<pair<int, int>> indexedNums;
        for(int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }

        sort(indexedNums.begin(),indexedNums.end());
        int s=0;
        int e = indexedNums.size()-1;
        while(s<e){
           int sum = indexedNums[s].first + indexedNums[e].first;
            if(sum== target){
                 return {indexedNums[s].second, indexedNums[e].second};
            }
            else if(sum<target){
                s++;
            }
            else{
                e--;
            }
        }
        return {};
    }
};
