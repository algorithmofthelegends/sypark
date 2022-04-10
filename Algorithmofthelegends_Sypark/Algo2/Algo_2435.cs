using System;


namespace Algo2
{

    class Algo_2435
    {

        static void Main(string[] args)
        {

            int N, K;
            int []ResultSum;
            int[] temp;
            int max = -9999999;
            string s = Console.ReadLine();
            string[] ss = s.Split();


            N = int.Parse(ss[0]);
            K = int.Parse(ss[1]);

            ResultSum = new int[N - K + 1];
            System.Array.Clear(ResultSum, 0, ResultSum.Length);
            temp = new int[N];


            s = Console.ReadLine();
            ss = s.Split();

            for(int i = 0; i < N;i++)
            {
                temp[i] = int.Parse(ss[i]);

            }


            for (int i = 0; i < N - K + 1; i++)
            {
                for (int j = i; j < i+K; j++)
                {
                    ResultSum[i] += temp[j];

                }
                if (ResultSum[i] > max)
                    max = ResultSum[i];
            }

            Console.WriteLine(max);
        }


    }



}