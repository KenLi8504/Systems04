int problem1(){
  int sum = 0;
  for (int i = 0; i < 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
      sum = sum + i;
    }
  }
  return sum;
}

int problem2(){
  int sum = 0;
  int currentFib = 2;
  int prevFib = 1;
  while (currentFib < 4000000 &&
  prevFib < 4000000){
    if (currentFib % 2 == 0){
      sum = sum + currentFib;
    }
    int placeholder = currentFib;
    currentFib = currentFib + prevFib;
    prevFib = placeholder;
  }
  return sum;
}

int problem6(){
  int sumOfSquares = 0;
  int squareOfSum = 0;
  for (int naturalNum = 1; naturalNum <= 100; naturalNum++){
    sumOfSquares = sumOfSquares + (naturalNum * naturalNum);
    squareOfSum = squareOfSum + naturalNum;
  }
  squareOfSum = squareOfSum * squareOfSum;
}
