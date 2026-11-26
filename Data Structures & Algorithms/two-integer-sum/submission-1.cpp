class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        // int i=0;
        // int j=n-1;
        // while(i<j){
        //     if(nums[i]+nums[j]==target){
        //         return{i,j};
        //     }
        //     else if(nums[i]+nums[j]<target){
        //         i++;
        //     }
        //     else{
        //         j--;
        //     }
        //     }
        //     return{};// this  code for sorted array 
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int required=target-nums[i];

            if(mp.find(required)!=mp.end()){
                return {mp[required],i};
            }
            mp[nums[i]]=i;
        }
        return{};
        }
    
};
