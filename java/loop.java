import java.util.Scanner;

public class loop
{
    public static void main(String[] arg)
    {
        Scanner s=new Scanner(System.in);

        System.out.println("Enter a number to find its all sum : ");
        int num=s.nextInt();
        int sum=0;
        
        for(int i=0;i<=num;i++)
        {
            sum=sum+i;
        }
        System.out.println("Sum of the all "+num+" = "+sum);
    }
}