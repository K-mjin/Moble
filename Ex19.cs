using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    internal class Ex19
    {
        static void Main(string[] args)
        {
            List<string> rivers = new List<string>()
            {
                "signals",
                "math",
                "express",
                "electro",
                "photonics"
            };

            rivers.Remove("math");

            List<string> range = rivers.GetRange(0, 3);

            foreach (string river in range)
            {
                Console.WriteLine(river);
            }
        }
    }
}
