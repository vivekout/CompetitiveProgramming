#include <iostream>
using namespace std;
int main(void) {
	int digits=0,rem=0,sum=0;
	cin>>digits;
	for(int i=0;digits>0;i++)
	{
	        rem= digits%10;
	        
	        switch(rem)
	        {
    	            case 1: sum+=2;
    	                break;
    	            case 2: sum+=5;
	                    break;
	                case 3: sum+=5;
	                    break;
	                case 4: sum+=4;
	                    break;
	                case 5: sum+=5;
    	                break;
	                case 6: sum+=6;
	                    break;
	                case 7: sum+=4;
	                    break;
	                case 8: sum+=7;
	                    break;
	                case 9: sum+=6;
	                    break;
	                case 0: sum+=6;
	                    break;
	        }
	        digits=digits/10;
	}
	cout<<sum;
	return 0;
}

