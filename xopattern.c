/*
 x o o o o
 o x o o o
 o o x o o
 o o o x o
 o o o o x
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
  {if(i==j)
    printf("x ");
   else
    printf("o ");
  }
  printf("\n");
 }
 printf("\n");
 return 0;
}
/*
 o o o o o
 x o o o o
 x x o o o
 x x x o o 
 x x x x o
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
  {if (i<=j)
    printf("o ");
   else
    printf("x ");
  }
  printf("\n");
 }
/* 
 x o o o o
 o x o x o 
 o o x o o
 o x o x o
 x o o o x
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
  {if (i==j || (i+j)==n-1)
    printf("x ");
   else
    printf("o ");
  }
  printf("\n");
 }
}*/

/*
 x x x x x
 x x x x x
 x x o x x
 x x x x x
 x x x x x
*/
#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
  {if(i==n/2 && j==n/2)
    printf("o ");
   else
    printf("x ");
  }
  printf("\n");
 }
 printf("\n");
 return 0;
}
/*
  o o x o o
  o o x o o 
  x x x x x 
  o o x o o
  o o x o o
*/
#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
  {if(i==n/2 || j==n/2)
    printf("x ");
   else
    printf("o ");
  }
  printf("\n");
 }
 printf("\n");
 return 0;
}

