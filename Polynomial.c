#include <stdio.h>
int polynomial(int poly[],int,int);
int main()
{
    int poly[100],n,x,r;
    printf("Enter the no. of coefficient : ");
    scanf("%d",&n);
    printf("Enter the coefficient : ");
    for(int i=0;i<n;i++){
        scanf("%d",&poly[i]);
    }
    printf("Enter the highest power of x in polynomial: ");
    scanf("%d",&x);
    printf("The value of the given polynomial is: %d ",polynomial(poly,n,x));

    return 0;
}

int polynomial(int poly[],int n, int x){
    int result = poly[0];
    for(int i=1;i<n;i++){
        
        result = x*result + poly[i];
        
    }
    return result;
    
}
