import java.util.Scanner;

public class calc
{
	int num1,num2,res=0;
	char oper;
	Scanner r=new Scanner(System.in);
	
	void clcfn()
	{
		System.out.println("Enter a claculation");
		num1=r.nextInt();
		oper=r.next().charAt(0);
		num2=r.nextInt();
		
		switch(oper)
		{
			case '+' :	add(num1,num2);
					break;
			case '-' :	sub(num1,num2);
					break;
			case '*' :	mult(num1,num2);
					break;
			case '/' :	div(num1,num2);
					break;
			default	 :	System.out.println("Error");
		}
	r.close();
	}
	void add(int a,int b)
	{
		int res=a+b;
		System.out.println(res);
	}
	void sub(int a,int b)
	{
		int res=a-b;
		System.out.println(res);
	}
	void mult(int a,int b)
	{
		int res=a*b;
		System.out.println(res);
	}
	void div(int a,int b)
	{
		int res=a/b;
		System.out.println(res);
	}
			
}