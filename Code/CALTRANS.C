
void caltrans()
{
int a[10][10],b[10][10],m,n,p,q,i,j;
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
printf("\nThe transpose of matrix is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
getch();
}




