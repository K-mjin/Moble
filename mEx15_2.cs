using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0721
{
    class Product
    {
        private int price = 100;
        // 접근한정자가 private일 때 속성외에 접근해서 값 변경하는 방법(참조방식)

        public ref int GetPrice()   // 반환형을 키워드 ref한정자를 이용해서 메서드 선언
        {
            return ref price;   // price의 주소값이 반환됨, 반환형이 ref가 있으면 return문도 반환하는 변수
        }                       // 앞에도 ref 키워드 명시

        public void Print()
        {
            Console.WriteLine($"Price : {price}");
        }
    }
    internal class Class4
    {
        static void Main(string[] args) {
            Product product = new Product();
            ref int ref_price = ref product.GetPrice(); // ref_price는 참조지역변수, 함수 호출뒤 반환되는 주소값이 가리키는 곳의 정수값이 반환
            int nomal_price = product.GetPrice();   // 값형식으로 스택에 저장된 테이터 출력(price = 100)
            product.Print();
            Console.WriteLine($"ref_price = {ref_price}");
            Console.WriteLine($"nomal_price = {nomal_price}");
            Console.WriteLine();
            ref_price = 200;
            Console.WriteLine("ref_price값 변경후");
            product.Print();
            Console.WriteLine($"ref_price = {ref_price}");
            Console.WriteLine($"nomal_price = {nomal_price}");  // 값형식으로 스택에 저장된 데이터 출력(price = 100)
        }
    }
}
