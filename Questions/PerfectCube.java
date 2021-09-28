public class PerfectCube {
    //Given a set 
    public static void main(String[] args){
        int numProducts = 6;
        int []products = {60,7,8,10,250,730};
        long sum = 0;
        for(int i : products)
            sum = sum + i;

        int cbrt = (int) Math.cbrt(sum);
        if((cbrt*cbrt*cbrt) == sum)
            System.out.println("Yes");
        else{
            cbrt++;
            long ans = (cbrt*cbrt*cbrt) - sum;
            System.out.println(ans);
        }
    }
}
