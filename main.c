#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"

int main()
{
   BinTreeNode* Tree = NULL;
   int ñhoice = 0;
   int data;
   while (1)
   {
      printf("1. Find\n");
      printf("2. Insert\n");
      printf("3. Remove\n");
      printf("4. Print leaves\n");
      printf("5. Sum\n");
      printf("6. Max\n");
      printf("7. Min\n");
      printf("8. Number of elements\n");
      scanf_s("%d", &ñhoice);
      switch (ñhoice)
      {
      case(1):
         printf("Enter data: ");
         scanf_s("%d", &data);
         printf("\n%d\n\n", Find(Tree, data) != NULL);;
         break;
      case(2):
         printf("Enter data: ");
         scanf_s("%d", &data);
         BinTreeNode* NewTree = (BinTreeNode*)malloc(sizeof(BinTreeNode));
         NewTree->data = data;
         NewTree->left = NULL;
         NewTree->right = NULL;
         NewTree->parent = NULL;
         Insert(&Tree, NewTree);
         printf("\nDone\n\n");
         break;
      case(3):
         printf("Enter data: ");
         scanf_s("%d", &data);
         Remove(&Tree, data);
         printf("\nDone\n\n");
         break;
      case(4):
         Print_leaves(&Tree);
         printf("\n\n");
         break;
      case(5):
         printf("\n%d\n\n", Sum(&Tree, 0));
         break;
      case(6):
         printf("\n%d\n\n", Max(&Tree));
         break;
      case(7):
         printf("\n%d\n\n", Min(&Tree));
         break;
      case(8):
         printf("Element: ");
         scanf_s("%d", &data);
         printf("\n%d\n\n", Number_of_elements(&Tree, data));
         break;
      case(9):

      default:
         return 0;
      }
   }
}