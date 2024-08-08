class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
         int n = arr.size();
        if(n==1){
            return 1;
        }

        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum1+=arr[i];
        }
        for(int i=0;i<n;i++){
            sum1=sum1-arr[i];
            if(sum1==sum2){
                return i+1;
            }
            sum2+=arr[i];
        }
        return -1;
    }
};
