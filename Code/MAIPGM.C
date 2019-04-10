#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"TYPES.c"
#include"ADDASS.C"
#include"ADDCOM.C"
#include"ADDID.C"
#include"ADDINV.C"
#include"CALADD.C"
#include"CALSUB.C"
#include"CALMUL.C"
#include"CALTRANS.C"
#include"DETER.C"
#include"TRANS1.C"
#include"TRANS2.C"
#include"TRANS3.C"
#include"MUL1.C"
#include"MUL2.C"
#include"MUL3.C"
#include"MUL4.C"
#include"INV.C"
#include"CHALLE.C"
int main()
{

 int ch,ch1,ch2,ch3,ch4,ch5,z,x,y;
 //clrscr();
 s:
 //clrscr();
 printf("\n\t\t\tMATRIX CALCULATOR\n");
 printf("\nMain menu\n1.Types of Matrix \n2.Properties of matrix \n3.Matrix Calculations \n4.Challenge \n5.Exit");
 printf("\n\nEnter your choice:\t");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:do
	 {
	 types();
	 printf("\nEnter 1 to continue with types or press any key to view the main menu:\t");
	 scanf("%d",&x);
	 }while(x==1);
	 if(x!=1)
	 {
	 goto s;
	 }
	 break;
  case 2:do
	 {
     //	 clrscr();
	printf("\n\tProperties of matrix\n");
	printf("\n1.Properties based on ADDITION \n2.Properties based on MULTIPLICATION \n3.Properties based on TRANSPOSE \n4.Exit");
	printf("\nEnter  your choice:\t");
	scanf("%d",&ch1);
	switch(ch1)
	{
	 case 1:
	 //clrscr();
	 printf("\nProperties based on ADDITION\n");
		printf("\n1.Commutative A+B=B+A \n2.Associative (A+B)+C=A+(B+C) \n3.Additive identity A+0=A \n4.Additive inverse A+B=0");
		printf("\nEnter your choice:\t");
		scanf("%d",&ch2);
		switch(ch2)
		{
		  case 1:   ////clrscr();
			    addcom();
			 break;
		  case 2: //clrscr();
			addass();
			break;
		  case 3: //clrscr();
			addid();
			break;
		  case 4: //clrscr();
			addinv();
			break;
		  default:
		       printf("\nInvalid choice");
		}
	       break;
	 case 2: //clrscr();
		printf("\nProperties based on MULTIPLICATION\n");
		printf("\n1.Associative A(BC)=(AB)C \n2.Distributive A(B+C)=AB+AC \n3.Distributive (A+B)C=AC+BC \n4.Multiplicative identity IA=AI=A\n");
		printf("\nEnter your choice:\t");
		scanf("%d",&ch3);
		switch(ch3)
		{
		  case 1: //clrscr();
			 mul1();
			 break;
		  case 2: //clrscr();
			mul2();
			break;
		  case 3://clrscr();
			mul3();
			break;
		  case 4://clrscr();
			mul4();
			break;
		  default:
		       printf("\nInvalid choice");
	       }
	       break;
	case 3://clrscr();
	       printf("\nProperties based on TRANSPOSE\n");
		printf("\n1.(A^T)^T = A \n2.(A+B)^T = A^T+B^T \n3.(AB)^T = B^T A^T \n");
		printf("\nEnter your choice:\t");
		scanf("%d",&ch4);
		switch(ch4)
		{
		  case 1: //clrscr();
			 trans1();
			 break;
		  case 2:
			  //clrscr();
			 trans2();
			break;
		  case 3: //clrscr();
			trans3();
			break;

		  default:
		       printf("\nInvalid choice");
	       }
	       break;
	 case 4:
		exit(0);
		break;
	 default:
		printf("\nInvalid choice\n");

       }
       printf("\nEnter 1 to continue with properties or press any key to view the main menu:\t");
	 scanf("%d",&x);
	 }while(x==1);
	 if(x!=1)
	 {
	 goto s;
	 }
	 break;
   case 3:do
   {       //clrscr();
	  printf("\n\t Matrix calculations\n");
	  printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Transpose of a matrix\n5.Determinant of a matrix \n6.Inverse of a matrix\n7.Exit\n");
	  printf("\nEnter your choice:\t");
	  scanf("%d",&ch5);
	  switch(ch5)
	  {
	   case 1:
		  caladd();
		   break;
	   case 2:
		  calsub();
		  break;
	   case 3:
		 calmul();
		 break;
	   case 4:
		 caltrans();
		 break;
	   case 5:
		  determinant1();
		 break;
	   case 6:
		 inverse();
		 break;
	   case 7:
		 exit(1);
		 break;
	   default:
		 printf("\nnnter valid choice\n");
	  }
	   printf("\nEnter 1 to continue with calculations or press any key to view the main menu:\t");
	 scanf("%d",&x);
	 }while(x==1);
	 if(x!=1)
	 {
	 goto s;
	 }
	break;
  case 4:do
	 {
	challenge();
	 printf("\nEnter 1 to continue with challenge or press any key to view the main menu:\t");
	 scanf("%d",&x);
	 }while(x==1);
	 if(x!=1)
	 {
	 goto s;
	 }

	break;
  case 5:
	exit(1);
  default:
	 printf("\nInvalid choice");

  }
  getch();
  return 0;
}




