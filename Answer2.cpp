class Solution
{
public:
    int trailingZeroes(int N)
    {
        int answer=0;
        int count=1;
        int t = N/pow(5,count) ;
        while(t >0){
            answer+= t;
            count++;
            t = N/pow(5,count);
        }
        return answer;
    }
};
