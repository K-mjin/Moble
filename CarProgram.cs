using System;
using System.Drawing;

namespace ClassTest1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CarPicture carpicture = new CarPicture();
            //carpicture.car_name
            //carpicture.car_Width
            Console.WriteLine("속성을 지정해 초기화되어 있는 첫번째 생성자에서의 출력");
            Console.WriteLine("{0} : {1}", "자동차의 길이", carpicture.Width);
            Console.WriteLine("자동차의 높이 : " + carpicture.Height);
            Console.WriteLine("자동차의 이름 : " + carpicture.car_name);
            Console.WriteLine("자동차의 색깔 : " + carpicture.color);
            Console.WriteLine();
            Console.WriteLine("set을 통한 속성에 값 입력");
            carpicture.Width = 300;
            Console.WriteLine("{0} : {1}", "자동차의 길이2", carpicture.Width);
            carpicture.Height = 250;
            Console.WriteLine("자동차의 높이2 : " + carpicture.Height);
            Console.WriteLine();
            Console.WriteLine("4개의 파라미터를 갖는 생성자의 필드 출력");
            CarPicture carpicture2 = new CarPicture(210, 160, "Santape", Color.Brown);
            Console.WriteLine("{0} : {1}", "파라미터를 갖는 생성자의 자동차의 길이", carpicture2.Width);
            Console.WriteLine("파라미터를 갖는 생성자의 자동차의 높이 : " + carpicture2.Height);
            Console.WriteLine("파라미터를 갖는 생성자의 자동차의 높이 : " + carpicture2.car_name);
            Console.WriteLine("파라미터를 갖는 생성자의 자동차의 높이 : " + carpicture2.color);
            Console.WriteLine();
            Console.WriteLine("계산하는 속성 추가");
            Console.WriteLine("자동차의 면적 : " + carpicture2.area);
            Console.WriteLine();
            //Console.WriteLine("메서드 호출");
            Console.WriteLine();
            Console.WriteLine("이벤트 호출");
            carpicture2.ProcessStarted += Carpicture2_ProcessStarted1;
            carpicture2.ProcessEnded += Carpicture2_ProcessEnded;
            carpicture2.MakeCar();
        }
        private static void Carpicture2_ProcessStarted1(object sender, EventArgs e)
        {
            Console.WriteLine("Process Started");
        }

        private static void Carpicture2_ProcessEnded(object sender, EventArgs e)
        {
            Console.WriteLine("Process Ended");
        }

       
    }
}
