using System;
using System.ComponentModel;

namespace ch5
{
    // 접근 한정자 실습 1 : 데이터의 은닉과 캡슐화
    //class WaterHeater
    //{
    //    protected int temperature;

    //    public void setTemperature(int temperature) // 매개변수는 있고 반환형은 없는 메서드
    //    {
    //        if(temperature < 10 || 42 < temperature)
    //        {
    //            Console.WriteLine("10 ~ 42도 사이의 온도값을 입력하세요.");
    //            Console.WriteLine("물의 온도는 15도로 리셋됩니다.");
    //            this.temperature = 15;
    //            return;
    //        }
    //        this.temperature = temperature; // this가 붙으면 클래스 내의 멤버변수를 의미
    //    }
    //    public void turnOnWater()
    //    {
    //        Console.WriteLine($"Turn on water : {temperature}");
    //    }
    //}
    //class Program
    //{
    //    static void Main(string[] args)
    //    {
    //        WaterHeater heater = new WaterHeater(); // 생성자를 통해 인스턴스 생성( 클래스(WaterHeater)를 변수로 만들려면 생성자를 통해 new 연산자를 사용해서 변수 선언(생성자 이름과 클래스 이름은 같아야함) )
    //        int temp;
    //        for(int i = 0; i<3; i++)
    //        {
    //            Console.WriteLine("물의 온도를 입력하세요");
    //            temp = int.Parse(Console.ReadLine());
    //            heater.setTemperature(temp);    // 메서드 호출하면서 20을 전달
    //            heater.turnOnWater();
    //        }
    //        //heater.setTemperature(20);  // 메서드 호출하면서 20을 전달
    //        //heater.turnOnWater();

    //        //heater.setTemperature(10);
    //        //heater.turnOnWater();

    //        //heater.setTemperature(50);
    //        //heater.turnOnWater();
    //        //heater.setTemperature = 15;   // protected로 선언한 변수에 접근하기, 발생하는 에러체크
    //    }                                   // 외부에서 접근 불가함
    //}


    // 클래스의 형식
    // 글래스 개요 실습 4
    class Cat
    {
        public string Name; // 자료형 선언
        public string Color;

        public Cat()    // 1번 매개변수가 없는 생성자
        {
            Name = "";
            Color = "";
        }

        public Cat(string _Name, string _Color) // 2번 매개변수가 있는 생성자
        {
            Name = _Name;
            Color = _Color;
        }
        //public void meow()
        //{
        //    Console.WriteLine($"{Name} : 야옹");
        //}
    }

    internal class constructor
    {
        static void Main(string[] args)
        {                           // Cat의 첫번째 인스턴스 생성
            Cat kitty = new Cat();  // Cat의 객체를 생성
                                    // kitty는 Cat의 실체가 생성되어 인스턴스라고도 함
            kitty.Name = "키티";
            kitty.Color = "하얀색";
            Console.WriteLine($"{kitty.Name} : {kitty.Color}");
            Cat nabi = new Cat("나비","갈색");  // 2번 매개변수가 있는 생성자를 호출함, 매개변수를 전달
            Console.WriteLine($"{nabi.Name} : {nabi.Color}");

            //// Cat의 두번째 인스턴스 생성
            //Cat nero = new Cat();   // nero는 참조변수, new 연산자를 통해 생성
            //                        // 된 인스턴스(객체)의 주소를 저장
            //nero.Name = "네로";
            //nero.Color = "검은색";
            //nero.meow();
            //Console.WriteLine($"{nero.Name}:{nero.Color}");
        }
    }


}
