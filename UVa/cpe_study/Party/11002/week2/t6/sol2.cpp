#include <bits/stdc++.h>
using namespace std;

const int INF=0x3f3f3f3f;

const int MAXN= 100 + 5 ;

int speed[MAXN],floors[MAXN];//输入数据，
int w[MAXN][MAXN],d[MAXN];//w是各点的权值 d是0到任意点的路径
bool vis[MAXN];//vis是是否走过
int n,k,num;

void buildG(int ss)
{
    for (int i=0; i<num; i++)
    {
        for (int j=i+1; j<num; j++)
        {

            //通过楼之差乘时间，求权值，取最短
            int dis=abs(floors[i]-floors[j])*speed[ss];

            //因为是双向的，所以如此建图
            if (dis<w[floors[i]][floors[j]])
                w[floors[i]][floors[j]]=w[floors[j]][floors[i]]=dis;

        }
    }

}


//dij算法
void dijk()
{
    memset(vis,0,sizeof(vis));

    for (int i=0; i<100; i++)
    {
        d[i]=i==0?0:INF;
    }


    for (int i=0; i<100; i++)
    {
        int x,m=INF;
        for(int y=0; y<100; y++)
        {
            if (!vis[y]&&d[y]<m)
            {
                m=d[x=y];
            }
        }

        vis[x]=true;

        for (int y=0; y<100; y++)
        {
            if (d[y]>d[x]+w[x][y]+60)
            {
                d[y]=d[x]+w[x][y]+60;
            }
        }


    }
    if (d[k]==INF)
    {
        printf("IMPOSSIBLE\n");
    }
    else
    {
        if (k==0)
            puts("0");
        else
            printf("%d\n",d[k]-60);
    }

}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifdef DEBUG
		freopen("p.in", "r", stdin);
		freopen("p.out", "w", stdout);
	#endif
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(w,INF,sizeof(w));
        for (int i=0; i<n; i++)
        {
            scanf("%d",&speed[i]);
        }

        for (int i=0; i<n; i++)
        {
            num=0;
            
            //注意输入，这样处理很好，要借鉴
            while(true)
            {
                scanf("%d",&floors[num++]);
                if (getchar()=='\n')
                    break;
            }
            buildG(i);
        }
        dijk();
    }

    return 0;
}