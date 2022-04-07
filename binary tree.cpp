#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
int generation;
string name;
class Node* left;
class Node* right;
Node(int gen, string n);
void print();

};

int main() {
cout << "hello data structers!" << endl;
Node* root = new Node(0, "carmen winstead");
root->print();

root->left = new Node(1, "Chrus");
root->right = new Node(1, "David");
root->left->print();
root->right->print();

root->right->left = new Node(2, "Chrus");
root->right->right = new Node(2, "David");
root->right->left->print();
root->right->right->print();


root->left->left = new Node(3, "Chrus jr");
root->left->right = new Node(3, "David jr");
root->left->left->print();
root->left->right->print();


root->left->left->left = new Node(4, "Chrus the 3rd (crusty)");
root->left->left->right = new Node(4, "Jane");
root->left->left->left->print();
root->left->left->right-> print();

root->left->right->left = new Node(5, "Chrus the 4rd");
root->left->right->right = new Node(5, "Bob");
root->left->right->left->print();
root->left->right->right->print();


}

Node::Node(int gen, string n) {
generation = gen;
name = n;
}

void Node::print() {
cout << "Hi my name is " << name << " and I am generation " << generation << "." << endl;



}

void printTree(class Node* node) {
if (node == NULL)
return;

printTree(node->left);
printTree(node->right);
printTree(node->left->left);
printTree(node->right->right);
printTree(node->left->left->left);
printTree(node->right->right->right);
printTree(node->left->left->right);


}
