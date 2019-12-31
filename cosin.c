#include<stdio.h>
#include<math.h>
main()
{ 
 int i,j,m,n,p=0,k,sum=0;
 float s=0.0;
	printf("please enter no.of vectors and no.of tuples ");
	scanf("%d%d",&m,&n);
	int a[m][n],b[n][m],mult[m][m];
	mult[m][m]=0;
	b[n][m]=0;
	float mod[m],cos[m][m];	
		for(i=0;i<m;i++)
		{printf("please  enter the element for %d element\n",p=i+1);
			for(j=0;j<n;j++)
			{
						scanf("%d",&a[i][j]);
			}
		}
		printf("given vector in matrix form\n");
			for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
	    }
		/*tranpose of the given matrix*/ 
	    	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
			 b[j][i]=a[i][j];
	        }
	    }
	    /*module of the given vectors*/
	    printf("\n modulo of each vector\n");
	    for(i=0;i<m;i++)
	    { p=0;
	    	for(j=0;j<n;j++)
	    	{
	    		p=p+a[i][j]*a[i][j];
			}
			mod[i]=sqrt(p);
			printf("%f\t",mod[i]);
		}
		printf("\n");
		for(i=0;i<m;i++)
		 	{
		 		for(j=0;j<m;j++)
		 		{
				 for(k=0;k<n;k++)
		 		{
		 			sum=sum+a[i][k]*b[k][j];
				 }
				 mult[i][j]=sum;
				 sum=0;
			    }
			 }
			 
			 for(i=0;i<m;i++)
        {
	        for(j=0;j<m;j++) 
	     { 
	             printf("%d\t",mult[i][j]);
	      }
	          printf("\n");
         }
         /*cosine matrix */
         printf("cosin matrix is given\n");
         	 for(i=0;i<m;i++)
        {
	        for(j=0;j<m;j++) 
	     { 
	        cos[i][j]=mult[i][j]/(mod[i]*mod[j]);
	      }
         }
         	 for(i=0;i<m;i++)
        {
	        for(j=0;j<m;j++) 
	     { 
	             printf("%f\t",cos[i][j]);
	      }
	          printf("\n");
         }
}  
