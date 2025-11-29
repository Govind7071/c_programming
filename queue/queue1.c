#include<stdio.h>
int main(){
    int MAX,n;
    printf("enter the size of queue");
    scanf("%d",&MAX);
    

}
void dequeue(){
int front=-1,rear=-1;
bool isempty()
{
    return (front==-1);
}
bool isfull()
{
    return ((rear+1)%MAX==front);
}
void display()
{
    if(isempty())
    printf("\nqueue is expty...");
    else{
        int i=front;
        while(1){
            printf("\t%d",q[i]);
            if(i==rear)
            break;
            i=(i+1)%MAX;
        }
    }
}}
void enqueue(int n){
    if (isfull())
    printf("\n Queue is full ....");
    else if (isempty())
    {
        front=0;
        rear=0;
        q[rear]=n;
    }
    else{
        rear=(rear+1)%MAX;
        q[rear]=n;
    }
    display();
}
void dequeue(){
    if(isempty())
    printf("\n Queue is empty...");
    else if(front==rear){
        int item=q[front];
        if(front==rear)
        {
            front=rear=-1;
        }
        else{
            front=(front+1)%MAX;
        }
        printf("\n %d deleted",item);
    }
}