#include <stdio.h>
#include <stdlib.h>
/*
5 5 5 5 5  5 5 5 5 
5 4 4 4 4  4 4 4 5 
5 4 3 3 3  3 3 4 5 
5 4 3 2 2  2 3 4 5 
5 4 3 2 1  2 3 4 5

5 4 3 2 2  2 3 4 5 
5 4 3 3 3  3 3 4 5 
5 4 4 4 4  4 4 4 5 
5 5 5 5 5  5 5 5 5

1

222
212
222

33333
32223
32123
32223
33333
444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
int main(){
    int n;
    scanf("%d",&n);
    //printf("%d\n",n);

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",n-j);
        }
        for(int j=1;j<(n-i)*2-1;j++){
            printf("%d ",n-i);
        }
        for(int j=i;j>0;j--){
            printf("%d ",n-j+1);
        }
        printf("\n");
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            printf("%d ",n-j);
        }
        for(int j=0;j<=i*2;j++){
            printf("%d ",i+2);
        }
        for(int j=2+i;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    
    return 0;
}

/*
solution from net 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len = 2*n-1;
    int min1,min2,min;
    
    for (int i=1; i <= len; i++){
        for ( int j=1; j<=len; j++){
            
            min1 = i<=len-i ? i -1 : len-i;
            
            min2 = j<=len-j ? j -1 : len-j;
            
            min = min1<=min2 ? min1 : min2;
            
            printf("%d ", n-min);
        }
        printf("\n");
    }
    
    
    return 0;
}
*/