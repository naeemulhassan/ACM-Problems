import java.math.BigInteger;
import java.util.StringTokenizer;
import java.util.Scanner;

class Main
{	
	public static Scanner inp = new Scanner(System.in);
	public static int i,l;
	public static String m,n;
	public static StringTokenizer str ; 
	public static void main(String [] args)
	{
		BigInteger f = new BigInteger("4");
		BigInteger z = new BigInteger("0");
		BigInteger o = new BigInteger("1");
		BigInteger t = new BigInteger("2");
		BigInteger th = new BigInteger("3");
		while(true)
		{
			str = new StringTokenizer(inp.nextLine()," ");
			m = str.nextToken();
			n = str.nextToken();
			if(m.compareTo("0")==0 && n.compareTo("0")==0)break;
			if(n.compareTo("0")==0)
			{
				System.out.print("1\n");
				continue;
			}
			l = m.length();
			if(m.charAt(l-1)=='1')System.out.print("1\n");
			else if(m.charAt(l-1)=='6')System.out.print("6\n");
			else if(m.charAt(l-1)=='5')System.out.print("5\n");
			else if(m.charAt(l-1)=='0')System.out.print("0\n");
			else 
			{
				BigInteger x = new BigInteger(n);				
				if(m.charAt(l-1)=='2')
				{
					x = x.mod(f);
					if(x.compareTo(o)==0)System.out.print("2\n");
					else if(x.compareTo(t)==0)System.out.print("4\n");
					else if(x.compareTo(th)==0)System.out.print("8\n");
					else if(x.compareTo(z)==0)System.out.print("6\n");
				}
				else if(m.charAt(l-1)=='3')
				{
					x = x.mod(f);
					if(x.compareTo(o)==0)System.out.print("3\n");
					else if(x.compareTo(t)==0)System.out.print("9\n");
					else if(x.compareTo(th)==0)System.out.print("7\n");
					else if(x.compareTo(z)==0)System.out.print("1\n");
				}	
				else if(m.charAt(l-1)=='7')
				{
					x = x.mod(f);
					if(x.compareTo(o)==0)System.out.print("7\n");
					else if(x.compareTo(t)==0)System.out.print("9\n");
					else if(x.compareTo(th)==0)System.out.print("3\n");
					else if(x.compareTo(z)==0)System.out.print("1\n");
				}
				else if(m.charAt(l-1)=='8')
				{
					x = x.mod(f);
					if(x.compareTo(o)==0)System.out.print("8\n");
					else if(x.compareTo(t)==0)System.out.print("4\n");
					else if(x.compareTo(th)==0)System.out.print("2\n");
					else if(x.compareTo(z)==0)System.out.print("6\n");
				}
				else if(m.charAt(l-1)=='4')
				{
					x = x.mod(t);
					if(x.compareTo(o)==0)System.out.print("4\n");
					else if(x.compareTo(z)==0)System.out.print("6\n");
				}		
				else if(m.charAt(l-1)=='9')
				{
					x = x.mod(t);
					if(x.compareTo(o)==0)System.out.print("9\n");
					else if(x.compareTo(z)==0)System.out.print("1\n");
				}					
			}
		}
	}
}
