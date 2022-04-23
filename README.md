# Contests

Данный репозиторий содержит задачи по алгоритмам и структурам данных с 3 источников: [Leetcode](https://leetcode.com/), [Geeksforgeeks](https://practice.geeksforgeeks.org/) и [Sort Me](https://sort-me.org/). 

### Бинарный поиск

```c++
int binary_search(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size();
    int mid = 0;
    
    while(left < right)
    {
        mid = left + (right - left) >> 1;
        
        if(nums[mid] == target)
        {
            return mid;
        }
        
        if(nums[mid] > target)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    
    return -1;
}
```



### Обход дерева

![Виды обходов](traversals.png)

#### Рекурсивный DFS для бинарного дерева 

```c++
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

void visit(Node* cur)
{
    if(!cur) return;
    
    // preorder (обработка вершины)
    
    visit(cur->left);
    
    // inorder (обработка вершины)

    visit(cur->right);
    
    // postorder (обработка вершины)
}
```



Временная сложность: O(N), где N - число вершин в дереве

Пространственная сложность: O(N) - в худшем случае, если дерево несбалансированное и все вершины на одной "ветке", то в run-time стэке будет лежать все вершины. Для сбалансированного в среднем O(logN).

#### Итеративные DFS для бинарного дерева

```c++
void bintree_dfs(Node* root)
{
    stack<Node*> s;
	s.push(root);
	while(!s.empty())
    {
        auto v = s.top();
        s.pop();
        
        cout << v->data;
        
        if(v->left)
        {
            s.push(v->left);
        }
        if(v->right)
        {
            s.push(v->right);
        }
    }
}
```



#### Итеративные BFS для бинарного дерева

```c++
void bintree_bfs(Node* root)
{
    queue<Node*> q;
	q.push(root);
	while(!q.empty())
    {
        auto v = q.front();
        q.pop();
        
        cout << v->data;
        
        if(v->left)
        {
            q.push(v->left);
        }
        if(v->right)
        {
            q.push(v->right);
        }
    }
}
```





























