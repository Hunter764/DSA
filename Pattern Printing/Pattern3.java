public class Pattern3 {
        public static void main(String[] args){
            int num = 69;
            for(int i=1; i<=5; i++){
                for(int j=5; j>=i ; j--){
                    System.out.print((char)num);
                    num--;
                }
                num = 69 - i +1;
                System.out.println();
            }
        }
}
