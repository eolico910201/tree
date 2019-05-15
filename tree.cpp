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


int main()
{
    
    return 0;
}

