class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maximum=1;
        if(nums.size()==0){
            return 0;
        }
        for(auto x:st){
            if(!st.count(x-1)){
                int c=1;
                int z=x;
                while(st.count(z+1)){
                    c++;
                    z++;
                }
                maximum=max(maximum,c);
            }
        }
        return maximum;
        
    }
};

