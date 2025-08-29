using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp_0723
{
    interface ILog
    {
        void WriteLog(string message);
    }
    class ConsoleLog : ILog
    {
        public void WriteLog(string message)
        {
            Console.WriteLine("{0} {1}", DateTime.Now.ToLocalTime(), message);
        }
    }
    internal class Class11
    {
        static void Main(string[] args)
        {
            ILog log = new ConsoleLog();    // 인터페이스는 인스턴스를 생성하지 못하지만 참조는 가능
            //ILog log = new ILog();    // 인터페이스로 생성자를 만드는 것은 어렵다.
            log.WriteLog("Hello World");
        }
    }
}
