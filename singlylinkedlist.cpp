#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*)
   malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(67);
   insert(100);
   insert(79);
   insert(82);
   insert(99);
   insert(84);
   cout<<"The linked list: ";
   display();
   return 0;
}
