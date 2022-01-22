struct node
{
    int id;
    char name[50];
    struct node *next;
};
struct node a;
typedef struct node NODE;
typedef NODE* NodePtr;