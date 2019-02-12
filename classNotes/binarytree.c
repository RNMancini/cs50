#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} ListNode;

typedef struct BinaryNode
{
    int data;
    struct BinaryNode *smaller;
    struct BinaryNode *larger;
} BinaryNode;

BinaryNode* root = NULL;

void add(int);
int seek(int); //true 1 or false 0 if item exists in tree

void testTree()
{
    add(5);
    assert(seek(5) == 1 && "tree contains the number 5");

    add(3);
    add(4);
    assert(seek(9) == 0 && "tree does not contain 9");
}

    int main(void)
{
    printf("Hello\n");
    //int data[] = {5, 8, 2, 9, 4, 1, 3};
    testTree();
}

void add(int data)
{
    BinaryNode* newNode = malloc(sizeof(BinaryNode));
    newNode->data = data;
    newNode->smaller = NULL;
    newNode->larger = NULL;

    if (root == NULL)
    {
        root = newNode;
        return;
    }
    while(true)
    {
        return;
    }
}