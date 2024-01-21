#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
node* buildTree(node* root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root = new node(data);
    cout<<"Enter data to the left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data to the right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void LevelWisePrinting(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void ReverseLevelWisePrinting(node* root){
    queue<node*> q;
    stack<node*> s;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
                s.push(NULL);
            }
        }
        else{
            if(temp->left){
                q.push(temp->left);
                s.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
                s.push(temp->right);
            }
        }
    }
    while(!s.empty()){
        node* temp = s.top();
        s.pop();
        if(temp){
            cout<<temp->data<<" ";
        }
        else{
            cout<<endl;
        }
    }
}


int main(){
    node* root = NULL;
    root = buildTree(root);
    LevelWisePrinting(root);
    return 0;
}