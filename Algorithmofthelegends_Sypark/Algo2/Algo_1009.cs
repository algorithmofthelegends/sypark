using System;


namespace Algo2
{

    class Algo_1076
    {

        static void Main(string[] args)
        {

            int T;
            String Input = Console.ReadLine();
            T = int.Parse(Input);
            int[] temp = new int[T];
            int[] nResult = new int[T];
            for (int i = 0; i < T; i++)
            {
                string s = Console.ReadLine();
                string[] ss = s.Split();
                int a = int.Parse(ss[0]) % 10;
                int b = int.Parse(ss[1]) % 4;

                if (b % 4 == 0)
                    b = 4;

                int nTemp = (int)Math.Pow(a, b);
                nResult[i] = nTemp % 10;
                if (nResult[i] == 0)
                    nResult[i] = 10;

            }
            for (int i = 0; i < T; i++)
            {
                Console.WriteLine(nResult[i]);
            }


        }

    }


}