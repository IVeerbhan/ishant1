#include<stdio.h>
int partition(int a[],int start,int end);
void qsort(int a[],int start,int end);
int main()
{
   	int n,i;
	 
    int a[]={45,65,1,12,32,458,4,124,9,0};
	int s;
	s=sizeof(a)/sizeof(int)-1;
    qsort(a,0,s);
    	printf("sorted data is\n");
    	for(i=0;i<=s;i++)
    	  printf("%d \n",a[i]);	
}
 void qsort(int a[],int start,int end)
{  int pi;
	if(start<end)
	{
		pi=partition(a,start,end);
		qsort(a,start,pi);
		qsort(a,pi+1,end);
	}	
}
int partition(int a[],int start,int end)
{ int i,pivot,j,temp;
	pivot=a[start];
	i=start;
	j=end;
	while(i<j)
	{
		while(i<j && a[i]<pivot) i++;
		while(i<j && a[j]>=pivot) j--;
		if(i<j)
		{temp=a[i];
		  a[i]=a[j];
		  a[j]=temp;
		}
	}
	
	if(a[j]<=pivot) return(j);
	else return(j-1);
}
