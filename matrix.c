#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int i,j,k,l,r,c,a[100][100];
    printf("\nenter dimension : ");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    struct node
    {
        int r,c,found,left,right,top,bottom,visit,son;
        struct node *next;
        struct node *prev;
    };
    struct node *start,*current;
    start=(struct node*)malloc(sizeof(struct node));
    start->r=0;
    start->c=0;
    start->left=0;
    start->bottom=0;
    start->top=0;
    start->right=0;
    start->found=0;
    start->next=NULL;
    start->visit=-1;
    start->son=0;
    current=start;
    while(1)
    {
        if(a[current->r][current->c]==9)
        {
            printf("\npath for eli");
            break;
        }
        else
        {
            struct node *p=(struct node*)malloc(sizeof(struct node));
            p->r=0;
            p->c=0;
            p->left=0;
            p->bottom=0;
            p->top=0;
            p->right=0;
            p->found=0;
            p->next=NULL;
            p->prev=current;
            p->son=0;
            p->visit=-1;
            current->next=p;
            current->visit++;
            printf("\n %d%d visit:%d son:%d bottom:%d top:%d right :%d left:%d",current->r,current->c,current->visit,current->son,current->bottom,current->top,current->right,current->left);
            if(current->visit>=3)
            {
                if((current->r==0)&&(current->c==0))
                {
                    printf("\nno way man");
                    break;
                }
                else
                current=current->prev;
            }
            else if((current->c+1<c)&&((a[current->r][current->c+1]==1)||(a[current->r][current->c+1]==9))&&(current->right==0)&&(current->son!=2))
            {
                current->right=1;
                current->next->r=current->r;
                current->next->c=current->c+1;
                current->next->son=1;
                    printf("\n %d%d visit:%d son:%d bottom:%d top:%d right :%d left:%d",current->r,current->c,current->visit,current->son,current->bottom,current->top,current->right,current->left);

                current=current->next;      
            }

            else if((current->c-1>0)&&((a[current->r][current->c-1]==1)||(a[current->r][current->c-1]==9))&&(current->left==0)&&(current->son!=1))
            {
                current->left=2;
                current->next->r=current->r;
                current->next->c=current->c-1;
                current->next->son=2;
                            printf("\n %d%d visit:%d son:%d bottom:%d top:%d right :%d left:%d",current->r,current->c,current->visit,current->son,current->bottom,current->top,current->right,current->left);

            current=current->next;      
            }
             else if((current->r+1<r)&&((a[current->r+1][current->c]==1)||(a[current->r+1][current->c]==9))&&(current->bottom==0)&&(current->son!=3))
            {
                current->bottom=1;
                current->next->r=current->r+1;
                current->next->c=current->c;
                current->next->son=4;
                            printf("\n %d%d visit:%d son:%d bottom:%d top:%d right :%d left:%d",current->r,current->c,current->visit,current->son,current->bottom,current->top,current->right,current->left);

            current=current->next;      
            }
            else if((current->r-1>-1)&&((a[current->r-1][current->c]==1)||(a[current->r-1][current->c]==9))&&(current->top==0)&&(current->son!=4))
            {
                current->top=1;
                current->next->r=current->r-1;
                current->next->c=current->c;
                current->next->son=3;
                            printf("\n %d%d visit:%d son:%d bottom:%d top:%d right :%d left:%d",current->r,current->c,current->visit,current->son,current->bottom,current->top,current->right,current->left);

            current=current->next;      
            }
            }
        fflush(stdout);
        sleep(1);
    }
}