#include<bits/stdc++.h>
using namespace std;

struct node
{
    int num,id;
    node *left,*right;
};
node *tree;
bool cmp(node a,node b)
{
    return a.num<b.num;
}
void input(int n)
{
    tree=new node[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&tree[i].num);
        tree[i].id=i;
        tree[i].left=tree[i].right=NULL;
    }
    sort(tree,tree+n,cmp);
}
node *marge(node *a,node *b)
{
	if(a==NULL||b==NULL)
		return (a!=NULL)?a:b;
	else if(a->id<b->id)
	{
		a->right=marge(a->right,b);
		return a;
	}
	else
	{
		b->left=marge(a,b->left);
		return b;
	}
}
node *build(int begin,int end)
{
	if(begin==end)
		return &tree[end];
	else
	{
		int mid=(begin+end)/2;
		node *left=build(begin,mid);
		node *right=build(mid+1,end);
		return marge(left,right);
	}
}

int main()
{
    
    return 0;
}
