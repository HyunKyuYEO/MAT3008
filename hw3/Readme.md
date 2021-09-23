# Hw3

## 환경
- OS: macOS Catalina(version 10.15.7)
- Compiler: Apple clang version 12.0.0 (clang-1200.0.32.29)
- Target: Target: x86_64-apple-darwin19.6.0
- C11

## 실행순서
```
make
./main
```

## Part1: Find the roots of the Bessel function J0 using the following methods
- zbrak을 이용하여 대략적인 root의 범위를 구함. 
### Bisection(rtbis.c)
```
======Bisection(rtbis.c)======
반복문 횟수: 17
1th root: 2.404826
반복문 횟수: 17
2th root: 5.520078
반복문 횟수: 17
3th root: 8.653728
```

### Linear interpolation(rtflsp.c)
```
======Linear interpolation(rtflsp.c)======

반복문 횟수: 4
1th root: 2.404826
반복문 횟수: 3
2th root: 5.520078
반복문 횟수: 3
3th root: 8.653728
```

### Secant(rtsec.c)
```
=======Secant(rtsec.c)======
반복문 횟수: 4
1th root: 2.404825
반복문 횟수: 3
2th root: 5.520078
반복문 횟수: 3
3th root: 8.653728
```

### Newton-Rhpason(rtnewt.c)
```
======Newton-Rhpason(rtnewt.c)======
반목문 횟수: 3
1th root: 2.404825
반목문 횟수: 3
2th root: 5.520078
반목문 횟수: 3
3th root: 8.653728
```

### Newton with bracketing(rtsafe.c)
```
======Newton with bracketing(rtsafe.c)======
반복문 횟수: 3
1th root: 2.404825
반복문 횟수: 3
2th root: 5.520078
반복문 횟수: 3
3th root: 8.653728
```

### Muller Method
```
======Muller Method======
반복문 횟수: 2
1th root: 2.404825
반복문 횟수: 3
2th root: 5.520078
반복문 횟수: 2
3th root: 8.653728
```

### Convergence speed 비교
- 각 methods들이 해를 구하는 과정에서 반복문 수행 횟수를 비교함(시간차를 유의미하게 구분하기 어려움)

| Methods | Total sum |
:--------- | :---------:
Bisection | 51
Linear interpolation | 10
Secant | 10
Newton-Rhpason | 9
Newton with bracketing | 9
Muller Method | 7

- Muller Method가 가장 빠르다. 아래부터 위로 갈수록 더 느려짐을 확인할 수 있다. 

## Part2. Solve the following problems using the routine of rtsafe.c in NR in C

- problem1: 10 * exp(-x) * sin(2 * M_PI * x) - 2, on [0.1, 1]
- problem2: x * x - 2 * x * exp(-x) + exp(-2 * x), on [0, 1]
- problem3: cos(x + sqrt(2)) + x * (x / 2 + sqrt(2)), on [-2, -1]
- problem4: sin(x), on [3, 4]
  - 선정 배경: 실제 PI값과 얼마나 유사한지 확인하고자 했다.
  
```
======problem1======
root: 0.449261

======problem2======
root: 0.567164

======problem3======
root: -1.414453

======problem4======
root: 3.141593
```
