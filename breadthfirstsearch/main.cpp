#include "GraphType.h"
#include <iostream>

using namespace std;

template<class VertexType>
void BreadthFirstSearch(GraphType<VertexType> *graph,
     VertexType startVertex, VertexType endVertex)
// Assumption: VertexType is a type for which the “==“ and
//             "<<" operators are defined.
{
  using namespace std;
  QueType<VertexType> queue;
  QueType<VertexType> vertexQ;

  bool found = false;
  VertexType vertex;
  VertexType item;

  graph->ClearMarks();
  queue.Enqueue(startVertex);

  do
  {
    queue.Dequeue(vertex);

    if (vertex == endVertex)
    {
      cout  << vertex;
      found = true;
    }
    else
    {
      if (!graph->IsMarked(vertex))
      {
        graph->MarkVertex(vertex);
        cout  << vertex;
        graph->GetToVertices(vertex, vertexQ);

        while (!vertexQ.IsEmpty())
        {
          vertexQ.Dequeue(item);
          if (!graph->IsMarked(item))
            queue.Enqueue(item);
        }
      }
    }
  } while (!queue.IsEmpty() && !found);
  if (!found)
  cout << "Path not found." << endl;
}

int main() {
    GraphType<char> g(50);
    g.AddVertex('A');
    g.AddVertex('B');
    g.AddVertex('C');
    g.AddEdge('A', 'B', 1);
    g.AddEdge('B', 'C', 1);
    BreadthFirstSearch(&g,'A', 'C');
    g.ClearMarks();
    
cout<<endl;
    BreadthFirstSearch(&g,'A', 'B');

  

   
    return 0;
}
