#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main()
{
  NODE *head,*temp;

  head=NULL;

  int check=0;

  while(check==0)
  {
      printf("ID : ");
      if(scanf("%d",&a.id)){};
      if(a.id==0)
      {
         check++;
      }
      else
      {
        printf("Name : ");
        if(scanf("%s",a.name)){};
        temp=(NodePtr) malloc(sizeof(NODE));
        temp->id  = a.id;
        strcpy(temp->name,a.name);
        temp->next = head;
        head = temp;
      }
  }

  printf("\n--List--\n");
  for( ; temp!=NULL; temp=temp->next)
  {
    printf("%d  \t%s\n",temp->id,temp->name);
  }

  while ((temp=head)!= NULL)
  {
    head = head->next;
    free (temp);
  }
}