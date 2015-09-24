#include <stddef.h>
#include "bintree.h"

///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///

// Recall node is defined in the header file
node *root = NULL;

// Insert a new node into the binary tree with node_id and data
void insert_node(int node_id, int data) {
    node *temp = root;
    node *newNode;
    newNode->node_id = node_id;
    newNode->data = data;
    newNode->left_child = NULL;
    newNode->right_child = NULL;
    
    while (temp != NULL) {
        if (node_id < temp->node_id) {
            temp = temp->left_child;
        }
        else if (node_id > temp->node_id) {
            temp = temp->right_child;
        }
    }
    
    newNode = temp;

}

// Find the node with node_id, and return its data
int find_node_data(int node_id) {
	node *temp = root;
    while (temp!=NULL && node_id!=temp->node_id) {
        if (node_id < temp->node_id) {
            temp = temp->left_child;
        }
        else 
            temp = temp->right_child;
    }
    
    return temp->node_id;
}

///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
/*//Find and remove a node in the binary tree with node_id. 
//Children nodes are fixed appropriately.
void remove_node(int node_id) {
	
}
*/
