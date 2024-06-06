#pragma once

typedef struct BinTreeNode
{
   struct BinTreeNode* parent;
   struct BinTreeNode* left;
   struct BinTreeNode* right;
   int data;
}BinTreeNode;

/*
* @brief ������� ������� � ������
* @param tree_: �������� ������ 
* @param data_: ������� ��������
* @return ��������� �� ������� ������ ���������� ������� ��������
*/
BinTreeNode* Find(BinTreeNode* tree_, int data_);

/*
* @brief ��������� ������� � ������
* @param tree_: �������� ������
* @param node_: ����������� �������
*/
void Insert(BinTreeNode** tree_, BinTreeNode* node_);

/*
* @brief ������� ������� �� ������
* @param tree_: �������� ������
* @param node_: ��������� �������
*/
void Remove(BinTreeNode** tree_, int data_);

void Print(BinTreeNode** tree_);

int Sum(BinTreeNode** tree_, int sum);

int Max(BinTreeNode** tree_);

int Min(BinTreeNode** tree_);

int Number_of_elements(BinTreeNode** tree_, int data);

void Print_leaves(BinTreeNode** tree_);