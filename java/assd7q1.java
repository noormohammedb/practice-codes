import java.util.Scanner;

public class assd7q1
{
	public static void main(String[] arg)
	{
		Scanner s=new Scanner(System.in);
		System.out.println("Enter a number to check prime or not \n");
		int val=s.nextInt();
		int flag=0;
		for(int i=2;i<val;i++)
		{
			if(val%i==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		System.out.println(val+" is a prime number ");
		else System.out.println(val+" is not a prime number ");
	}
}