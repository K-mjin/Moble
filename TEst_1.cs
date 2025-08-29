using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
// 다음과 같은 변수를 가지는 클래스를 만들고 , 매개변수가 있는 생성자를
// 사용하여 값을 넣어 이스턴스를 생성하고, 변수의 이름과 자료형은 
// 본인이 스스로 선택하시오. 클래스 이름은 Member로 하시오
// 젼수의 초기값은 사용자로부터 입력받아서 사용하시오.
namespace ConsoleApp_0721
{ 
    class Member
    {
        public string Name;
        public int Mineral;
        public int Supply;
        public int HP;
        public int Attack;
    }
    internal class TEst_1
    {
        static void Main(string[] args)
        {
            Member member = new Member();

            Console.WriteLine("Name : {0}" member.Name);

    }
    }
}
