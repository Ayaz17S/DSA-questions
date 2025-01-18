#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "Enter data" << endl;
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    root = new node(d);
    cout << "Enter left child of " << d << endl;
    root->left = buildtree(root->left);
    cout << "Enter right child of " << d << endl;
    root->right = buildtree(root->right);
    return root;
};

void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *f = q.front();
        if (f == NULL)
        {
            cout << endl;
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << f->data << " ";
            q.pop();
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    levelorder(root);
    return 0;
}