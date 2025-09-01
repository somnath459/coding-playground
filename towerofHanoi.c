#include<stdio.h>
void towerofHanoi(int n, char source, char auxiliary, char destination){
    if(n==1){
        printf("Moved disk %d from %c to %c.\n",n,source,destination);
        return;
    }
    towerofHanoi(n-1,source,destination,auxiliary);
    printf("Moved disk %d from %c to %c.\n",n,source,destination);
    
    towerofHanoi(n-1,auxiliary,source,destination);
}
int main(){
    int n;
    printf("Enter Disk Number:");
    scanf("%d",&n);
    towerofHanoi(n,'S','A','D');
    return 0;
}