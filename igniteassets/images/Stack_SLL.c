#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;

void push();
void pop();
void display();
int main()
{
    int ch;
    char c;
    do
    {
        printf("\n\tSLL STACK OPERATIONS");
        printf("\n\t1. Insert item (Push)");
        printf("\n\t2. Delete item (Pop)");
        printf("\n\t3. Display");
        printf("\n\t4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(1);

            default:
                printf("Invalid choice\n");
                break;
        }
        printf("\nDo you want to try again?(y/n): ");
        scanf(" %c", &c);
    }while(c=='y' || c=='Y');
}
void push()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node*));
    printf("\nEnter the data: ");
    scanf("%d",&temp->data);
    temp->link = top;
    top = temp;
}
void pop()
{
    struct node *temp;
    if(top == NULL)
        printf("\nEmpty Stack!");
    else
    {
        temp = top;
        printf("\n%d is deleted", temp->data);
        top = temp->link;
        temp->link = NULL;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    if(top == NULL)
        printf("\nEmpty Stack!");
    else
    {
        temp = top;
        while(temp != NULL)
        {
            printf("\n%d",temp->data);
            temp=temp->link;
        }
    }
}
