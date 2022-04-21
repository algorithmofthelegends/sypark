using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algo2
{
    class Algo_1240
    {

        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            string[] input = s.Split();
            int N = int.Parse(input[0]);
            int M = int.Parse(input[1]);

            /*List<List<int>> list = new List<List<int>>()*/;
            List<int>[] Node= new List<int>[1001];

            bool[]visited = new bool[1001];
            int[,] node_weight = new int[1001,1001];

            List<int> result = new List<int>();
            System.Array.Clear(node_weight, 0, node_weight.Length);
            System.Array.Clear(visited, 0, visited.Length);
 
            
            for(int i = 0;i < 1001; i++)
            {
                Node[i] = new List<int>();
            }

            for (int i = 0; i < N - 1; i++)
            {
                string Tree = Console.ReadLine();
                string[] value = Tree.Split();
                int v1 = int.Parse(value[0]);
                int v2 = int.Parse(value[1]);
                int weight = int.Parse(value[2]);

                Node[v1].Add(v2);
                Node[v2].Add(v1);
                node_weight[v1,v2] = weight;
                node_weight[v2, v1] = weight;

            }

            for (int i = 0; i < M; i++)
            {
                System.Array.Clear(visited, 0, visited.Length);
                string Input = Console.ReadLine();
                string[] value = Input.Split();
            
                int start = int.Parse(value[0]);
                int end =   int.Parse(value[1]);
                Queue<(int, int)> q = new Queue<(int, int)>();
            
            
                q.Enqueue((start, 0));
                visited[start] = true;
            
                while (q.Count > 0)
                {
                    var cur = q.Dequeue();
                    int x = cur.Item1;
                    int weight = cur.Item2;
            
                    if (x == end)
                        result.Add(weight);
            
            
            
                    for (int j = 0; j < Node[x].Count(); j++)
                    {
                        int y = Node[x][j];
                        if (visited[y] == false)
                        {
                            q.Enqueue((y, weight + node_weight[x, y]));
                            visited[y] = true;
                        }
            
                    }
            
                }
            }

            for (int i = 0; i < result.Count(); i++)
                Console.WriteLine(result[i]);


         }

    }
}
