class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>temp;
        for(int i=0; i<nums.size();i++){
            temp.push_back({nums[i],i});
        }
        vector<int>ans;
        sort(temp.begin(), temp.end());
        int i=0;
         int j=nums.size()-1;
        while(i<j){
            if(temp[i].first+temp[j].first==target){
                ans.push_back(temp[i].second);
                ans.push_back(temp[j].second);
                return ans;
            }
            else if(temp[i].first+temp[j].first < target){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};