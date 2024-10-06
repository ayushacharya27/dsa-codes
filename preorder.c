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
// same as before

void preorder(struct Node* root){
    if(root !=NULL){
        /*  1
           / \
          2   3
         / \
        4   5
        array = [1,2,3,4,5]
        print = 1 , 2 , 4 ,5 , 3  
        i.e. we are to root and then from there going left if finished then going right */
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);



    }


}