/******************************************************************************

                            Online C# Compiler.
                Code, Compile, Run and Debug C# program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

using System;
class HelloWorld {
  static void Main() {
      
  System.IO.StreamReader file= new System.IO.StreamReader("input.txt");
   string line;
   int i=0;
   
   while((line=file.ReadLine()) != null)
   {
       if(i!=0)
       {
             string[] names=line.Split(',');
            Console.Write("Welcome,"+names[1]+" "+names[0]+"\n");
       }
       i++;
   }
   
  }
}
