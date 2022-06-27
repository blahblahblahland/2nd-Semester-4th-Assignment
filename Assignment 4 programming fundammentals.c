#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1,s2;
	printf("Enter the size of first array : ");
	scanf("%d",&s1);
	int ar1[s1];
	printf("Enter elements in first array : ");
	for (int i=0;i<s1;i++)
	{scanf("%d",&ar1[i]);
	}
	printf("\n\nEnter the size of second array : ");
	scanf("%d",&s2);
	int ar2[s2];
	printf("Enter elements in second array : ");
	for(int j=0;j<s2;j++)
	{scanf("%d",&ar2[j]);
	}
	printf("\n\n");
	int s3=s1+s2;
	int ar3[s3];
	int counter=0;
	for(int f=0;f<s1;f++)
	{ar3[f]=ar1[f];
	counter++;
	}
	for(int g=0;g<s2;g++)
	{ar3[counter]=ar2[g];
	counter++;
	}
	int temp;
	for(int h=0;h<s3-1;h++)
	{ 	
	for(int k=0;k<s3-1;k++)
	{if(ar3[k]>ar3[k+1])
	{temp=ar3[k];
	ar3[k]=ar3[k+1];
	ar3[k+1]=temp;
	}
	}
	}
	printf("Array merged in ascending order : ");
	for(int o=0;o<(s3);o++)
	{
	printf("  %d",ar3[o]);
	}
	
	return 0;
}