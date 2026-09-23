class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i;

        vector<int> freq(nums.size() + 1, 0);

    for( i=0;i<size;i++){
        if(++freq[nums[i]]==2){
            return true;
        }

    }
     return false;

    }
};