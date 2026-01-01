class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//Map to store number and its index
        unordered_map<int,int>mp; 
//Loop through the array
        for(int i=0;i<nums.size();i++){
          //Calculate the required number
            int needed=target-nums[i];
          //Check if required number already exists
            if(mp.find(needed)!=mp.end())
            {
              //Return indices if found
                return{mp[needed],i};
            }
          //Store current number with its index
            mp[nums[i]]=i;
        }
// Return empty if no solution found 
        return{};
