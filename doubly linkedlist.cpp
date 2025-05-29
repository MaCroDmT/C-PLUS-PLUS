#include <iostream>
using namespace std;


struct Node {
   int data;
   struct Node* next;
   struct Node* prev;
};


void insert_front(struct Node** head, int new_data)
{

   struct Node* newNode = new Node;


   newNode->data = new_data;


   newNode->next = (*head);
   newNode->prev = NULL;


   if ((*head) != NULL)
   (*head)->prev = newNode;


   (*head) = newNode;
}

void insert_After(struct Node* prev_node, int new_data)
{

   if (prev_node == NULL) {
   cout<<"Previous node is required , it cannot be NULL";
   return;
}

   struct Node* newNode = new Node;


   newNode->data = new_data;


   newNode->next = prev_node->next;


   prev_node->next = newNode;


   newNode->prev = prev_node;


   if (newNode->next != NULL)
   newNode->next->prev = newNode;
}


void insert_end(struct Node** head, int new_data)
{

   struct Node* newNode = new Node;

   struct Node* last = *head; //set last node value to head

   //set data for new node
   newNode->data = new_data;

   //new node is the last node , so set next of new node to null
   newNode->next = NULL;

   //check if list is empty, if yes make new node the head of list
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}

//otherwise traverse the list to go to last node
while (last->next != NULL)
last = last->next;

//set next of last to new node
last->next = newNode;

//set last to prev of new node
newNode->prev = last;
return;
}

// This function prints contents of linked list starting from the given node
void displayList(struct Node* node) {
   struct Node* last;

   while (node != NULL) {
      cout<<node->data<<"<=>";
      last = node;
      node = node->next;
   }
   if(node == NULL)
   cout<<"NULL";
   }

//main program
int main() {
   /* Start with the empty list */
   struct Node* head = NULL;

   // Insert 40 as last node
   insert_end(&head, 78);

   // insert 20 at the head
   insert_front(&head, 58);

   // Insert 10 at the beginning.
   insert_front(&head, 70);

   // Insert 50 at the end.
   insert_end(&head, 90);

   // Insert 30, after 20.
   insert_After(head->next, 76);

   cout<<"Doubly linked list is as follows: "<<endl;
   displayList(head);
   return 0;
}
