public class DigitEncryption {
    public static void main(String[] args){
        int input = 45673;
        int ans = 0;
        while(input > 0){
            int tmp = input%10;
            switch(tmp){
                case 4:
                case 6:
                case 8:
                case 9: ans += tmp;
                        break;
            }
            input = input/10;
        }
        System.out.println(ans);
    }
}
