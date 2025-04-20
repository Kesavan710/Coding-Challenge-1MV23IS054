import java.util.*;
public class vowel
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string");
        String s=sc.nextLine();
        int vowel=0;
        int consonant=0;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            char a=s.charAt(i);
            a=Character.toLowerCase(a);
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' )
                vowel++;
            else
                consonant++;
        }
        System.out.println("Number of vowels ="+vowel);
        System.out.println("Number of consonants="+consonant);
    }
}