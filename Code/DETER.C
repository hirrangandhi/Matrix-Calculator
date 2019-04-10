//determinant
void determinant1()
{
int a[10][10],i,j,m,n;
int determinant=0;
//clrscr();
printf("\nEnter the number of rows in A matrix:\t");
scanf("%d",&m);
printf("\nEnter the number of columns in A matrix:\t");
scanf("%d",&n);
printf("\nEnter the elements of A matrix in row wise:\n ");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
//clrscr();
printf("\nThe matrix you have entered is:\n");
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
determinant = determinant + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));
}
}
printf("\nDeterminant of matrix is: %d",determinant);
getch();
}
