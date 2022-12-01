#include <iostream>
#include <vector>
using namespace std;



class BST
{
  public:
  int data;
  BST *left, *right;
  BST(){
    this->data = NULL;
    this->left = nullptr;
    this->right = nullptr;
  };
  BST(int nodeData){
    this->data = nodeData;
    this->left = nullptr;
    this->right = nullptr;
  };
  void insert(int value){
    BST *temp = this;
    bool wasValueInserted = false;
    BST *newNode = new BST(value);

    while (wasValueInserted == false)
    {
      bool isValueGreater = value >= temp->data;

      if(isValueGreater == true){
        if(temp->right == nullptr){
          wasValueInserted = true;
          temp->right = newNode;
        }
        temp = temp->right;
      }
      else
      {
        if(temp->left == nullptr){
          wasValueInserted = true;
          temp->left = newNode;
        }
        temp = temp->left;
      }
    }
  }
  void treeToArrayInAscendingOrder(vector<int>& result,BST * node)
  {
    if(node!=nullptr){
      this->treeToArrayInAscendingOrder(result,node->left);
      result.push_back(node->data);
      this->treeToArrayInAscendingOrder(result,node->right);
    }
  }
  int nth_node(int n){
    vector<int> v;
    treeToArrayInAscendingOrder(v, this);
    return v[n-1];
  }
  void printInOrder(BST* node){
    if(node!=nullptr){
      printInOrder(node->left);
      cout << node->data << ", ";
      printInOrder(node->right);
    }
  }
 
};



// int main(){
//   BST *tree = new BST(10);
//   tree->insert(20);
//   tree->insert(30);
//   tree->insert(1);
//   tree->insert(2);
//   cout << tree->nth_node(3) << endl;

//   return 0;
// }