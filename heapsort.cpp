#include<stdio.h>
int k=1;
 void display(int b[],int i);

 
 void heapify(int a[],int b[],int size)
 {
 	int N=size/2,flag,temp;
 	   for(;N>0;N--)
 	 {      flag=0;   
	         if(2*N>size) continue;
 	   
		
		 else{
 	    	
			 if(a[N]>=a[2*N ])
 	        {
 	    		flag=1;
 	    		temp=a[N];
 	    		a[N]=a[2*N];
 	    		a[2*N]=temp;
 	    	}
 	    	    while(a[N]>=a[2*N+1]&& (2*N+1)<=size)
 	    	    {
 	    	    	flag=1;
 	    	      temp=a[N];
 	    		  a[N]=a[2*N + 1];
 	    		  a[2*N + 1]=temp;
 	    	    	
 	    	    }
 	    }
 	}
 	if(flag==0)
 	{
 		b[k]=a[1];
		 a[1]=a[size];
		 size--; k++;
 		if(size==1)
 		  { b[k]=a[size];
 		    display(b,k);}
 		else
 		heapify(a,b,size);
 		
 	}
 	else if(flag==1)
 	{
 		heapify(a,b,size);
 	}
}



 void display(int b[],int i)
{
	int j;
	printf("sorted array is : ");
	for(j=1;j<=i;j++)
	{ 
	 printf("%d ",b[j]);
	}
}
int main()
{   int s,i;int a[10],b[10];;
	printf("enter the number of elements(<=10)\n");
	scanf("%d",&s);			
	printf("enter data\n");
	for(i=1;i<=s;i++)
    {scanf("%d",&a[i]);}
	 heapify(a,b,s);
	 return 0;
}

