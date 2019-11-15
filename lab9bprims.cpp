#include <bits/stdc++.h> 
using namespace std;  
#define V 5 

int minKey(int key[], bool mstSet[]) 
{  
	int min = INT_MAX, min_index; 

	for (int v = 0; v < V; v++) 
		if (mstSet[v] == false && key[v] < min) 
			min = key[v], min_index = v; 

	return min_index; 
}  
void printMST(int parent[], int graph[V][V]) 
{ 
	cout<<"Edge \t| Weight\n"; 
    cout<<"--------|--------\n";
	for (int i = 1; i < V; i++) 
		cout<<parent[i]<<" -> "<<i<<" \t| "<< graph[i][parent[i]]<<" \n"; 
} 
void primMST(int graph[V][V]) 
{  
	int parent[V]; 
	int key[V];  
	bool mstSet[V]; 
	for (int i = 0; i < V; i++) 
		key[i] = INT_MAX, mstSet[i] = false;  
	key[0] = 0; 
	parent[0] = -1;
	for (int count = 0; count < V - 1; count++) 
	{ 
		int u = minKey(key, mstSet); 
		mstSet[u] = true;
		for (int v = 0; v < V; v++) 
			if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) 
				parent[v] = u, key[v] = graph[u][v]; 
	} 
	printMST(parent, graph); 
} 
int main() 
{ 
	int graph[V][V];/* = { { 0, 2, 0, 6, 0 }, 
						{ 2, 0, 3, 8, 5 }, 
						{ 0, 3, 0, 0, 7 }, 
						{ 6, 8, 0, 0, 9 }, 
						{ 0, 5, 7, 9, 0 } }; */
    cout<<"Enter graph weights:\n";
    for(int i=0;i<V;i++)
    for(int j=0;j<V;j++)
    cin>>graph[i][j];

    cout<<"\nThe Given Graph:\n";
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cout<<graph[i][j]<<"\t";
        }
    cout<<"\n";
    }
    cout<<"\nPrim's Minimal Spanning tree solution:\n\n";
	primMST(graph); 

	return 0; 
} 
/*
OUTPUT:
Enter graph weights:
0 2 0 6 0
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 0
The Given Graph:
0       2       0       6       0
2       0       3       8       5
0       3       0       0       7
6       8       0       0       9
0       5       7       9       0
Prim's Minimal Spanning tree solution:
Edge    | Weight
--------|--------
0 -> 1  | 2
1 -> 2  | 3
0 -> 3  | 6
1 -> 4  | 5
*/
