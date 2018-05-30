#include <vector>
#include <stack>
#include <iostream>

using std::vector;
using std::stack;

typedef struct TreeNode 
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
}Node;


Node* createTree(int value[], unsigned int length, unsigned int& index)
{
    Node* p = nullptr;
    while(index < length)
    {
        if(value[index] != 0)
        {
            p = new Node();
            p->val = value[index];
            std::cout << "create Node for value " << value[index] << " with index " << index << std::endl;
            p->left = createTree(value, length, ++index);
            p->right = createTree(value, length, ++index);
        }
        else
        {
            ++index;
            return nullptr;
        }
    }
    return p;
}

vector<int> preolderTraversal(Node* p)
{
    std::cout << "traversal is starting" << std::endl;
    vector<int> result;
    stack<Node*> tmpStack; 
    Node* node = p;
    Node* lastNode = p;
    
    if(p == nullptr) return vector<int>();
    
    tmpStack.push(p);
    while(!tmpStack.empty())
    {
        node = tmpStack.top();  

        if(lastNode == node->right)
        {
            lastNode = node;
            tmpStack.pop();
            continue;
        }
        result.push_back(node->val);
        std::cout << "push node with value " << node->val << std::endl;
        std::cout << "last node with value " << lastNode->val << std::endl;

        if(node->val == 1)
        {
            std::cout << std::hex << node->left << std::endl;
            std::cout << std::hex << node->right<< std::endl;
        }

        if(node->left != nullptr && lastNode != node->left){
            tmpStack.push(node->left);
            continue;
        }
        if(node->right != nullptr){
            tmpStack.push(node->right);
            continue;
        }
        lastNode = node;
        tmpStack.pop();
    }
    return result;
}
 
int main()
{
    int treeValue[] = {6,2,1,0,0,4,3,0,0,0,8,0,0};
    unsigned int length = sizeof(treeValue)/sizeof(int);
    std::cout << "length = " << length << std::endl; 
    unsigned int index = 0;
    Node* rootNode = createTree(treeValue, length, index);
    vector<int> preordlerResult = preolderTraversal(rootNode);
    for(auto item : preordlerResult)
    {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}
