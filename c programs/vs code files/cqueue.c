#include<stdio.h>
#include<stdlib.h>
#define MAX 5
char c[MAX];
int front=0,rear=0;

void insert(char item){
    if(front==(rear+1)%MAX){
        printf("\n\nQueue Overflow\n");

    }else{
        rear=(rear+1)%MAX;
        c[rear]=item;
    }
}
void delete(){
    char item;
    if(front==rear){
        printf("\n\nQueue underflow\n");

    }else{
        front=(front+1)%MAX;
        item=c[front];
        printf("DEleted element is %c:",item);
    }
}
void display(){
     if(rear==front){
         printf("\nQueue is empty");

     }else{
         printf("queue contents are:\n");
         for(int i=front+1;i<=rear;i++){
             printf("%c\t",c[i]);
         }
     }
 }

int main(){
    int choice;
    char item;
    while(1){
    printf("\nPress\n1=>INsertion\n2=>deletion\n3=>display\n4=>exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("enter the character to be inserted\n");
               fflush(stdin);
               scanf("%c",&item);
               insert(item);
               break;
        case 2:delete();
               break;

        case 3:display();
                break;
        case 4:exit(0);
        default:printf("enter the valid choice\n");
    }
    
    }
    return 0;
}


