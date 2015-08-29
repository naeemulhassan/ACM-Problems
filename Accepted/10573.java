import java.util.StringTokenizer;
import java.util.Scanner;
import java.lang.Math;
import java.util.Formatter;
class Main
{
	public static void main(String []args)
	{
		Scanner inp = new Scanner(System.in);
		StringTokenizer str;
		String s;
		s = inp.nextLine();
		int tc = Integer.parseInt(s);
		int r1,r2,t;
		double ans;
		while(tc-- != 0)
		{
			s = inp.nextLine();
			str = new StringTokenizer(s," ");
			if(str.countTokens()==2)
			{
				r1 = Integer.parseInt(str.nextToken());
				r2 = Integer.parseInt(str.nextToken());
				ans = 2.0*Math.acos(0.0)*((r1+r2)*(r1+r2)-r1*r1-r2*r2);	
				System.out.printf("%.4f\n",ans);
			}
			else
			{
				t = Integer.parseInt(str.nextToken());
				ans = 2.0*Math.acos(0.0)*t*t/8.0;
				System.out.printf("%.4f\n",ans);
			}
		}
	}
}
