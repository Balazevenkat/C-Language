#include<stdio.h>
int main(){
    int num,flag;
    scanf("%d",&num);
    if(num<0) printf("wrong input");
    else{
        int res=1;
        for(int i=0;i<=num;i++){
            res *= 2;
            if(num<res){
                flag=0;
                break;
            }
            else if(res==num){
                flag=1;
                break;
            }
        }
        (flag) ? printf("%d is power of %d",num,2) : printf("%d is not a power of %d",num,2);
    }
}
