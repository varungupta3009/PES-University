struct node {
   int key;
   struct node *next;
};

void printList();
void insertFirst(int);
struct node* deleteFirst();
bool isEmpty();
int length();
struct node* find(int);
struct node* delete(int);
int findLast();
int findMiddle();
int getSum();
