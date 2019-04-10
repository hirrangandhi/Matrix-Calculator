
void challenge()
{
int flag,flag1,a[50][50],b[50][50],c[50][50],d[50][50],i,j,k,choice,choice1,choice2,ze,zer,sec;
time_t t,t1,end,start;
struct tm *local,*local1;
//clrscr();
printf("\nWELCOME TO CHALLENGE \n In challenge,the computer will randomly generate two matrices to perform matrix operations like addition,subtraction,multiplication of your own choice. \n Then you have to take a paper and pen and do the calculation you have selected  for the generated matrices and enter the answer you have got in the system\n");
ssss:
printf("\nEnter 0  to continue\n");
scanf("%d",&ze);
if(ze==0)
{
//clrscr();
}
else
{
printf("\nEnter correct choice\n");
goto ssss;
}
yyy:
printf("\nSelect your choice\n");
printf("\n1.Addition,2.Subtraction,3.Multiplication\n");
scanf("%d",&choice);
if(choice==1||choice==2||choice==3)
{
t=time(NULL);
local=localtime(&t);
printf("\nYou have the started the calculation on %d/%d/%d at %d:%d:%d\n",local->tm_year+1900,local->tm_mon+1,local->tm_mday,local->tm_hour,local->tm_min,local->tm_sec);
start=time(NULL);
switch(choice)
{
case 1:

srand(time(NULL));
printf("\nYou are going to perform the matrix calculations with the following matrices");
printf("\nThe first matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]=rand()%10);
}
printf("\n");
}
printf("\nThe second matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]=rand()%10);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
break;

case 2:

srand(time(NULL));
printf("\nYou are going to perform the matrix calculations with the following matrices");
printf("\nThe first matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]=rand()%10);
}
printf("\n");
}
printf("\nThe second matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]=rand()%10);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
}
break;

case 3:

srand(time(NULL));
printf("\nYou are going to perform the matrix calculations with the following matrices");
printf("\nThe first matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]=rand()%10);
}
printf("\n");
}
printf("\nThe second matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]=rand()%10);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=0;
for(k=0;k<3;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
break;

default:
printf("\nEnter correct choice\n");
break;
}}
else
{
printf("\nEnter correct choice\n");
goto yyy;
}
sss:
printf("\nEnter 0 after you manually finished the calculation\n");
scanf("%d",&zer);
if(zer==0)
{
end=time(NULL);
t1=time(NULL);
}
else
{
printf("\nEnter correct choice\n");
goto sss;
}
sssss:
printf("\nEnter 0 to know the time you have taken\n");
scanf("%d",&choice1);
if(choice1==0)
{
sec=difftime(end,start);
if(sec>60)
{
printf("\nMinutes you took was %d\n",sec/60);
}
else if(sec>3600)
{
printf("\nHours you took was %d\n",sec/3600);
}
else
{
printf("\nSecond you took was %d\n",sec);
}
local1=localtime(&t1);
printf("\nYou have the completed the calculation on %d/%d/%d at %d:%d:%d\n",local1->tm_year+1900,local1->tm_mon+1,local1->tm_mday,local1->tm_hour,local1->tm_min,local1->tm_sec);
goto aaa;
}
else
{
printf("\nEnter correct choice\n");
goto sssss;
}
aaa:
aaaaa:
printf("\nEnter 0 to continue\n");
scanf("%d",&choice2);
if(choice2==0)
{
printf("\nEnter the elements of the resultant matrix in row wise\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&d[i][j]);
}
}
printf("\nThe resultant matrix you have entered is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",d[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(c[i][j]==d[i][j])
{
flag=1;
}} }
if(flag==1)
{
printf("\nThe resultant matrix you have entered is correct\n");
if(sec<120)
{
printf("\nCongrats!You are very quick!! You have mastered the matrix calculations\n");
}
else if(sec>3600)
{
printf("\nCongrats!You should have a little more practise in matrix calculations\n");
}
else
{
printf("\nCongrats!You are too slow.You have to practise more in matrix calculations\n");
}}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(c[i][j]!=d[i][j])
{
  flag1=1;
}}}
if(flag1==1)
{
printf("\nThe resultant matrix you have entered is wrong\n");
}}
else
{
 printf("\nEnter correct choice\n");
 goto aaaaa;
}
getch();
}












 
