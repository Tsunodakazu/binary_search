#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int w = 0;
    int sikiri = 0;
    for(int i = 0; i < n ; i ++)
    { if (m < A[i])
       sikiri = k+1;
     if (m >= w+A[i])
     w =w+ A[i] ;
      else{ sikiri = sikiri + 1;
      w = A[i];
      }
      
    }
    return sikiri < k;
    }

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
lb = 0;
 ub = 1e9;
 while(ub - lb > 1){
  int m =  (ub + lb) / 2;
if(p(m)) ub = m;
else lb = m;
  }
   printf("%d\n",ub);

  return 0;
}
