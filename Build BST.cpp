#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

class tnode{
public:
    int data;
    tnode* left;
    tnode* right;
};

tnode* newNode(int data);

tnode* newNode(int data)
{
    tnode* node = new tnode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

tnode* solve(int a[],int s,int l)
{
    if(s > l)
    {
        return NULL;
    }

    int mid = (s+l)/2;
    tnode *root = newNode(a[mid]);

    root->left = solve(a,s,mid-1);

    root->right = solve(a,mid+1,l);

    return root;
}

void preorder(tnode *node)
{
    if(node == NULL)
    {
        return;
    }

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);

}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        tnode *root = solve(a,0,n-1);
        preorder(root);
        cout << endl;
    }
}
