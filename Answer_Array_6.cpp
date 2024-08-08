class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        long long int product=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                product = product*nums[i];
            }
            if(nums[i]==0){
                count++;
            }
        }
        
        vector<long long int> vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                if(count>0){
                    vec.insert(vec.end(),0);
                }
                else{
                    vec.insert(vec.end(),product/nums[i]);
                }
            }
            else{
                if(count>1){
                    vec.insert(vec.end(),0);
                }
                else{
                    vec.insert(vec.end(),product);
                }
            }
        }
        return vec;
    }
};
