import java.awt.*;
import javax.swing.*;
import sun.font.*;


public class Calculator implements Action
{

    
    public static void main(String[] args) 
    {
        new Calculator();
    }

    @Override
    public void Action()
    {
        System.out.println("Hello World");

    }


    Calculator()
    {
        int Bx=80;
        int By=50;

        JFrame frame=new JFrame();
        frame.setLayout(null);
        frame.setBounds(500, 100, 390, 330);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);

        JLabel displayLabel=new JLabel("Hello World");
        displayLabel.setBounds(10,10,360,30);
        displayLabel.setBackground(Color.RED);
        displayLabel.setOpaque(true);
        displayLabel.setForeground(Color.WHITE);
        displayLabel.setHorizontalAlignment(SwingConstants.RIGHT);
        frame.add(displayLabel);

        

        JButton SevenButton=new JButton("7");
        SevenButton.setBounds(10, 50,Bx, By);
        frame.add(SevenButton);
        SevenButton.setFont(new Font("Arial",Font.PLAIN,40));
        
        JButton EightButton=new JButton("8");
        EightButton.setBounds(100, 50, Bx, By);
        frame.add(EightButton);
        EightButton.setFont(new Font("Arial",Font.PLAIN,40));
        
        JButton NineButton=new JButton("9");
        NineButton.setBounds(190, 50, Bx, By);
        frame.add(NineButton);
        NineButton.setFont(new Font("Arial",Font.PLAIN,40));

        

        JButton FourButton=new JButton("4");
        FourButton.setBounds(10, 110, Bx, By);
        frame.add(FourButton);
        FourButton.setFont(new Font("Arial",Font.PLAIN,40));
        
        JButton FiveButton=new JButton("5");
        FiveButton.setBounds(100, 110, Bx, By);
        frame.add(FiveButton);
        FiveButton.setFont(new Font("Arial",Font.PLAIN,40));
        
        JButton SixButton=new JButton("6");
        SixButton.setBounds(190, 110, Bx, By);
        frame.add(SixButton);
        SixButton.setFont(new Font("Arial",Font.PLAIN,40));


        
        JButton OneButton=new JButton("1");
        OneButton.setBounds(10, 170, Bx, By);
        frame.add(OneButton);
        OneButton.setFont(new Font("Arial",Font.PLAIN,40));
        
        JButton TwoButton=new JButton("2");
        TwoButton.setBounds(100, 170, Bx, By);
        frame.add(TwoButton);
        TwoButton.setFont(new Font("Arial",Font.PLAIN,40));
        
        JButton ThreeButton=new JButton("3");
        ThreeButton.setBounds(190, 170, Bx, By);
        frame.add(ThreeButton);
        ThreeButton.setFont(new Font("Arial",Font.PLAIN,40));

        

        JButton PointButton=new JButton(".");
        PointButton.setBounds(10, 180+By, Bx, By);
        frame.add(PointButton);
        PointButton.setFont(new Font("Arial",Font.PLAIN,40));

        JButton ZeroButton=new JButton("0");
        ZeroButton.setBounds(20+Bx, 180+By, Bx, By);
        frame.add(ZeroButton);
        ZeroButton.setFont(new Font("Arial",Font.PLAIN,40));

        JButton EqualButton=new JButton("=");
        EqualButton.setBounds(30+2*Bx, 180+By, Bx, By);
        frame.add(EqualButton);
        EqualButton.setFont(new Font("Arial",Font.PLAIN,40));


        JButton DivButton=new JButton("/");
        DivButton.setBounds(40+3*Bx, 50, Bx, By);
        frame.add(DivButton);
        DivButton.setFont(new Font("Arial",Font.PLAIN,40));

        JButton MultButton=new JButton("*");
        MultButton.setBounds(40+3*Bx, 10+2*By, Bx, By);
        frame.add(MultButton);
        MultButton.setFont(new Font("Arial",Font.PLAIN,40));

        JButton MinuButton=new JButton("-");
        MinuButton.setBounds(40+3*Bx, 20+3*By, Bx, By);
        frame.add(MinuButton);
        MinuButton.setFont(new Font("Arial",Font.PLAIN,40));

        JButton PluseButton=new JButton("+");
        PluseButton.setBounds(40+3*Bx, 30+4*By, Bx, By);
        frame.add(PluseButton);
        PluseButton.setFont(new Font("Arial",Font.PLAIN,40));

    }

}