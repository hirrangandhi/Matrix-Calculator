//a(b+c)=AB+AC
void mul2()
{
int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],f[10][10],g[10][10],h[10][10],i,j,m,n,k,p,q,r,s,flag;
//clrscr();
printf("\nEnter the number of rows of matrix A:\t");
scanf("%d",&m);
printf("\nEnter the number of columns of matrix A:\t");
scanf("%d",&n);
printf("\nEnter the elements of matrix A in row wise:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter the number of rows of matrix B:\t");
scanf("%d",&p);
printf("\nEnter the number of columns of matrix B:\t");
scanf("%d",&q);
printf("\nEnter the elements of matrix B in row wise:\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\nEnter the number of rows of matrix C:\t");
scanf("%d",&r);
printf("\nEnter the number of columns of matrix C:\n");
scanf("%d",&s);
printf("\nEnter the elements of matrix C in row wise:\t");
for(i=0;i<r;i++)
{
for(j=0;j<s;j++)
{
scanf("%d",&c[i][j]);
}
}
//clrscr();
printf("\nThe matrix A you have entered is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\nThe matrix B you have entered is:\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("\nThe matrix C you have entered is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<s;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
if(p==r&&q==s)
{
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
d[i][j]=b[i][j]+c[i][j];
}
}
if(n==p)
{
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<m;k++)
{
e[i][j]=0;
e[i][j]+=a[i][k]*d[k][j];
}
}
}
if(n==p)
{
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<m;k++)
{
f[i][j]=0;
f[i][j]+=a[i][k]*b[k][j];
}
}
}
if(n==r)
{
for(i=0;i<m;i++)
{
for(j=0;j<s;j++)
{
for(k=0;k<m;k++)
{
g[i][j]=0;
g[i][j]+=a[i][k]*c[k][j];
}
}
}
if(m==m&&q==s)
{
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
h[i][j]=f[i][j]+g[i][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<s;j++)
{
if(e[i][j]==h[i][j])
{
flag=1;
}
else
{
flag=0;
}
}
}
}
}
}
}
else
{
printf("\nMultiplication cannot be done as number of rows in B matrix and number of columns in A matrix are not same\n");
}
}
else
{
printf("\nAddition cannot be done as number of rows and columns are not same for both the matrices\n");
}
if(flag==1)
{
printf("\nThe property is verified\nThe matrices you have entered is distributive\n");
}
else
{
printf("\nThe property is not verified\nThe matrices you have entered is not distributive\n");
}
getch();
}
