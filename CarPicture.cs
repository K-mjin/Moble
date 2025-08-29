using System;
using System.Diagnostics;
using System.Drawing;

namespace ClassTest1
{
    internal class CarPicture
    {
        private int car_width;
        private int car_height;
        public string car_name;
        public Color color;

        public CarPicture()
        {
            car_width = 200;
            car_height = 140;
            car_name = "casper";
            color = Color.DarkKhaki;
        }

        public int Width
        {
            get { return this.car_width; }
            set
            {
                if (value > 0)
                {
                    this.car_width = value;
                }
            }
        }

        public int Height
        {
            get { return this.car_height; }
            set
            {
                if (value > 0)
                {
                    this.car_height = value;
                }
            }
        }

        public CarPicture(int car_width, int car_height, string car_name, Color color)
        {
            this.car_width = car_width;
            this.car_height = car_height;
            this.car_name = car_name;
            this.color = color;
        }

        public int area
        {
            get { return car_width * car_height; }
        }

        public void MakeCar()
        {
            if(ProcessStarted != null)
            {
                ProcessStarted(this, EventArgs.Empty);
            }
            Step1();
            Step2();
            Step3();
            if(ProcessEnded != null)
            {
                ProcessEnded(this, EventArgs.Empty);
            }
        }

        public void Step1()
        {
            Console.WriteLine("Step #1");
        }

        public void Step2()
        {
            Console.WriteLine("Step #2");
        }

        public void Step3()
        {
            Console.WriteLine("Step #3");
        }

        public event EventHandler ProcessStarted;
        public event EventHandler ProcessEnded;
    }
}
