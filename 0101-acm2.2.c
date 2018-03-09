#include<stdio.h>
#include<string.h>

int main()
{
    char a[100][100][100];
    int n[100];
    int i=0,j,k,m=0;
    char b[100][100][100];

    while(scanf("%d",&n[i])!=EOF)
    {

        for(j=0;j<n[i];j++)
        {
           scanf("%s",a[i][j]);
        }
        i++;
    }


    for(k=0;k<i;k++)
    {
        m=0;
       for(j=0;a[k][j][0]!='\0';j++)
       {

          if(strcmp("bowl",a[k][j])==0||strcmp("knife",a[k][j])==0||strcmp("fork",a[k][j])==0||strcmp("chopsticks",a[k][j])==0)
          {
              strcpy(b[k][m],a[k][j]);
              m++;

          }
       }
    }

    for(k=0;k<i;k++)
    {
        for(j=0;b[k][j][0]!='\0';j++)
        {
            printf("%s ",b[k][j]);
        }
        printf("\n");
    }

	return 0;
}
