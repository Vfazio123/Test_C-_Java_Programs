class callbyVal {
   public static void main(String[] args){
      int num = 10;
      int num2 = -10;

      System.out.println("Before Func: num = " + num);
      System.out.println("Before Func: num2 = " + num2);

      func(num, num2);

      System.out.println("After Func: num = " + num);
      System.out.println("After Func: num2 = " + num2);
   }
   public static void func(int ptr1, int ptr2){
      ptr1 += 5;
      ptr2 += 5;

      System.out.println("In Func: num = " + ptr1);
      System.out.println("In Func: num2 = " + ptr2);


   }
}
