using System;


namespace Algo2
{

    class Algo_15668
    {

        static void Main(string[] args)
        {
            bool bResult = false;
            String Input = Console.ReadLine();
            int N = int.Parse(Input);
            int A;
            int B;
            int[] Temp = new int[10];
            int nCnt = 0;
         
            for(int i = 1; i < 987654; i++)
            {
                if (i > N) 
                    break;

                nCnt = 0;
                System.Array.Clear(Temp, 0, Temp.Length);
                A = i;
                B = N - A;
                bResult = true;


                while (A > 0)
                {
                    Temp[A % 10]++;
                    A = A / 10;

                }
                while (B > 0)
                {
                    Temp[B % 10]++;
                    B = B / 10;

                }
                for (int j = 0; j < 10; j++)
                {
                    if (Temp[j] > 1)
                    {
                        bResult = false;
                    }
                    else if (Temp[j] == 1)
                        nCnt++;
                }
                if (nCnt == 1)
                    bResult = false;

                if (bResult == true)
                {
                    int a, b;
                    a = i;
                    b = N - i;
                    Console.WriteLine(a + " + " + b);
                    break;
                }


            }
            if (bResult == false)
                Console.WriteLine("-1");


        }












      }


}