void trans1()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,flag;
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

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[j][i];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=b[j][i];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(c[i][j]==a[i][j])
flag=1;
else
flag=0;
}
}

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(flag==1)
printf("\nThe poperty is verified\n");
else
printf("\nThe property is not verified\n");
}
}
getch();
}
