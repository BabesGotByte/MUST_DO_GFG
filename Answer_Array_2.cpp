class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int> vec;
        int max=-1;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=max){
                max=arr[i];
                vec.insert(vec.begin(),max);
            }    
            else{
                continue;
            }
        }
        return vec;
    }
};
