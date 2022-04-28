using System;
using System.Collections.Generic;
using System.Linq;

namespace Algo2
{


    class Algo_14002
    {
        
        static void Main(string[] args)
        {

            int N = int.Parse(Console.ReadLine());
            int max = 0;
            int index = -1;
            int cnt = 0;
  
 
            int[] A = new int[N];
            int[] dp = new int[N];
            int[] temp = new int[N];
            int[] result = new int[N];
            int tempMax = 0;
            String input = Console.ReadLine();
            String[] input_s = input.Split();
            for(int i = 0; i < N; i++)
            {
                A[i] = int.Parse(input_s[i]);
                dp[i] = 0;
                result[i] = -1;
            }

            for (int i =0; i < N;i++)
            {
               

                for (int j = 0; j < i;j++)
                {
                    if (dp[i] < dp[j] + 1 && A[i] > A[j])
                    {
                        dp[i] = dp[j] + 1;

                    }
                }
                if(dp[i]>max)
                {
                    max = dp[i];

                }
              
            }

            max = dp.Max();
            index = dp.ToList().IndexOf(max);


            for (int i = index; i >= 0; i--)
            {
                if (dp[i] == max)
                {
                    result[i] = A[i];
                    max--;
                    cnt++;
                }


            }
            Console.WriteLine(cnt);
            for(int i = 0; i < N; i++)
            {
                if(result[i] != -1)
                {
                    Console.Write(result[i] + " ");
                }

            }

        }






    }






}