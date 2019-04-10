
void trans2()
{
int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],f[10][10],g[10][10],i,j,m,n,p,q,flag;
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
if(m==p&&n==q)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
f[i][j]=a[j][i]+b[i][j];
}
}
for(i=0;i<m;i++)
{ 
for(j=0;j<n;j++)
{
g[i][j]=f[j][i];
}
}
if(m==p&&n==q)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
e[i][j]=c[i][j]+d[i][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(e[i][j]==g[i][j])
flag=1;
else
flag=0;
}
}
}
}
else
{
printf("\nAddition cannot be done as number of rows and columns are not same for both the matrices\n");
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
