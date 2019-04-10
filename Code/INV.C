
void transpose(int[25][25],int[25][25],int);
void inverse()
{
    int matrix[25][25],size,d;
    int i,j;
    int determinant(int[25][25],int);
void cofactor(int[25][25],int);


    //clrscr();
printf("/nNote:/nEnter the same number of rows and columns to find the inverse of the matrix\n");
    printf("\nEnter the number of rows & columns in matrix:\t  ");
    scanf("%d",&size);
    printf("\nEnter the elements of matrix in row wise: \n");
    for (i=0;i<size;i++)
    {
	for (j=0;j<size;j++)
	{
	   scanf("%d",&matrix[i][j]);
}
    }
    //clrscr();
     printf("\nThe matrix you have entered is : \n");
    for (i=0;i<size;i++)
    {
	for (j=0;j<size;j++)
	{
	   printf("%d\t",matrix[i][j]);
}
printf("\n");

    }
    d=determinant(matrix,size);
    printf("\n\tDeterminant of the matrix = %d\n",d);
    if (d==0)
    {
	printf("\n\tInverse does not exist\n\n");

    }
    else
	cofactor(matrix,size);
    getch();
}

/*For calculating Determinant of the Matrix . this function is recursive*/
int determinant(int matrix[25][25],int size)
{
    int s=1,det=0,m_minor[25][25];
    int i,j,m,n,c;
    if (size==1)
    {
	return (matrix[0][0]);
    }
    else
    {
	det=0;
	for (c=0;c<size;c++)
	{
	    m=0;
	    n=0;
	    for (i=0;i<size;i++)
	    {
		for (j=0;j<size;j++)
		{
		    m_minor[i][j]=0;
		    if (i != 0 && j != c)
		    {
		       m_minor[m][n]=matrix[i][j];
		       if (n<(size-2))
			  n++;
		       else
		       {
			   n=0;
			   m++;
		       }
		    }
		}
	    }
	    det=det + s * (matrix[0][c] * determinant(m_minor,size-1));
	    s=-1 * s;
	}
    }

    return (det);
}

 /*calculate cofactor of matrix*/
void cofactor(int matrix[25][25],int size)
{
     int m_cofactor[25][25],matrix_cofactor[25][25];
     int p,q,m,n,i,j;
     for (q=0;q<size;q++)
     {
	 for (p=0;p<size;p++)
	 {
	     m=0;
	     n=0;
	     for (i=0;i<size;i++)
	     {
		 for (j=0;j<size;j++)
		 {
		     if (i != q && j != p)
		     {
			m_cofactor[m][n]=matrix[i][j];
			if (n<(size-2))
			   n++;
			else
			{
			    n=0;
			    m++;
			}
		     }
		 }
	     }
	     matrix_cofactor[q][p]=pow(-1,q + p) * determinant(m_cofactor,size-1);
	 }
     }
     transpose(matrix,matrix_cofactor,size);
}

/*Finding transpose of cofactor of matrix*/
void transpose(int matrix[25][25],int matrix_cofactor[25][25],int size)
{
     int i,j;
     int m_transpose[25][25],m_inverse[25][25],d;

     for (i=0;i<size;i++)
     {
	 for (j=0;j<size;j++)
	 {
	     m_transpose[i][j]=matrix_cofactor[j][i];
	 }
     }
     d=determinant(matrix,size);
     for (i=0;i<size;i++)
     {
	 for (j=0;j<size;j++)
	 {
	     m_inverse[i][j]=m_transpose[i][j] / d;
	 }
     }
     printf("\n\tThe inverse of matrix is : \n\n");

     for (i=0;i<size;i++)
     {
	 for (j=0;j<size;j++)
	 {
	     printf("\t%d",m_inverse[i][j]);
	 }
	 printf("\n\n");
     }

}
