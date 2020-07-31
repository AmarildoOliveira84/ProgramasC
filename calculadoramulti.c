#include<stdio.h>
void multi(int* num){
    
for(int i=1; i<=10;i=i+1){
int res=0;
res=i*(*num);

printf("%d X %d = %d \n",(*num),i,res);
}
}
int main(){

int num;

printf("Informe um numero: ");
scanf("%d",&num);
multi(&num);


    return 0;

}