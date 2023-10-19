#include <iostream>
#include <queue>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

int sumOfKthLevel(Node *root, int k)
{
    if (root == nullptr)
    {
        return 0;
    }

    queue<Node *> q;
    q.push(root);

    int sum = 0;
    int level = 0;
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();

            if (level == k)
            {
                sum += node->data;
            }

            if (node->left != nullptr)
            {
                q.push(node->left);
            }

            if (node->right != nullptr)
            {
                q.push(node->right);
            }
        }

        level++;
    }

    return sum;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int sum = sumOfKthLevel(root, 2);

    cout << "Sum of the nodes at the 2nd level: " << sum << endl;

    return 0;
}
