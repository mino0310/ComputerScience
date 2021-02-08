using System;
using static System.Console;

namespace BrainCSharp
{
    class HelloWorld
    {
        static void Main(string[] args)
        {
            if (args.Length == 0)
            {
                Console.WriteLine("사용법 : HelloWorld.exe <이름>");
                return ;
            }

            WriteLine("Hello, {0}!", args[0]);
        }
    }
}The .NET Core SDK cannot be located. .NET Core debugging will not be enabled. Make sure the .NET Core SDK is installed and is on the path.