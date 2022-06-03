#ifndef _BST_H_
#define _BST_H_

typedef struct node {
 struct node * left;
 struct node * right;
}node_t;

node_t * insertNode(void * element, node_t * root, int(*compare)(void * elementA, void* element));//�ݶǤJ�����
node_t * deleteNode(void * element, node_t * root, int(*compare)(void * elementA, void* element),void(*Replace_data)(void* elementA,void* element));//�ݭn�ǤJ�@���Ndata����{��

node_t * findMinNode(void *root);
node_t * findMaxNode(void *root);
node_t * findNode(char *element,void *root,int(* compare)(char * elementA,void * element));//���D��ƴM���ƥ�, �n����j�p�ҥH�n�Ψ�compare
void inOrder(void *root,void(* Print_data)(void *element));
node_t *treeCopy(node_t *copy,void *root,void(*Replace_data)(void* elementA,void* element),int size);//�]���n�ƻsdata, �ҥH�n�ǤJ�@���Ndata����{��
int treeEqual(void *tree1,void *tree2,int(*compare)(void * elementA,void * element));
void buildTree(void * root);// �ۤv�[��, �i�o��node->left=NULL�Mnode->right=NULL


#endif // _BST_H_
