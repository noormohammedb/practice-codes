import java.util.Scanner;

public class Array
{
    public static void main(String[] args) 
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter Array Length : ");
        int ln=s.nextInt();
        int ar[]=new int[ln];
        System.out.println("Enter Some Numbers : ");
        for(int i=0;i<ln;i++)
        ar[i]=s.nextInt();
        System.out.println("Array Elements are \n");
        for(int i=0;i<ln;i++)
        System.out.print(ar[i]+"\t");
        s.close();
    }
}