class A
{
    int v=100;
    A()
    {
        int v=400;
        System.out.println("class A constructor A ");
        System.out.println(" v = "+v);
        System.out.println("this.v = "+this.v);
        this.v++;
    }
}