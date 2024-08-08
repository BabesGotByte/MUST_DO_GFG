class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int temp;
        int carr=0;
        for(int i=N-1;i>=0;i--){
            if(i==N-1){
                temp=arr[i] + 1 + carr;
            }
            else{
                temp=arr[i] + carr;
            }
            arr[i]=temp%10;
            carr=temp/10;
        }
        if(carr==1){
            arr.insert(arr.begin(),1);
        }
        return arr;
    }
};
