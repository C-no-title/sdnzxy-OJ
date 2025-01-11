#include <stdio.h>
void spin(int a[][50],int n,int m); //注意定义二维数组时列是不能省略的，此函数用来把矩阵顺时针旋转90度
int main()
{
	int i,j,k;
	int n;
	int mark; //mark在下面说明用途
	int flag; //flag在下面说明用途
	int a[50][50],b[50][50];
	while(scanf("%d",&n)!=EOF)
	{
		flag=0;
		for( i=0;i<n;i++)
			for( j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for( i=0;i<n;i++)
			for( j=0;j<n;j++)
				scanf("%d",&b[i][j]);
		for( k=1;k<=4;k++)  //旋转判断四次就可以了，如果旋转360还不相等，就不可能相等了
		{
			mark=1;
			for( i=0;i<n;i++)
			{	for( j=0;j<n;j++)
				if(a[i][j]!=b[i][j])
				{
					mark=0;
				}
				if(mark==0)
				break;  //这里用mark尽早跳出循环，不用mark在上面的if直接加break也可以，但是循环次数会增多，尽量减少多余的执行
			}
			if(i>=n)
			{
				flag=1; //如果上面的循环正常跳出来了，说明数组a旋转后与b相等了，让flag=1，直接跳出大循环就行了，后面没必要继续了。
				break;
			}
			spin(a,n,n);
		}
		if(flag==1)
		printf("YES\n");
		else
		printf("NO\n"); //用flag的值判断矩阵a在旋转一定角度后是否与矩阵b相等
	}
	return 0;
}
void spin(int a[][50],int n,int m)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n/2;j++)
		{
			temp=a[i][j];
			a[i][j]=a[i][n-1-j];
			a[i][n-1-j]=temp;
		}
	}
}
