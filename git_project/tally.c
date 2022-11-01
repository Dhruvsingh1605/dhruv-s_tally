#include<stdio.h>
int main(){
    int i;
    int sum = 0;
    int transactions;
    int amount[transactions];
    printf("enter the total number of transactions today :");
    scanf("%d",&transactions);

    for(i=0;i<transactions;i++){
        printf("item %d:",amount[i]);
        scanf("%d",&amount[i]);
        sum =  sum + amount[i];

        //break;
    }

        printf("%d\n",sum);

    return 0;
}