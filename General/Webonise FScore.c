#include <stdio.h>

int array_score(int a[], int len){
    int fscore[4];
    int sum=0;
    int i,lastdigit,secondlastdigit;
    
    for(i=0;i<len;i++)
    {
        lastdigit=a[i]%10;
        secondlastdigit=(a[i]/10)%10;
        if(lastdigit %4==0 && secondlastdigit % 4==0)
        {
            fscore[i]=3;
        
        }
        else if(lastdigit %4==0 || secondlastdigit %4==0)
        {
            fscore[i]=2;
        
        }
        else
        {
            fscore[i]=0;
        
        }
    }
    for(i=0;i<len;i++)
    {
        sum=sum+fscore[i];
    }
    printf("%d",sum);
    return sum;
}        
    


int main(void) {
	int a[4]={138, 142, 32148, 17322};
	int len=4;
	array_score(a, len);
	return 0;
}

