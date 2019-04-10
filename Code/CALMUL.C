
void calmul()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,k,p,q;
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
if(n==p)
{
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<m;k++)
{
c[i][j]=0;
c[i][j]+=a[i][k]*b[k][j];
}
}
}
printf("\The matrix multiplication is:\n");
for(i=0;i<m;i++)
{ 
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else
{
printf("\nMultiplication cannot be done as number of rows in B matrix and number of columns in A matrix are not same \n");
}
getch();
}
