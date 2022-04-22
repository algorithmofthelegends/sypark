using System;
using System.Collections.Generic;
namespace Algo2
{
    class Algo_2839
    {

        static void Main(string[] args)
        {

            int N = int.Parse(Console.ReadLine());
            List<int> result = new List<int>();

            int nMin = 9999999;

            int temp = N / 5;

            for(int i = 0; i < temp+1; i++)
            {
                int a, b,c;
                a = i;
                b = (N - (a*5)) / 3;
                c = (N - (a*5)) % 3;
                if (c == 0)
                    result.Add(a + b);
                else
                    result.Add(-1);



            }


            for (int i = 0; i < result.Count; i++)
            {
                if (result[i] != -1)
                {
                    if (result[i] < nMin)
                    {
                        nMin = result[i];
                    }
                }
            }
            if (nMin == 9999999)
                nMin = -1;
            Console.WriteLine(nMin);

        }


    }
}