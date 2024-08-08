class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> negative;
	    vector<int> positive;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            negative.insert(negative.end(),arr[i]);
	        }
	        else if(arr[i]>=0){
	            positive.insert(positive.end(),arr[i]);
	        }
	    }
	    
	    int countp=0;
	    int countn=0;
	    int i=0;
	    while(i<n){
	        if(countp<positive.size()){
	           arr[i]=positive[countp];
    	        countp++;
    	        i++; 
	        }
	        if(i<n && countn<negative.size()){
	            arr[i]=negative[countn];
	            i++;
	            countn++;
	        }
	    }
	    if(countp<positive.size()){
	        arr[i]=positive[countp];
	        countp++;
	        i++;
	    }
	    else if(countn<negative.size()){
	        arr[i]=negative[countn];
	        countn++;
	        i++;
	    }
	}
};
