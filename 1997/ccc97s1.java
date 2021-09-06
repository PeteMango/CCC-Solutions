import java.util.Scanner;
public class ccc97s1{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		for(int i=0;i<n;i++){
			int a = scan.nextInt();
			int b = scan.nextInt();
			int c = scan.nextInt();
			scan.nextLine();
			String arr[] = new String[a];
			String arrs[] = new String[b];
			String arrz[] = new String[c];
			for(int j=0;j<a;j++){
				arr[j]=scan.nextLine();
			}
			for(int k=0;k<b;k++){
				arrs[k]=scan.nextLine();
			}
			for(int w=0;w<c;w++){
				arrz[w]=scan.nextLine();
			}
			for(int j=0;j<a;j++){
				for(int k=0;k<b;k++){
					for(int w=0;w<c;w++){
						System.out.println(arr[j]+" "+arrs[k]+" "+arrz[w]+".");
					}
				}
			}
		}
	}
}
