/*
* Name: Semih Özkaplan
* Student No: 201504013
* Date: 16.12.2022
* Lab Session 9
*/

#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100 


struct NodeT
{
    int val;
    struct NodeT* left, * right;
};


struct Stack
{
    int size;
    int top;
    struct NodeT** array;
};


struct Stack* createStack(int size)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->size = size;
    stack->top = -1;
    stack->array = (struct NodeT**)malloc(stack->size * sizeof(struct NodeT*));

    return stack;
}


int isFull(struct Stack* stack)
{
    return stack->top == stack->size - 1;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

void push(struct Stack* stack, struct NodeT* node)
{
    if (isFull(stack))
        return;

    stack->array[++stack->top] = node;
}

struct NodeT* pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return NULL;

    return stack->array[stack->top--];
}

struct NodeT* peek(struct Stack* stack) {

    if (isEmpty(stack))
        return INT_MIN;

    return stack->array[stack->top];

}


bool isPairPresent(struct NodeT* root, int target)
{

    struct Stack* s1 = createStack(MAX_SIZE);
    struct Stack* s2 = createStack(MAX_SIZE);

    bool done1 = false;
    bool done2 = false;

    int val1 = 0;
    int val2 = 0;

    struct NodeT* curr1 = root;
    struct NodeT* curr2 = root;


    while (1)
    {
  
        while (done1 == false)
        {
            if (curr1 != NULL)
            {
                push(s1, curr1);
                curr1 = curr1->left;
            }
            
            else
            {
               
                if (isEmpty(s1))
                    done1 = 1;
               
                else
                {
                    curr1 = peek(s1);
                    val1 = curr1->val;
                    curr1 = curr1->right;
                    done1 = 1;
                }
            }
        }

        while (done2 == false)
        {
            if (curr2 != NULL)
            {
                push(s2, curr2);
                curr2 = curr2->right;
            }

            else
            {

                if (isEmpty(s2))
                    done2 = 1;

                else
                {
                    curr2 = peek(s2);
                    val2 = curr2->val;
                    curr2 = curr2->left;
                    done2 = 1;

                }
            }
        }

        // I did double check here :)
        if ((val1 != val2) && (val1 + val2) == target)
        {

                if (!isEmpty(s1) && !isEmpty(s2)) {

                    if ((s1->array[s1->top]->val != s2->array[s2->top]->val) && s1->array[s1->top]->val + s2->array[s2->top]->val == target) {

                        printf("Pair Found : % d + % d = % d\n", pop(s1)->val, pop(s2)->val, target);

                        if ((s1->array[s1->top]->val + s2->array[s2->top]->val) < target) {

                            pop(s1);
                            done1 = false;

                        }

                        if ((s1->array[s1->top]->val + s2->array[s2->top]->val) > target) {

                            pop(s2);
                            done2 = false;

                        }

                    }

                }

        if (isEmpty(s1) || isEmpty(s2))
            return true;

            else {

                done1 = false;
                done2 = false;

            }


        }


    }


}


struct NodeT* NewNode(int val)
{
    struct NodeT* new_node = (struct NodeT*)malloc(sizeof(struct NodeT));
    new_node->val = val;
    new_node->right = new_node->left = NULL;

    return new_node;
}


int main(void)
{

    /*
                 20
                /   \
              10     30
             /  \   /  \
            5   15 25  35

    */

    struct NodeT* root = NewNode(20);
    root->left = NewNode(10);
    root->right = NewNode(30);
    root->left->left = NewNode(5);
    root->left->right = NewNode(15);
    root->right->left = NewNode(25);
    root->right->right = NewNode(35);

    int target = 40;

    printf("**This program shows that the sum of the pairs if it does not print anything it means THERE IS NO MATCH !!!\n\n");

    isPairPresent(root, target);
        

    return 0;
    
}
