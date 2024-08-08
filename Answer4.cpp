class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here.
        long long answer=0;
        long long  i=1;
        while(N>0){
            answer+= i*(N%9);
            N=N/9;
            i*=10;
        }
        return answer;
    }
};
