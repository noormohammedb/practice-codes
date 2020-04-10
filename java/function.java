import java.util.Scanner;

public class function
{
	public static void main(String[] arg)
	{
		Scanner s=new Scanner(System.in); // object creating

		System.out.println("Welcome To Java\nEnter 2 number");
		int n1=s.nextInt();
		int n2=s.nextInt();
		int res=calc(n1,n2);
		System.out.println(n1+" + "+n2+" = "+res);
		s.close;
	}
	public static int calc(int num1,int num2)
	{
		int c=num1+num2;
		return c;
	}
}