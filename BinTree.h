#pragma once

typedef struct BinTreeNode
{
   struct BinTreeNode* parent;
   struct BinTreeNode* left;
   struct BinTreeNode* right;
   int data;
}BinTreeNode;

/*
* @brief Находит элемент в дереве
* @param tree_: Бинарное дерево 
* @param data_: Искомое значение
* @return Указатель на элемент дерева содержащий искомое значение
*/
BinTreeNode* Find(BinTreeNode* tree_, int data_);

/*
* @brief Вставляет элемент в дерево
* @param tree_: Бинарное дерево
* @param node_: Вставляемый элемент
*/
void Insert(BinTreeNode** tree_, BinTreeNode* node_);

/*
* @brief Удаляет элемент из дерева
* @param tree_: Бинарное дерево
* @param node_: Удаляемый элемент
*/
void Remove(BinTreeNode** tree_, int data_);

void Print(BinTreeNode** tree_);

int Sum(BinTreeNode** tree_, int sum);

int Max(BinTreeNode** tree_);

int Min(BinTreeNode** tree_);

int Number_of_elements(BinTreeNode** tree_, int data);

void Print_leaves(BinTreeNode** tree_);