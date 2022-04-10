using System;


namespace Algo2
{
    class Algo_1076
    {
        static void Main(string[] args)
        {


            string[] Color = new string[10];
            long[] value = new long[3];
            long nResult = 0;
            Color[0] = "black";
            Color[1] = "brown";
            Color[2] = "red";
            Color[3] = "orange";
            Color[4] = "yellow";
            Color[5] = "green";
            Color[6] = "blue";
            Color[7] = "violet";
            Color[8] = "grey";
            Color[9] = "white";

            for (int i = 0; i < 3; i++)
            {

                string input = Console.ReadLine();
                for(int j = 0; j < Color.Length;j++)
                {
                    if(Color[j] == input)
                    {
                        value[i] = j;
                    }
                }
            }
            value[0] = value[0]*(long)Math.Pow(10, value[2]+1);
            value[1] = value[1]*(long)Math.Pow(10, value[2]);

            nResult = value[0] + value[1];

            Console.WriteLine(nResult);


        }





    }






}