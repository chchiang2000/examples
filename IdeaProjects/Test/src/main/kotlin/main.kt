fun main(args: Array<String>) {
    println("Hello World!")

    var list:List<Any> = listOf("One", 2, "Three", "Four", 4.5,
        "Five", 6.0f) // 1
    var iterator = list.iterator() // 2
    while (iterator.hasNext()) { // 3
        println(iterator.next()) // Prints each element 4
    }
}