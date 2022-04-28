using System;
using System.Collections.Generic;



namespace Algo2
{
    class Algo_1260
    {

        bool[] visited;
        int[,] graph;
        List<int>[] Node;
        void BFS(int start)
        {
            Queue<int> q = new Queue<int>();
            q.Enqueue(start);
            visited[start] = true;
            while (q.Count > 0)
            {
                int x = q.Dequeue();
                Console.Write(x + " ");
                for (int i = 0; i < graph.GetLength(0); i++)
                {
                    int y = i;
                    if (visited[y] == false && graph[x, y] != 0)
                    {
                        q.Enqueue(y);
                        visited[y] = true;
                    }
                }
            }
       }
        void DFS(int start)
        {
            Console.Write(start + " ");
            visited[start] = true;
            for (int i = 0; i < graph.GetLength(0); i++)
            {
                if (visited[i] == false && graph[start, i] != 0)
                    DFS(i);
            }

            //Stack<int> s = new Stack<int>();
            //s.Push(start);
            //visited[start] = true;
            //Console.Write(start + " ");
            ////int x = start;
            //while (s.Count > 0)
            //{
            //    int x = s.Pop();
            //    Console.Write(x + " ");
            //    for (int i =0; i <Node[x].Count; i++)
            //    {
            //        int y = i;
            //        if (visited[y] == false && Node[x][y] != 0)
            //        {
            //            s.Push(y);
            //            visited[y] = true;
            //        }
            //    }
            //}
        }
        static void Main(string[] args)
        {
            Algo_1260 A = new Algo_1260();
            String input_s = Console.ReadLine();
            String[] input = input_s.Split();
            int N = int.Parse(input[0]);
            int M = int.Parse(input[1]);
            int v = int.Parse(input[2]);
            A.visited = new bool[N + 1];
            A.graph = new int[N + 1, N + 1];
            A.Node = new List<int>[N + 1];
            System.Array.Clear(A.visited, 0, A.visited.Length);
            System.Array.Clear(A.graph, 0, A.graph.Length);
            for (int i = 0; i < N + 1; i++)
            {
                A.Node[i] = new List<int>();
            }
            for (int i = 0; i < M; i++)
            {
                String input_node = Console.ReadLine();
                String[] inpu = input_node.Split();
                int v1 = int.Parse(inpu[0]);
                int v2 = int.Parse(inpu[1]);
                 A.graph[v1, v2] = 1;
                A.graph[v2, v1] = 1;
                A.Node[v1].Add(v2);
                A.Node[v2].Add(v1);
            }
            for (int i = 0; i < N + 1; i++)
            {
                A.Node[i].Sort();
            }
            A.DFS(v);
            System.Array.Clear(A.visited, 0, A.visited.Length);
            Console.WriteLine("");
            A.BFS(v);


        }

    }

}

