fun main()
{
  var t = readLine()!!.toInt()
  for (n in 1..t)
  {
    var x = readLine()!!.toInt()
    x += 1
    for (m in 2..x)
    {
      print("$m ")
    }
    println()
  }
}