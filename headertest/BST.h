#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

//Structure Declarations
typedef struct node
{
    void * dataptr;
    struct node *left,*right;
}NODE;

typedef struct
{
    int count;
    int (*compare)(void *argu1, void* argu2);
    NODE *root;
}BST_TREE;

//Prototype Declarations
BST_TREE *BST_Create (int (*compare)(void *argu1,void *argu2));
BST_TREE *BST_Destroy(BST_TREE *tree);
bool BST_Insert(BST_TREE*tree,void*dataptr);
bool BST_Delete(BST_TREE *tree,void *dltkey);
bool BST_Empty(BST_TREE *tree);
bool BST_Full(BST_TREE *tree);
int BST_Count(BST_TREE *tree);
void BST_Traverse(BST_TREE *tree, void(*process)(void*dataptr));
void *BST_Retrieve(BST_TREE *tree, void *keyptr);
static void _traverse(NODE *root, void(*process)(void *dataptr));
static void _destroy(NODE *root);
static void *_retrieve(BST_TREE *tree, void *dataptr, NODE *root);
static NODE* _insert(BST_TREE*tree, NODE*root, NODE*newptr);
static NODE* _delete(BST_TREE* tree, NODE*root, void*dataptr, bool *success);

//Create BST
BST_TREE *BST_Create(int (*compare)(void *argu1,void *argu2))
{
    BST_TREE *tree;
    tree=(BST_TREE*)malloc(sizeof(BST_TREE));
    if(tree)
    {
        tree->root=NULL;
        tree->count=0;
        tree->compare=compare;
    }
    return tree;
}

//Insert BST
bool BST_Insert(BST_TREE*tree,void*dataptr)
{
    NODE *newptr;
    newptr=(NODE*)malloc(sizeof(NODE));
    if(!newptr)
        return false;
    newptr->right=NULL;
    newptr->left=NULL;
    newptr->dataptr=dataptr;
    if(tree->count==0)
        tree->root=newptr;
    else
        _insert(tree,tree->root,newptr);
    (tree->count)++;
    return true;
}

//INTERNAL insert
NODE *_insert(BST_TREE*tree, NODE*root, NODE*newptr)
{
if(!root)
    return newptr;
if(tree->compare(newptr->dataptr,root->dataptr)<0)
{
    root->left=_insert(tree,root->left,newptr);
    return root;
}
else
{
    root->right=_insert(tree,root->right,newptr);
    return root;
}
return root;
}

//Delete
bool BST_Delete(BST_TREE *tree,void *dltkey)
{
    bool success;
    NODE*newroot;
    newroot=_delete(tree,tree->root,dltkey,&success);
    if(success)
    {
        tree->root=newroot;
        (tree->count)--;
        if(tree->count==0)
            tree->root=NULL;
    }
    return success;
}

//INTERNAL Delete
NODE *_delete(BST_TREE* tree, NODE*root, void*dataptr, bool *success)
{
    NODE*dltptr;
    NODE*exchptr;
    NODE*newroot;
    void* holdptr;

    if(!root)
    {
        *success=false;
        return NULL;
    }
    if(!root)
    {
        *success=false;
        return NULL;
    }
    if(tree->compare(dataptr,root->dataptr)<0)
        root->left=_delete(tree,root->left,dataptr,success);
    else if(tree->compare(dataptr,root->dataptr)>0)
        root->right=_delete(tree,root->right,dataptr,success);
        else
        {
            dltptr=root;
            if(!root->left)
            {
                free(root->dataptr);
                newroot=root->right;
                free(dltptr);
                *success=true;
                return newroot;
            }
            else if(!root->right)
            {
                newroot=root->left;
                free(dltptr);
                *success=true;
                return newroot;
            }
            else
            {
                exchptr=root->left;
                while(exchptr->right)
                    exchptr=exchptr->right;

                holdptr=root->dataptr;
                root->dataptr=exchptr->dataptr;
                exchptr->dataptr=holdptr;
                root->left=_delete(tree,root->left,exchptr->dataptr,success);
            }
        }
        return root;
}

//Retrieve BST
void *BST_Retrieve(BST_TREE *tree, void *keyptr)
{
    if(tree->root)
        return _retrieve(tree, keyptr, tree->root);
    else
        return NULL;
}

//INTERNAL Retrieve
void *_retrieve(BST_TREE *tree, void *dataptr, NODE *root)
{
    if(root)
    {
        if(tree->compare(dataptr, root->dataptr)<0)
            return _retrieve(tree, dataptr, root->right);
        else if(tree->compare(dataptr,root->dataptr)>0)
            return _retrieve(tree, dataptr, root->left);
        else
            return root->dataptr;
    }
    else
        return NULL;
}

//Traverse BST
void BST_Traverse(BST_TREE *tree, void(*process)(void*dataptr))
{
    _traverse(tree->root, process);
    return;
}

//INTERNAL Traverse
void _traverse(NODE *root, void(*process)(void *dataptr))
{
    if(root)
    {
        _traverse(root->left, process);
        process(root->dataptr);
        _traverse(root->right, process);
    }
    return;
}

//Empty BST
bool BST_Empty(BST_TREE *tree)
{
    return(tree->count==0);
}

//Full BST
bool BST_Full(BST_TREE *tree)
{
    NODE *newptr;
    newptr=(NODE*)malloc(sizeof(*(tree->root)));
    if(newptr)
    {
        free(newptr);
        return false;
    }
    else
        return true;
}

//Count BST
int BST_Count(BST_TREE *tree)
{
    return (tree->count);
}

//Destroy BST
BST_TREE *BST_Destroy(BST_TREE *tree)
{
    if(tree)
        _destroy(tree->root);
    free(tree);
    return NULL;
}

//INTERNAL Destroy
void _destroy(NODE *root)
{
    if(root)
    {
        _destroy(root->left);
        free(root->dataptr);
        _destroy(root->right);
        free(root);
    }
    return;
}



