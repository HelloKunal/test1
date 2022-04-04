import java.util.Scanner

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var testc: Int = reader.nextInt()
    reader.nextLine()
    for (i in 1..testc) {
        var s: String = reader.nextLine()
        
        var left: Int = 0
        var right: Int = 0
        var equal: Int = 0
        for(i in 0..s.length-1) {
            if(s[i] == '<') left++
            else if(s[i] == '>') right++
            else equal++
        }
        var res: Char;
        if(equal == s.length) res = '='
        else {
            if(left == 0) res = '>'
            else if(right == 0) res = '<'
            else res = '?'
        }
        println("$res")
        
        
    }
    // println("Hello, world!!!")
 
    // print("Enter an Integer value: ")
 
    // // .toInt() function converts the string into Integer
    // var integerValue: Int = string1.toInt()
    // println("You entered: $integerValue")
 
    // print("Enter a double value: ")
    // val string2= readLine()!!
 
    // // .toDouble() function converts the string into Double
    // var doubleValue: Double = string2.toDouble()
    // println("You entered: $doubleValue")
}