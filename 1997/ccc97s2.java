import java.util.Scanner;
public class ccc97s2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		for(int i=0;i<n;i++) {
			int m = scan.nextInt();
			if(m%6==0) {
				System.out.println(m+" is nasty");
			}
			else {
				System.out.println(m+" is not nasty");
			}
		}
	}
}
