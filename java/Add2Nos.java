import java.util.Scanner;

public class Add2Nos 
{
        public static void main(String args[]) 
        {
                Scanner s=new Scanner(System.in);
                System.out.println("Enter a number : "); 
                
                int a=s.nextInt();
                int b=s.nextInt();   

                int c=a+b;

                System.out.println("Result : "+c);
        }
}