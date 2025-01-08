# include<stdio.h>
# include<stdlib.h>
# define SIZE 4
int top=-1,inp_array[SIZE];
void push();
void pop();
void print();
int main()
{
    int choice;
    while(1){
        printf("\n Perform operations on stack :");
        printf("\n 1.Push the elements \n 2.Pop the element \n 3.Print \n 4.End ");
        printf(" \n Enter the choice");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
         case 2:
            pop();
            break;
         case 3:
            print();
            break;
         case 4:
            exit(0);
            break;
        
        default:
        printf("\n Invalid choice");
            break;
        }

    }
}
void push()
{
    int x;
    if(top==SIZE-1){
        printf("\n over flow");
    }
    else
    {
        printf("\n Enter the element to be added to the stack:");
        scanf("%d",&x);
        top=top+1;
        inp_array[top]=x;

    }
}
void pop()
{
    if(top==-1){
        printf("\n Underflow");

    }
    else{
        printf("\n poped element:%2d",inp_array[top]);
        top=top-1;
    }
}
void print(){
    if(top==-1){
        printf("\n stack is EMPTY");

    }
    else{
        printf("\n The Elements present in the stack:\n");
        for(int i=top;i>=0;i--){
            printf("\n %d",inp_array[i]);
        }
    }
}