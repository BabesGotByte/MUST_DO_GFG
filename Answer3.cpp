class Solution{
	public:
	string fractionToDecimal(int numerator, int denominator) {
	    // Code here
	    
	    string answer = "";
	    int flag=0;
	    unordered_map<int,int> u_map;
	    
	    if(numerator<0 && denominator>0){
	        flag=1;
	    }
	    else if(numerator>0 && denominator<0){
	        flag=1;
	    }
	    
	    int temp = numerator/denominator;
	    answer= to_string(temp);
	    numerator -= temp*denominator;
	    
	    int count=0;
	    while(numerator>0){
	        if(count==0){
	            answer+= ".";
	            count=1;
	        }
	        
	        if(u_map.find(numerator)!=u_map.end()){
	            answer = answer.insert(u_map[numerator], "(");
	            answer+=")";
	            break;
	        }
	        u_map[numerator]=answer.size();
	        if(numerator<denominator){
	            numerator*= 10;
	            temp = numerator/denominator;
	            answer += to_string(temp); 
	            numerator -= temp*denominator;
	        }
	        
	    }
	    
	    
	    if(flag==1){
	        answer = "-1"+answer;
	    }
	    return answer;
	}
};
