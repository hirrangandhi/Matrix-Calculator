
//A+B=0
void addinv()
{
int a[10][10],b[10][10],c[10][10],d[10][10],i,j,m,n,p,q,flag;
//clrscr();
printf("\nEnter the number of rows for A matrix:\t");
scanf("%d",&m);
printf("\nEnter the number of columns for A matrix:\t");
scanf("%d",&n);
printf("\nEnter the elements of matrix A in row wise:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter the number of rows for B matrix:\t");
scanf("%d",&p);
printf("\nEnter the number of columns for B matrix:\t");
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
printf("\nThe  matrix B you have entered is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
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
c[i][j]=a[i][j]+b[i][j];
d[i][j]=0;
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(c[i][j]==d[i][j])
 flag=1;
else
 flag=0;
}
}
}
else
{
 printf("\nAddition cannot be done as number of rows and columns are not same for both the matrices\n");
}
if(flag==1)
{
 printf("\nProperty is verified\n");
}
else
{
 printf("\nProperty is not verified\n");
}
getch();
}
