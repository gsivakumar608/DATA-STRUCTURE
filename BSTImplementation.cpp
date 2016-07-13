# include <iostream>
# include <queue>
using namespace std;

struct BSTNode{
	int data;
	BSTNode* left;
	BSTNode* right;
};
 BSTNode* getNewNode(int data){
	BSTNode* newNode=new BSTNode();
	newNode->data=data;
	newNode->right=NULL;
	newNode->left=NULL;
	return newNode;
}

BSTNode* Insert(BSTNode* root,int data){
	
	if(root == NULL){
	    root=getNewNode(data);
		//return root;
	}
	else if(data >= root->data){
		root->right=Insert(root->right,data);
		//return root;
	}
	else if(data <= root->data){
		root->left=Insert(root->left,data);
		//return root;
	}	
	//cout << root->data;
	return root;
}

BSTNode* Search(BSTNode* root,int data){
	if(root!=NULL){
	
	if(root->data == data){
		//return root;
	}
	else if(root->data >= data){
		root=Search(root->left,data);
		//return root;
	}
	else{
		root=Search(root->right,data);
		//return root;
	}
	return root;
	}
	else{
		return 0;
	}
}
void BreadthTraversal(BSTNode* root){
	queue<BSTNode*> queueBSTNode;

		//if (root == NULL) return;
		queueBSTNode.push(root);
	while(!queueBSTNode.empty()){
	
	BSTNode* current =queueBSTNode.front();
	cout << "root: " << current->data << "\n";
	//BSTNode* rightchild=current->right;
		//cout << current->left->data <<" " << current->right->data << "\n";
		if(current->left!=NULL){
			cout << "left-child: " << current->left->data;
			queueBSTNode.push(current->left);
		}
			
		if(current->right!=NULL){
			cout << "\tright-child: " << current->right->data;
			queueBSTNode.push(current->right);
		}
		cout << "\n";
			
		
		queueBSTNode.pop();
		//current = queueBSTNode.front();
	}

}
void InorderTraversal(BSTNode* root){
	if(root!=NULL)	{
		if(root->left!=NULL){
			InorderTraversal(root->left);
		}
		cout << root->data << "->";
		if(root->right!=NULL){
			InorderTraversal(root->right);
		}
	}
}
void PostOrderTraversal(BSTNode* root){
	if(root!=NULL)	{
		if(root->left!=NULL){
			PostOrderTraversal(root->left);
		}
		
		if(root->right!=NULL){
			PostOrderTraversal(root->right);
		}
		cout << root->data << "->";
	}
}
void PreOrderTraversal(BSTNode* root){
	
	if(root!=NULL)	{
		cout << root->data << "->";
		if(root->left!=NULL){
			PreOrderTraversal(root->left);
		}
		
		if(root->right!=NULL){
			PreOrderTraversal(root->right);
		}
		
	}
}
int main(){
	BSTNode* root;
	root=NULL;
	root=Insert(root,10);
	root=Insert(root,20);
	root=Insert(root,5);
	root=Insert(root,15);
	root=Insert(root,25);
	root=Insert(root,8);
	root=Insert(root,42);
	root=Insert(root,61);
	root=Insert(root,7);
	BreadthTraversal(root);
	InorderTraversal(root);
	cout << "\n";
	PostOrderTraversal(root);
	cout << "\n";
	PreOrderTraversal(root);
}
