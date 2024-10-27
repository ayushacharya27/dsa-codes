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

struct Node* constructTree(int arr[] , int index , int n){
    if(index >= n){
        index++;
        return NULL;
    }
    struct Node * root = newNode(arr[index]);

    index++;

    root->left = constructTree(arr, index, n);
    root->right = constructTree(arr, index, n);
    return root;
}

/*Assume array input is 1 2 3 4 5 6
then tree will be 
        1
       / \
      2   3
     / \ / \
    4  5 6  7
*/
