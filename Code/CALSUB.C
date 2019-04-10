
void calsub()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
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
printf("\nThe matrix A you have entered is:\n");
for(i=0;i<m;i++)
{ 
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
//clrscr();
printf("\nThe matrix B you have entered is:\n");
for(i=0;i<p;i++)
{ 
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
if(m==p&&n==q)
{
for(i=0;i<m;i++)
{ 
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
}
printf("\nThe matrix subtraction is:\n");
for(i=0;i<m;i++)
{ 
for(j=0;j<n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else
{
printf("\nSubtarction cannot be done as number of rows and columns are not same for both the matrices\n");
}
getch();
}

