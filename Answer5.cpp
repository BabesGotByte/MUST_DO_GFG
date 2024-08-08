class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        // code here 
        long long answer=1;
        sort(array.begin(),array.end());
        for(int i=0;i<array.size();i++){
            if(array[i]<=answer){
                answer+=array[i];
            }
            else{
                return answer;
            }
        }
        return answer;
    } 
};
