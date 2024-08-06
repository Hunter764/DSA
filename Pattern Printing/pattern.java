class pattern{
    public static void main(String[] args){
        
        for(int i=1; i<=5 ;i++){
            char num ='A';
            for(int j=1; j<=5-i+1; j++){
                System.out.print(num);
                num ++;
            }
            System.out.println();
        }
    }
}
