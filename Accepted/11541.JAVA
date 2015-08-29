import java.util.Scanner;
import java.util.StringTokenizer;

class Main
{
	public static void main(String [] args)
	{
		StringTokenizer str;
		String s;
		int tc,j,l,ct,it,i,k;
		int f[] = new int[10000];
		char c[] = new char[10000];
		char sc[] = new char[10000];
		Scanner inp = new Scanner(System.in);
		tc = Integer.parseInt(inp.nextLine());
		for(i = 1; i <= tc; i++)
		{
			s = inp.nextLine();
			l = s.length();
			sc = s.toCharArray();
			ct = 0;
			it = 0;
			for(j = 0; j < l; j++)
			{
				if(sc[j] >= 'A' && sc[j] <= 'Z')
				{
					c[ct++]=sc[j];
					sc[j]='.';
				}
			}
			s = s.copyValueOf(sc);
			str = new StringTokenizer(s,".");
			while(str.hasMoreTokens())
			{
				f[it++] = Integer.parseInt(str.nextToken());
			}
			System.out.print("Case "+i+": ");
			for(k = 0; k < it; k++)
			{
				for(j = 0; j < f[k]; j++)System.out.print(c[k]);
			}
			System.out.println();
		}		
	}
}
