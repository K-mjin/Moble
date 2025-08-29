using System;

namespace ClassTest1
{
	internal class Box
	{
		private int width;
		private int height;

		public Box()
		{
			this.width = 0;
			this.height = 0;
		}

		public Box(int width, int height)
		{
			this.width = width;
			this.height = height;
		}

		public int Width
		{
			get { return width; }
			set
			{
				if (value > 0)
					this.width = value;
				else
					Console.WriteLine("Value must be greater than 0\n");
			}
		}

        public int Height
        {
            get { return height; }
            set
            {
                if (value > 0)
                    this.height = value;
                else
                    Console.WriteLine("Value must be greater than 0\n");
            }
        }

		public int Area
		{
			get { return this.width * this.height; }
		}
    }

}
