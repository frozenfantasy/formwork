#include <bits/stdc++.h>//Spfa-BFS版模板(AC)
using namespace std;//-   //17.11.8
int head[10010],to[500010],nxt[500010],ww[500010];
int dis[10010],que[1000010];
bool inq[10010];
int R=0,n,m,s;

void MEMSET_INF()
{
	for (int i=1;i<=n;++i)
		dis[i]=0x7fffffff;
}

void Spfa()
{
	int qhead=0,qtail=1;
	inq[que[1]=s]=1;dis[s]=0;

	while (qhead<qtail)
		for (int e=(inq[que[++qhead]]=0,head[que[qhead]]);e;e=nxt[e])
			if (dis[que[qhead]]+ww[e]<=dis[to[e]])
				if (dis[to[e]]=dis[que[qhead]]+ww[e],!inq[to[e]])
					inq[que[++qtail]=to[e]]=1;
}

void AddEdge(int u,int v,int w)
{to[++R]=v,ww[R]=w,nxt[R]=head[u],head[u]=R;}

int main()
{
	scanf("%d%d%d",&n,&m,&s);
	for (int i=1,u,v,w;i<=m;AddEdge(u,v,w),++i)
		scanf("%d%d%d",&u,&v,&w);
	MEMSET_INF();
	Spfa();
	for (int i=1;i<=n;++i)
		printf("%d ",dis[i]);
	return 0;
}
