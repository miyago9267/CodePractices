import java.util.*;

public class sol {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int[] addr = new int[501];
        int T, relCount;
        T = scn.nextInt();
        for (int t=0; t<T; t++) {
            relCount = scn.nextInt();
            int med, sum = 0;
            for (int i=0; i<relCount; i++) {
                addr[i] = scn.nextInt();
            }
            Arrays.sort(addr, 0, relCount);
            med = (relCount%2==1?addr[relCount/2]:(addr[relCount/2-1] + addr[relCount/2])/2);
            for (int j=0; j<relCount; j++){
                sum += Math.abs(addr[j]-med);
            }
            System.out.println(sum);
        }
    } 
}