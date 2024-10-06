#include <stdio.h>
#include <stdlib.h>

//Creation of nodes
struct Node{
    int data; // data in the Tree Node
    struct Node* left;
    struct Node* right;
};

// Formation of a Node Levels of a Tree
struct Node* newNode(int data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;

    //Initializing as Null
    node->left = NULL;  
    node->right = NULL;
    return node;

}

struct Node* insertLevelOrder(int arr[] , struct Node* root , int i , int n){
    // i -> current index in array for assigning child
    // n -> length of array 

    if(i<n){
        struct Node* temp = newNode(arr[i]);
        root = temp;       
        /*  1
           / \
          2   3
         / \
        4   5
        array = [1,2,3,4,5]
        i.e. we are going level wise*/
        root->left = insertLevelOrder(arr , root , 2*i+1 , n); // 2i+1 for left node
        root-> right = insertLevelOrder(arr, root , 2*i+2 , n);// 2i+2 for right node

    }
    return root;    

}

void levelorder(struct Node* root){
    if(root = NULL){
        return;
    }
    struct Node* queue[100];
    int front = 0 ;  
    int rear = 0;
    queue[rear++]= root; //intialsing 1st node as root
    while(rear>front){
        struct Node* temp =queue[front++];
        // for itertaion 1 front = 1, root at 1 so it will print data of root , front=1 , root =1;
        // for iteration 2 front = 2 , root->left at 2 , it will print data of root->left and move on... 
        printf(temp->data);
        if(temp->left != NULL){
            // 1st iteration since root has left node queue[2]= root->left rear=2
            // 2nd iteration , u got it right......
            queue[rear++] = temp->left;

        }
        else if(temp->right != NULL){
            //1st itertaion since root has right node queue[3]= root->right , rear = 3;
            queue[rear++] = temp->right;
        }


    }



}



int main(){
    //take array input
    //pass parameters to required fucniton and get the tree
    // print in level travearsal

    return 0;
}