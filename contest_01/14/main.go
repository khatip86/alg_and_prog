package main

import (
 "fmt"
)

func main() {
 var row, col int
 fmt.Scan(&row, &col)

 for i := 1; i <= (row + 2); i++ {
  if i == 1 {
   for l := 1; l <= (col + 1); l++ {
    if l == 1 {
     fmt.Print("    |")
    } else {
     fmt.Printf("%4d", l-1)
    }
   }
  } else if i == 2 {
   for  m:= 1; m <= (col*2 + 2); m++ {
    if m == 1 {
     fmt.Print("   ")
    } else {
     fmt.Print("--")
    }
   }
  } else {
   for j := 1; j <= (col + 1); j++ {
    if j == 1 {
     fmt.Printf("%4d", i-2)
     fmt.Print("|")
    } else {
     fmt.Printf("%4d", (i-2)*(j-1))
    }
   }
  }
  fmt.Print(" ")
  fmt.Print("\n")
 }
}
