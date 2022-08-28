#include<stdio.h>
int main()
{
	char a;
	int b,c,d,e,A,B,f,g,h,i,j,k,l,m,n,inv,o,p,q,r,s,t,C,D,E;
	float O,P,Q,R,dtr,F,G,H,I,J,K,L,M,N;
	
	printf("Choose the matrix order which reverse you want to calculate :");
	printf("\n (A) 2X2\n");
	printf(" (B) 3X3\n");
    printf("Enter A or B :");
    scanf("%c",&a);
    
    switch(a)
    {
    	case'A':
    		
    			printf("Enter the 1st row 1st column matrix number :");
    			scanf("%d",&b);
    			printf("Enter the 1st row 2nd column matrix number :");
    			scanf("%d",&c);
    			printf("Enter the 2nt row 1st column matrix number :");
    			scanf("%d",&d);
    			printf("Enter the 2nd row 2nd column matrix number :");
    			scanf("%d",&e);
    			
    			printf("\nYour matrix is :\n");
    			printf("\t%d\t%d\n\t%d\t%d",b,c,d,e);
    			
    			dtr = (b*e)-(d*c);
    			
    			printf("\nThe determinat of the matrix is =%f",dtr);
    			
    			 if(dtr!=0)
    			 {
    			    k=b;
					b=e;
					l=d;
					d=-c;
					c=-l;
    				e=k;
    				
    				printf("\n\nCofactor of this matrix is =\n\t%d\t%d\n\t%d\t%d",b,c,d,e);
    				
    				m=d;
    				d=c;
    				c=m;
    				   				
    				
					printf("\n\nAdj of this matrix is =\n\t%d\t%d\n\t%d\t%d",b,c,d,e);
    				 
    				 
    				O=b/dtr;
    				P=c/dtr;
    				Q=d/dtr;
    				R=e/dtr;
    				
    				printf("\nThe inverse of the matrix is:\n\t%f\t%f\n\t%f\t%f",O,P,Q,R);
    				
			     }
				 else
				 {
					printf("\nThe Determinant of the matrix is = 0 thats why it is a singular matrix hence inverse of these matrix is not possible");
				 }
    			
    			
    			break;
					
    	case'B':
    		    printf("Enter the 1st row 1st column matrix number :");
    			scanf("%d",&b);
    			printf("Enter the 1st row 2nd column matrix number :");
    			scanf("%d",&c);
    			printf("Enter the 1st row 3rd column matrix number :");
    			scanf("%d",&f);
    			printf("Enter the 2nd row 1st column matrix number :");
    			scanf("%d",&d);
    			printf("Enter the 2nd row 2nd column matrix number :");
    			scanf("%d",&e);
    			printf("Enter the 2nd row 3rd column matrix number :");
    			scanf("%d",&g);
    			printf("Enter the 3rd row 1st column matrix number :");
    			scanf("%d",&h);
    			printf("Enter the 3rd row 2nd column matrix number :");
    			scanf("%d",&i);
    			printf("Enter the 3rd row 3rd column matrix number :");
    			scanf("%d",&j);
    			
    			printf("\nYour matrix is :\n");
    			printf("\t%d\t%d\t%d\n\t%d\t%d\t%d\n\t%d\t%d\t%d",b,c,f,d,e,g,h,i,j);
    			
    			dtr = (b*((e*j)-(i*g)))-(c*((d*j)-(h*g)))+(f*((d*i)-(h*e)));
    			
    			printf("\nThe determinat of the matrix is =%f",dtr);
    			 
    			 if(dtr!=0)
    			  {
    			 	
    			 	l=b;
    			 	b=((e*j)-(i*g));
    			 	m=c;
    			 	c=-((d*j)-(h*g));
    			 	n=f;
    			 	f=((d*i)-(h*e));
    			 	o=d;
    			 	d=-((m*j)-(i*n));
    			 	p=e;
    			 	e=((l*j)-(h*n));
    			 	q=g;
    			 	g=-((l*i)-(h*m));
    			 	r=h;
    			 	h=((m*q)-(p*n));
    			 	s=i;
    			 	i=-((l*q)-(o*n));
    			 	j=((l*p)-(o*m));
    			 	
    			 	printf("\n\nCoefficient of the matrix is =\n\t%d\t%d\t%d\n\t%d\t%d\t%d\n\t%d\t%d\t%d",b,c,f,d,e,g,h,i,j);
    			 	
    			 	C=c;
    			 	c=d;
    			 	D=f;
    			 	f=h;
    			 	d=C;
    			 	E=g;
    			 	g=i;
    			 	h=D;
    			 	i=E;
    			 	
    			 	printf("\nAdjoint of the matrix is =\n\t%d\t%d\t%d\n\t%d\t%d\t%d\n\t%d\t%d\t%d",b,c,f,d,e,g,h,i,j);
    			 	
    			 	F=b/dtr;
    			 	G=c/dtr;
    			 	H=f/dtr;
    			 	I=d/dtr;
				    J=e/dtr;
    			 	K=g/dtr;
    			 	L=h/dtr;
    			 	M=i/dtr;
    			 	N=j/dtr;
    			 	
    			 	printf("\nThe inverse of the matrix is =\n\t%f\t%f\t%f\n\t%f\t%f\t%f\n\t%f\t%f\t%f",F,G,H,I,J,K,L,M,N);
    			 	
				  }
    			
    			  else
				 {
					printf("\nThe Determinant of the matrix is = 0 thats why it is a singular matrix hence inverse of these matrix is not possible");
				 }
    			
    			
    			break;	
        default:printf("Wrong Entry please enter A or B");
		       
	}
	
return 0;	
}