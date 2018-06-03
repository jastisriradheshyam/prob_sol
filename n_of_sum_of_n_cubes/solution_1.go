// find the n of n of cubes
func FindNOfNCubes(m int) int {
  var n int
  n = 0
  // loop untill the m is less than or equal to 0
  for m>0 {
  n++
  m = m - n*n*n
  }
  // check for value m if m is less than 0
  // if yes then n does not exist for m on applying function
  if(m<0){
  return -1
  }
  // if all goes right then return n
  return n
}
