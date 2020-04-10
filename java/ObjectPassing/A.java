class A
{
    int a=30;
    void display(B b)
    {
        int a=10;
        b.display();
        b.display(this.a);
    }
}