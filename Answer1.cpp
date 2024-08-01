class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if((abs(arr[i])-1) !=arr.size()){
                arr[abs(arr[i])-1]*= -1;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                 int temp= i+1;
                 return temp;
            }
        }
        return n;
    }
};

