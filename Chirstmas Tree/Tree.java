class Tree
{
    public static void main(String[] args) 
    {
        int i,j,l=14;
        System.out.println("\n\n\n\n                    Happy Christmas\n");
        for(i=0;i<=l;i++)
        {
            for(j=27;j>=i;j--) System.out.print(" ");
            for(int k=0;k<i;k++) System.out.print("* ");
            System.out.println();
        }
        for(i=0;i<6;i++)
        System.out.println("                         |   |");
        System.out.println("\n\n\n");
    }
}