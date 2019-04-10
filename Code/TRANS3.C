
void trans3()
{
int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],f[10][10],g[10][10],i,j,m,n,k,p,q,flag;
//clrscr();
printf("\nEnter the number of rows in matrix A:\t");
scanf("%d",&m);
printf("\nEnter the number of columns in matrix A:\t");
scanf("%d",&n);
printf("\nEnter the elements of matrix A in row wise:\n");
for(i=0;i<m;i++)
{ 
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter the number of rows in matrix B:\t");
scanf("%d",&p);
printf("\nEnter the number of columns in matrix B:\t");
scanf("%d",&q);
printf("\nEnter the elements of matrix B in row wise:\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
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
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[j][i];
d[i][j]=b[j][i];
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
e[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
f[i][j]=e[j][i];
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
g[i][j]=0;
g[i][j]+=d[i][k]*c[k][j];
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
if(f[i][j]==g[i][j])
flag=1;
else
flag=0;
}
}
}
}
else
{
printf("\nMultiplication cannot be done as the number of columns in matrix A is not equal to the number of rows in matrix B\n");
}
if(flag==1)
{
printf("\nThe property is verified\n");
}
else
{
printf("\nThe property is not verified\n");
}
getch();
}
