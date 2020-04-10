import java.util.Scanner;

public class IfSample 
{
    public static void main(String[] arg)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a number : ");
        int num=s.nextInt();
        if(num<0)
        System.out.println("Its negative ");
        else 
        System.out.println("Its possitive ");
    }
}