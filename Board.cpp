#include<iostream>
#include <bits/stdc++.h>

using namespace std;

class TreeNode {
   public:
   int data;
   TreeNode *right, *down;
   TreeNode(int d){
      data = d;
      right = down = NULL;
   }
};
void show_2d_list(TreeNode* head) {
   TreeNode *right_ptr, *down_ptr = head;
   while (down_ptr) {
      right_ptr = down_ptr;
      while (right_ptr) {
         cout << right_ptr->data << " ";
         right_ptr = right_ptr->right;
      }
      cout << endl;
      down_ptr = down_ptr->down;
   }
}
TreeNode* make_2d_list(int mat[][7], int i, int j, int m, int n) {
   if (i > n - 1 || j > m - 1)
      return NULL;
   TreeNode* temp = new TreeNode(mat[i][j]);
   temp->right = make_2d_list(mat, i, j + 1, m, n);
   temp->down = make_2d_list(mat, i + 1, j, m, n);
   return temp;
}
int main() {
   int m = 7, n = 7;
   int mat[][7] = {
      { 0, 0, 1, 1, 1, 0, 0},
      { 0, 0, 1, 1, 1, 0, 0},
      { 0, 0, 1, 1, 1, 0, 0},
      { 2, 2, 2, 2, 2, 2, 2},
      { 0, 0, 1, 1, 1, 0, 0},
      { 0, 0, 1, 1, 1, 0, 0},
      { 0, 0, 1, 1, 1, 0, 0} };
   TreeNode* head = make_2d_list(mat, 0, 0, m, n);
   show_2d_list(head);
}