#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr,int val)
{
    if(isFull(ptr))
    {
        printf("stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr){
    int val;
    if(isEmpty(ptr)){
        printf("stack underflow\n");
    }
    else{
        val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    printf("%d\n",isEmpty(s));
    printf("%d\n",isFull(s));
    push(s,56);
    printf("%d\n",isEmpty(s));
    printf("%d\n",isFull(s));
    printf("popped %d from the stack\n",pop(s));
    printf("%d\n",isEmpty(s));
    printf("%d\n",isFull(s));
    
}
