#include<stdio.h>
int main()
{
    int i,j;
	int X[4] = {0,1,0,-1};//便与转换行的方向
	int Y[4] = {1,0,-1,0};//便于转换列的方向
	int n,m,x1,y1,ji = 0;//ji表示第几个方向
	char ma[105][105],noww = 'B';//noww为我下一个要放的字母
	scanf("%d %d",&n,&m);
	x1 = 1;y1 = 1;ma[1][1] = 'A';//初始化
	for(i = 2;i <= m * n;i ++)
	{
		int x2 = x1 + X[ji],y2 = y1 + Y[ji];//用x2，y2表示我下一个要放的位置
		if(x2 < 1||x2 > n||y2 < 1||y2 > m||ma[x2][y2]) ji ++;
		//判断下一个放的位置是否合法
		if(ji == 4) ji = 0;
		//方向只有4种，轮回使用
		x1 = x1 + X[ji];y1 = y1 + Y[ji];
		ma[x1][y1] = noww;
		noww ++;
		//字符可以通过ASCII码进行加减操作
		if(noww > 'Z') noww = 'A';
		//字母只有26种，轮回使用
	}
	for(i = 1;i <= n;i ++)
	{
		for(j = 1;j <= m;j ++)
			printf(" %c",ma[i][j]);
		puts("");
	}
}
