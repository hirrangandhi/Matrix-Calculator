
void types()
{
	    int data[50][50];
void identity(int data[50][50],int m,int n);
void diagonal(int data[50][50],int m,int n);
void null(int data[50][50],int m,int n);
void lower(int data[50][50],int m,int n);
void upper(int data[50][50],int m);
void symmetric(int data[50][50],int m,int n);
void skew(int data[50][50],int m,int n);

	    int i, j, m,n;
	    //clrscr();
	    printf("\nEnter the number of Rows:\t");
	    scanf("%d",&m);
	    printf("\nEnter the number of Columns:\t");
	    scanf("%d",&n);
	    printf("\nEnter the Elements of the matrix in row-wise: \n");

	    for(i=0;i<m;i++)
	    {
			for(j=0;j<n;j++)
			{
				    scanf("%d",&data[i][j]);
			}
	    }
	    //clrscr();
	    printf("\nThe entered matrix is : \n");
	    for(i=0;i<m;i++)
	    {
			for(j=0;j<n;j++)
			{
				    printf("%d \t",data[i][j]);
			}
			printf("\n");
	    }
	    identity(data,m,n);
	    diagonal(data,m,n);
	    null(data,m,n);
	    lower(data,m,n);
	    upper(data,m);
	    symmetric(data,m,n);
	    skew(data,m,n);
	    getch();
}
void identity(int data[50][50],int m,int n)
{
 int i,j,flag=0;
 for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
{
if(i==j)
{
 if(data[i][j]==1)
flag = 1;
else
flag=0;
}
}
}

 for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
{
if(i!=j)
{
if(data[i][j]==0)
flag=1;
else
flag=0;
}
}


}
if(flag == 1 )
printf("\nThe matrix is identity matrix\n");
}
void diagonal(int data[50][50],int m,int n)
{
int i,j,flag=0;
 for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
{
if(i==j)
{
 if(data[i][j]!=0)
flag = 1;
else
flag=0;
}
}
}
 for(i=0; i<m; i++)
{
for(j=0; j<n; j++)
{
if(i!=j)
{
if(data[i][j]==0)
flag=1;
else
flag=0;
}
}


}
if(flag == 1 )
printf("\nThe matrix is diagonal matrix\n");
}
void null(int data[50][50],int m,int n)
{
 int i,j,null=0;
 for(i=0;i<m;i++)
{
 for(j=0;j<m;j++)
 {
 if(data[i][j]==0)
   null++;
 }
}
if(null==m*n)
  printf("\n The given matrix is null matrix\n");

}
void lower(int data[50][50],int m,int n)
{
 int i,j,flag=0;
 if(m>1&&n>1)
 {
for (i = 0; i < m; i++) {
		for (j = i + 1; j < n; j++)
{
			if (data[i][j] != 0)
 {
		       flag=1;
	   break;

			}
		}
   }

if(flag==0)
{
  printf("\nThe matrix is a lower triangular matrix\n");
}}
}
void upper(int data[50][50],int m)
{
 int i,j,flag=0;
 if(m>1)
 {
 for (i = 0; i < m; i++)
 {
		for (j = i -1; j>=0; j--)
{
			if (data[i][j] != 0)
 {
		       flag=1;
	   break;

			}
		}
   }

if(flag==0)
{
  printf("\nThe matrix is an upper triangular matrix\n");
}}
  }
void symmetric(int data[50][50],int m,int n)
{
 int i,j,flag=0;
 for(i=0;i<m;i++)
	    {
			for(j=0;j<n;j++)
			{
				    if(data[i][j]!=data[j][i])
				    {
						flag=1;
						break;
				    }
			}
	    }
	    if(flag==0)
			printf("\nThe matrix is a Symmetric Matrix\n ");

}

void skew(int data[50][50],int m,int n)
{
 int i,j,flag=0;
 for(i=0;i<m;i++)
	    {
			for(j=0;j<n;j++)
			{
				    if(data[i][j]!=-data[j][i])
				    {
						flag=1;
						break;
				    }
			}
	    }
	    if(flag==0)
			printf("\nThe matrix is a Skew Symmetric Matrix\n");


}


