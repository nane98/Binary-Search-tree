#include <iostream>
#include "BinaryTree.h"
int main()
{
    BinaryTree<int> ob;
    ob.insert(5);
    ob.insert(9);
    ob.insert(3);
    ob.insert(4);
    ob.insert(7);
    ob.postorder_print();
    ob.inorder_print();
    ob.preorder_print();
    return 0;
}