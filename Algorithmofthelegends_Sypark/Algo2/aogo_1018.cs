using System;


namespace Algo2
{

    class Algo_1018
    {

        static void Main(string[] args)
        {

            string s = Console.ReadLine();
            string[] ss = s.Split();


            int cntW = 0;
            int cntB = 0;
            int nMin = 99999999;

            int N = int.Parse(ss[0]);
            int M = int.Parse(ss[1]);
            string[] Input = new string[N];

            for (int i = 0; i < N; i++)
            {
                Input[i] = Console.ReadLine();
            }

            for (int i = 0; i < N - 7; i++)
            {

                for (int j = 0; j < M - 7; j++)
                {
                    cntW = 0;
                    cntB = 0;
                    for (int k = i; k < i + 8; k++)
                    {
                        for (int p = j; p < j + 8; p++)
                        {

                            if ((k + p) % 2 == 0)
                            {
                                if (Input[k][p] != 'W')
                                    cntW++;
                                else
                                    cntB++;
                            }
                            else
                            {
                                if (Input[k][p] != 'B')
                                    cntW++;
                                else
                                    cntB++;

                            }

                        }


                    }

                    int nMinTemp = Math.Min(cntW, cntB);
                    if (nMinTemp < nMin)
                        nMin = nMinTemp;


                }

            }

            Console.WriteLine(nMin);




        }

    }


}