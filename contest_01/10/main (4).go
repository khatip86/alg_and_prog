package main

import "fmt"

func main() {
 var a, b, c string
 fmt.Scan(&a, &b, &c)
 var s string = ""
 s = s + a + " " + b + " " + c
 switch s {
 case "Нет Нет Нет":
  fmt.Println("Кот")
 case "Нет Нет Да":
  fmt.Println("Жираф")
 case "Нет Да Нет":
  fmt.Println("Курица")
 case "Нет Да Да":
  fmt.Println("Страус")
 case "Да Нет Нет":
  fmt.Println("Дельфин")
 case "Да Нет Да":
  fmt.Println("Плезиозавры")
 case "Да Да Нет":
  fmt.Println("Пингвин")
 case "Да Да Да":
  fmt.Println("Утка")
 }
}