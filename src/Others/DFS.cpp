//create a graph, add nodes and find shortest path. 
#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef struct{
    char label;
    bool visited;
}stVertex;

typedef struct{
    char source;
    char destination;
    int weight;
}stEdge;

class Graph{
    private:
        vector<stVertex> vertices;
        vector<stEdge> edges;
        int shortestDist;
        void DFSUtil(char curr)
        {
            // Find the vertex
            for(auto& it: vertices)
            {
                if(it.label == curr)
                {
                    if(it.visited) break; //Already visited
                    it.visited = true; //Mark current as visited
                    cout << curr << " ";

                    //Explore adjacent vertices
                    for(auto& edge: edges)
                    {
                        if(edge.source == curr){
                            DFSUtil(edge.destination);
                        }
                    }
                }
            }

        }
    public:
        Graph() { shortestDist = 0; }; 
        void add_vertices(stVertex vtx) { vertices.push_back(vtx); };
        void add_edges(stEdge edg) { edges.push_back(edg); };
        void resetVisited()
        {
            for(auto& it : vertices)
            {
                it.visited = false;
            }
        }
        void DFS(char start) {
            resetVisited();
            DFSUtil(start);
        };
};

// MyClass(int a, int b) : x(a), y(b), vec(10) {}

int main()
{
    Graph graph;

/* manual input for vertices */
    vector<stVertex> st__vertex = {
        {'A', false}, //source vertex
        {'B', false},
        {'C', false},
        {'D', false},
        {'E', false},
        {'F', false},
        {'G', false},
        {'H', false},
        {'I', false}, //exit vertex
    };

    for(auto& it1: st__vertex)
    {
        graph.add_vertices(it1);
    }

/* manual input for edges */
    vector<stEdge> st__edges = {
        {'A', 'C', 2},
        {'A', 'B', 4},
        {'A', 'E', 4},
        {'C', 'F', 2},
        {'B', 'D', 10},
        {'E', 'D', 1},
        {'C', 'G', 6},
        {'E', 'H', 7},
        {'G', 'I', 1},
        {'F', 'I', 3},
        {'E', 'I', 9}
    };

    for(auto& it : st__edges)
    {
        graph.add_edges(it);
    }
    
    graph.DFS('A');
    cout << "HI";
    
    return 0;
}