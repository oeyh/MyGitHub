#include <stdio.h>
#include "bintree.h"

int main() {
	/*
	Insert your test code here. Try inserting nodes then searching for them.

	When we grade, we will overwrite your main function with our own sequence of
	insertions and deletions to test your implementation. If you change the
	argument or return types of the binary tree functions, our grading code
	won't work!
	*/
    insert_node(1, 599);
    insert_node(3, 293);
    insert_node(5, 177);
    insert_node(9, 991);
    insert_node(8, 123);
    
    printf("%d\n", find_node_data(9));
    printf("%d\n", find_node_data(10));
    

	return 0;
}
