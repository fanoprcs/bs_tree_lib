#ifndef _BST_H_
#define _BST_H_

typedef struct node {
 struct node * left;
 struct node * right;
}node_t;

node_t * insertNode(void * element, node_t * root, int(*compare)(void * elementA, void* element));//需傳入比較器
node_t * deleteNode(void * element, node_t * root, int(*compare)(void * elementA, void* element),void(*Replace_data)(void* elementA,void* element));//需要傳入一替代data的方程式

node_t * findMinNode(void *root);
node_t * findMaxNode(void *root);
node_t * findNode(char *element,void *root,int(* compare)(char * elementA,void * element));//給主函數尋找資料用, 要比較大小所以要用到compare
void inOrder(void *root,void(* Print_data)(void *element));
node_t *treeCopy(node_t *copy,void *root,void(*Replace_data)(void* elementA,void* element),int size);//因為要複製data, 所以要傳入一替代data的方程式
int treeEqual(void *tree1,void *tree2,int(*compare)(void * elementA,void * element));
void buildTree(void * root);// 自己加的, 懶得打node->left=NULL和node->right=NULL


#endif // _BST_H_
