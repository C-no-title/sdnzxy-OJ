#include <stdio.h>
void spin(int a[][50],int n,int m); //ע�ⶨ���ά����ʱ���ǲ���ʡ�Եģ��˺��������Ѿ���˳ʱ����ת90��
int main()
{
	int i,j,k;
	int n;
	int mark; //mark������˵����;
	int flag; //flag������˵����;
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
		for( k=1;k<=4;k++)  //��ת�ж��ĴξͿ����ˣ������ת360������ȣ��Ͳ����������
		{
			mark=1;
			for( i=0;i<n;i++)
			{	for( j=0;j<n;j++)
				if(a[i][j]!=b[i][j])
				{
					mark=0;
				}
				if(mark==0)
				break;  //������mark��������ѭ��������mark�������ifֱ�Ӽ�breakҲ���ԣ�����ѭ�����������࣬�������ٶ����ִ��
			}
			if(i>=n)
			{
				flag=1; //��������ѭ�������������ˣ�˵������a��ת����b����ˣ���flag=1��ֱ��������ѭ�������ˣ�����û��Ҫ�����ˡ�
				break;
			}
			spin(a,n,n);
		}
		if(flag==1)
		printf("YES\n");
		else
		printf("NO\n"); //��flag��ֵ�жϾ���a����תһ���ǶȺ��Ƿ������b���
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
