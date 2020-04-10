class B extends A
{
    int v=200;
    B()
    {
        System.out.println("I am class B");
    }
    void fn()
    {
        int v=300;
        System.out.println("class B method fn ");
        System.out.println("v = "+v);
        System.out.println("This.v = "+this.v);
        System.out.println("super.v = "+super.v);
    }
}