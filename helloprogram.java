import java.io.File;
import java.util.Scanner;
class helloprogram
{
	public static void main(String args[]) throws Exception
	{
		File file= new File("C:\\Users\\srava\\OneDrive\\Desktop\\input.txt");
		Scanner sc=new Scanner(file);

		while(sc.hasNextLine())
		{
			//System.out.println(sc.nextLine());
			String[] name=sc.nextLine().split(",");
			if(name[0].equals("Last Name") == false)
				System.out.println("Welcome,"+name[1]+" "+name[0]);
		}
	}
}