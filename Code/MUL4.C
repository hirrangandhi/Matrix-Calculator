//IA=AI=A
void mul4()
{
int a[10][10],b[10][10],c[10][10],d[10][10],i,j,k,m,n,flag=1;
//clrscr();
printf("\nNote:\nThe number of rows and columns should be equal to verify this property\n");
printf("\nEnter the number of rows in A matrix:\t");
scanf("%d",&m);
printf("\nEnter the number of columns in A matrix:\t");
scanf("%d",&n);
printf("Enter the elements of A matrix in row wise:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter identity matrix of order %d",m);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&d[i][j]);
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
printf("\nThe identity matrix of order %d is:\n",m);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",d[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
 if(i==j)
 {
 if(d[i][j]==1)
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
if(flag==1)
{
printf("\nThe identity matrix of order %d is:\n",m);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",d[i][j]);
}
printf("\n");
}

 for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
 for(k=0;k<m;k++)
 {
  b[i][j]=0;
 b[i][j]+=a[i][k]*d[k][j];
}
}
}
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
 for(k=0;k<m;k++)
 {
  c[i][j]=0;
 c[i][j]+=d[i][k]*a[k][j];
}
}
}
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
 if(a[i][j]==b[i][j]==c[i][j])
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
 printf ("\nThe property is verified\n ");
}
else
{
 printf ("\nThe property is not verified\n");
}
}
else
{
 printf("\nEnter valid identity matrix\n");
}
getch();
}





