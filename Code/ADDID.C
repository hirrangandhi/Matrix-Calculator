//A+0=A
void addid()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n,flag=1;
//clrscr();
printf("\nEnter the number of rows in A matrix:\t");
scanf("%d",&m);
printf("\nEnter the number of columns in A matrix:\t");
scanf("%d",&n);
printf("\nEnter the elements of A matrix in row wise:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
//clrscr();
printf("\nThe A matrix you have entered is\n");
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
 b[i][j]=0;
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
 c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
 if(a[i][j]==c[i][j])
 {
 flag=1;
 }
else
{
  flag=0;
}
}
}
if(flag==1)
{
 printf("\n The property is verified\n");
}
else
{
 printf ("\n The property is not verified\n");
}
getch();
}




