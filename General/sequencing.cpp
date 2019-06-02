#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n=6;
	float crrval=1,arrval=1,brrval=9;
	
	
	for(int i=1;i<=n;i++) {
	    if(i%2==0) {
	        arrval=arrval/100;
	        crrval=crrval+arrval;
	        cout << crrval<<", ";
	    }
	    else {
	        brrval=brrval/10;
	       crrval=crrval+brrval;
	        cout<< crrval<<", ";
	        brrval/=10;
	    }
	    
	}
	
	return 0;
}
