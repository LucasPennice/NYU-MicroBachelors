#include <iostream>
#include "cpluspluslabs.h"
using namespace std;

Node* new_node(int value){
    Node *newNode = new Node;
    newNode->height = 0;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->key = value;
    return newNode;
}

Node* insertnb(Node* node, int key){
    Node *temp = node;
    bool wasValueInserted = false;
    Node *newNode = new_node(key);

    if(node==NULL){
        return new_node(key);
    }

    while (wasValueInserted == false)
    {
      bool isValueGreater = key >= temp->key;

      if(isValueGreater == true){
        temp->height += 1;
        if(temp->right == nullptr){
          wasValueInserted = true;
          temp->right = newNode;
        }
        temp = temp->right;
      }
      else
      {
        temp->height -= 1;
        if(temp->left == nullptr){
          wasValueInserted = true;
          temp->left = newNode;
        }
        temp = temp->left;
      }
    }

    return node;
}

Node *left_rotate(Node *oldParent){
    Node *newParent = oldParent->right;
    oldParent->right = (oldParent->right)->left;
    newParent->left = oldParent;
    oldParent->height = newParent->height + 1;
    newParent->height = newParent->height + 1;
}
Node *right_rotate(Node *oldParent){
    Node *newParent = oldParent->left;
    oldParent->left = (oldParent->left)->right;
    newParent->right = oldParent;
    oldParent->height = newParent->height + 1;
    newParent->height = newParent->height + 1;
}

int get_balance(Node *x) {
    int h = 0;
    if(x != NULL){
        int leftH = get_balance(x->left);
        int rightH = get_balance(x->right);
        h = rightH - leftH + 1;
    }
    return h;
}

// int main(){
//     Node *root = insertnb(NULL, 10);
//     root = insertnb(root, 20);
//     root = insertnb(root, 30);
//     return 0;
// }