using System;
using System.Collections;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassTest1
{
	internal class Program
	{
		static void Main(string[] args)
		{
			Box box = new Box();
			Console.WriteLine($"BOX W:{ box.Width} H:{ box.Height} A:{ box.Area}");
			Console.WriteLine();

			Console.WriteLine("Enter W : ");
			int w = int.Parse( Console.ReadLine() );
			Console.WriteLine("Enter H : ");
			int h = int.Parse( Console.ReadLine() ) ;

            Box box2 = new Box(w,h);
			Console.WriteLine($"BOX W:{box2.Width} H:{box2.Height} A:{box2.Area}");
			Console.WriteLine();

			Console.Clear();
			Console.WriteLine("Enter New W : ");
			box2.Width = int.Parse( Console.ReadLine() );
			Console.WriteLine("Enter New H : ");
			box2.Height = int.Parse( Console.ReadLine() );
			Console.WriteLine($"BOX New W:{box2.Width} H:{box2.Height} A:{box2.Area}");

        }
	}
}
