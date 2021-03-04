#include<iostream>
using namespace std;

int matOrder(int A[], int n) {
   int Mul[n][n];

   for (int i=1; i<n; i++)
      Mul[i][i] = 0;

   for (int length=2; length<n; length++) {
      for (int i=1; i<n-length+1; i++) {
         int j = i+length-1;
         Mul[i][j] = INT_MAX;
         for (int k=i; k<=j-1; k++) {

            int q = Mul[i][k] + Mul[k+1][j] + A[i- 1]*A[k]*A[j];
            if (q < Mul[i][j])
               Mul[i][j] = q;
         }
      }
   }
   return Mul[1][n-1];
}

int main() {
   int arr[] = {1, 2, 3, 4};
   int size = 4;
   cout << "Minimum number of matrix multiplications: " << matOrder(arr, size);
}
