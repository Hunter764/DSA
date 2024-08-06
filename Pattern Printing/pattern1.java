public class pattern1 {
    public static void main(String[] args){
        int num = 65;
        for(int i=1; i<=5; i++){
            for(int j=1; j<= 5-i+1; j++){
                System.out.print((char)(num+j-1) );
            }
            num++;
            System.out.println();
        }
    }
}
