#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int w = 0;
    for(int i = 0; i < n; i++)
    { w =  w + (A[i] / m); 
    }
    return w < k ;
    }


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
lb = 0;
 ub = 1e9 + 1;
 while(ub - lb > 1){
  int m =  (ub + lb) / 2;
if(p(m)) ub = m;
else lb = m;
  }
   printf("%d\n",lb);
  return 0;
}
