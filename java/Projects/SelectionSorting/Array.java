import java.util.Scanner;
public class Array
{
    public static void main(String[] args) 
    {
        Scanner s=new Scanner(System.in);
		System.out.print("Enter Length Of Array : ");
		int num=s.nextInt();
        int ar[]=new int[num];
        System.out.println("Enter Array Elements ");
        for(int i=0;i<num;i++)
        ar[i]=s.nextInt();
        System.out.println("You Enterd is : ");
        for(int k=0;k<num;k++)
        System.out.print(ar[k]+" ");

        int temp=0;
        for(int l=0;l<num-1;l++)
        {
            for(int j=l+1;j<num;j++)
            {
                if(ar[l]>ar[j])
                {
                    temp=ar[l];
                    ar[l]=ar[j];
                    ar[j]=temp;
                }
            }
        }

        System.out.println("\nArray After The Selection Sorting :");
        for(int p=0;p<num;p++)
        System.out.print(ar[p]+" ");

        s.close();

    }
}