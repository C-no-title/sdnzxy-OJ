#include<stdio.h>
int main()
{
    int i,j;
	int X[4] = {0,1,0,-1};//����ת���еķ���
	int Y[4] = {1,0,-1,0};//����ת���еķ���
	int n,m,x1,y1,ji = 0;//ji��ʾ�ڼ�������
	char ma[105][105],noww = 'B';//nowwΪ����һ��Ҫ�ŵ���ĸ
	scanf("%d %d",&n,&m);
	x1 = 1;y1 = 1;ma[1][1] = 'A';//��ʼ��
	for(i = 2;i <= m * n;i ++)
	{
		int x2 = x1 + X[ji],y2 = y1 + Y[ji];//��x2��y2��ʾ����һ��Ҫ�ŵ�λ��
		if(x2 < 1||x2 > n||y2 < 1||y2 > m||ma[x2][y2]) ji ++;
		//�ж���һ���ŵ�λ���Ƿ�Ϸ�
		if(ji == 4) ji = 0;
		//����ֻ��4�֣��ֻ�ʹ��
		x1 = x1 + X[ji];y1 = y1 + Y[ji];
		ma[x1][y1] = noww;
		noww ++;
		//�ַ�����ͨ��ASCII����мӼ�����
		if(noww > 'Z') noww = 'A';
		//��ĸֻ��26�֣��ֻ�ʹ��
	}
	for(i = 1;i <= n;i ++)
	{
		for(j = 1;j <= m;j ++)
			printf(" %c",ma[i][j]);
		puts("");
	}
}
