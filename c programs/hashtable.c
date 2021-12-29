#include<stdio.h>
#include<stdlib.h>

int  key[20],n,m;
int *ht,hashindex;
int elecount=0;

void createhashtable(){
        int i;
        ht=(int *)malloc(m*sizeof(int));
        if(ht==NULL){
            printf("\nunable to create hash table");

        }else{
            for (int i = 0; i < m; i++)     
            {
                ht[i]=-1;
            }
            
        }
}
void insertintohashtable(int key){
    hashindex=key%m;
    while(ht[hashindex]!=-1){
       hashindex= (hashindex+1)%m;
    }
    ht[hashindex]=key;
    elecount++;
}
void displayhashtable(){
    int i;
    if(elecount==0){
        printf("hashtable is empty\n");
    }else{
        printf("hashtable contents are\n");
        for(int i=0;i<m;i++){
            printf("T[%d]->%d\n",i,ht[i]);
        }
    }
}
int main(){
    printf("\nEnter the number of employee records: ");
    scanf("%d",&n);
    printf("\nENter the 4-digit key values of employee records:\n ");
    for(int i=0;i<n;i++)
        scanf("%d\n",&key[i]);


    printf("enter the 2 digit memory allocation for hash table\n ");

    scanf("%d",&m);
    createhashtable();
    printf("\nINserting key values into the hashatable:\n ");
    for(int i=0;i<n;i++){
        if(elecount==m){
            printf("hashtable is full..insertoin of %d key element not posssible",i+1);
            break;
        }
        insertintohashtable(key[i]);
    }
    displayhashtable();
    return 0;
}