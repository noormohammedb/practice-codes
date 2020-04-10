class Sub extends Base
{
    Sub()
    {
        System.out.println("I am Sub constructor with no arguments ");
    }
    Sub(int a)
    {
        super(a);
        System.out.println("I am Sub constructor with 1 intiger arguments ");
    }
}