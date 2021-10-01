# Hw4

## 환경

OS: Ubuntu 18.04

언어: C11

gcc: 7.5.0



## 실행순서

```
make
./main
```



## 문제 풀이

### 주어진 Electric circuit design 풀이

#### 1. Bisection

```
======Bisection(rtbis.c)======
반복 횟수: 15
1th root with 1e-4: 328.151428

반복 횟수: 21
1th root with 1e-6: 328.151428
```

1. xacc 1e-4일 때, 반복문 16회 실행, 반복 횟수 15회
2. xacc 1e-6일 때, 반복문 22회 실행, 반복 횟수 21회



#### 2. Linear Interpolation

```
======Linear interpolation(rtflsp.c)======
반복 횟수: 2
1th root with 1e-4: 328.151428

반복 횟수: 2
1th root with 1e-6: 328.151428
```

1. xacc 1e-4일 때, 반복문 3회 실행, 반복 횟수 2회
2. xacc 1e-6일 때, 반복문 3회 실행, 반복 횟수 2회



#### 3. Secant

```
======Secant(rtsec.c)======
반복 횟수: 2
1th root with 1e-4: 328.151428

반복 횟수: 2
1th root with 1e-6: 328.151428
```

1. xacc 1e-4일 때, 반복문 3회 실행, 반복 횟수 2회
2. xacc 1e-6일 때, 반복문 3회 실행, 반복 횟수 2회



#### 4. Newton-Raphson

```
======Newton-Raphson(rtnewt.c)=======
반목 횟수: 2
1th root with 1e-4: 328.151428

반목 횟수: 2
1th root with 1e-6: 328.151428
```

1. xacc 1e-4일 때, 반복문 3회 실행, 반복 횟수 2회
2. xacc 1e-6일 때, 반복문 3회 실행, 반복 횟수 2회



#### 5. Newton with Bracketing

```
======Newton with bracketing(rtsafe.c)======
반복 횟수: 2
1th root with 1e-4: 328.151428

반복 횟수: 2
1th root with 1e-6: 328.151428
```

1. xacc 1e-4일 때, 반복문 3회 실행, 반복 횟수 2회
2. xacc 1e-6일 때, 반복문 3회 실행, 반복 횟수 2회



#### 6. Muller Method

```
======Muller Method======
반복 횟수: 1
1th root with 1e-4: 328.151428

반복 횟수: 1
1th root with 1e-6: 328.151428
```

1. xacc 1e-4일 때, 반복문 2회 실행, 반복 횟수 1회
2. xacc 1e-6일 때, 반복문 2회 실행, 반복 횟수 1회



### Prob 8.32

#### 1. Bisection

```
==================Bisection(rtbis.c)==================
반복 횟수: 7
1th root with 1e-4: 0.221328
반복 횟수: 7
2th root with 1e-4: 1.509843

반복 횟수: 14
1th root with 1e-6: 0.221350
반복 횟수: 14
2th root with 1e-6: 1.509786
```

1. xacc 1e-4일 때, 반복문 8회 실행, 반복 횟수 7회
2. xacc 1e-6일 때, 반복문 15회 실행, 반복 횟수 14회



#### 2. Linear Interpolation

```
==================Linear interpolation(rtflsp.c)==================
반복 횟수: 1
1th root with 1e-4: 0.221350
반복 횟수: 3
2th root with 1e-4: 1.509785

반복 횟수: 3
1th root with 1e-6: 0.221350
반복 횟수: 3
2th root with 1e-6: 1.509785
```

1. xacc 1e-4일 때, 반복문 2회 실행, 반복 횟수 1회
2. xacc 1e-6일 때, 반복문 2회 실행, 반복 횟수 1회



#### 3. Secant

```
==================Secant(rtsec.c)==================
반복 횟수: 1
1th root with 1e-4: 0.221350
반복 횟수: 2
2th root with 1e-4: 1.509785

반복 횟수: 2
1th root with 1e-6: 0.221350
반복 횟수: 3
2th root with 1e-6: 1.509785
```

1. xacc 1e-4일 때, 반복문 2회 실행, 반복 횟수 1회 & 반복문 3회 실행, 반복 횟수 2회
2. xacc 1e-6일 때, 반복문 3회 실행, 반복 횟수 2회 & 반복문 4회 실행, 반복 횟수 3회



#### 4. Newton-Raphson

```
==================Newton-Raphson(rtnewt.c)===================
반목 횟수: 1
1th root with 1e-4: 0.221350
반목 횟수: 1
2th root with 1e-4: 1.509785

반목 횟수: 2
1th root with 1e-6: 0.221350
반목 횟수: 1
2th root with 1e-6: 1.509785
```

1. xacc 1e-4일 때, 반복문 2회 실행, 반복 횟수 1회
2. xacc 1e-6일 때, 반복문 3회 실행, 반복 횟수 2회 & 반복문 2회 실행, 반복 횟수 1회



#### 5. Newton with Bracketing

```
==================Newton with bracketing(rtsafe.c)==================
반복 횟수: 1
1th root with 1e-4: 0.221350
반복 횟수: 1
2th root with 1e-4: 1.509785

반복 횟수: 2
1th root with 1e-6: 0.221350
반복 횟수: 1
2th root with 1e-6: 1.509785
```

1. xacc 1e-4일 때, 반복문 3회 실행, 반복 횟수 2회
2. xacc 1e-6일 때, 반복문 3회 실행, 반복 횟수 2회 & (2, 1) 회 실행



#### 6. Muller Method

```
==================Muller Method==================
반복 횟수: 1
1th root with 1e-4: 0.221350
반복 횟수: 1
2th root with 1e-4: 1.509785

반복 횟수: 1
1th root with 1e-6: 0.221350
반복 횟수: 1
2th root with 1e-6: 1.509785
```

1. xacc 1e-4일 때, 반복문 2회 실행, 반복 횟수 1회
2. xacc 1e-6일 때, 반복문 2회 실행, 반복 횟수 1회



### Prob 8.36

#### 1. Bisection

```
==================Bisection(rtbis.c)==================
반복 횟수: 1
1th root with 1e-4: -1289.950317
반복 횟수: 1
2th root with 1e-4: 1126.009644

반복 횟수: 7
1th root with 1e-6: -1289.950317
반복 횟수: 7
2th root with 1e-6: 1126.009644
```

1. xacc 1e-4일 때, 반복문 2회 실행, 반복 횟수 1회
2. xacc 1e-6일 때, 반복문 8회 실행, 반복 횟수 7회



#### 2. Linear Interpolation

```
==================Linear interpolation(rtflsp.c)==================
반복 횟수: 0
1th root with 1e-4: -1289.950439
반복 횟수: 0
2th root with 1e-4: 1126.009766

반복 횟수: 0
1th root with 1e-6: -1289.950439
반복 횟수: 0
2th root with 1e-6: 1126.009766
```

1. xacc 1e-4일 때, 반복문 1회 실행, 반복 횟수 0회
2. xacc 1e-6일 때, 반복문 1회 실행, 반복 횟수 0회



#### 3. Secant

```
==================Secant(rtsec.c)==================
반복 횟수: 0
1th root with 1e-4: -1289.950439
반복 횟수: 0
2th root with 1e-4: 1126.009766
```

1. xacc 1e-4일 때, 반복문 1회 실행, 반복 횟수 0회
2. xacc 1e-6일 때, 답을 구할 수 없음.



#### 4. Newton-Raphson

```
==================Newton-Rhpason(rtnewt.c)===================
반목 횟수: 0
1th root with 1e-4: -1289.950439
반목 횟수: 1
2th root with 1e-4: 1126.009766
```

1. xacc 1e-4일 때, 반복문 (1, 2)회 실행, 반복 횟수 (0, 1)회
2. xacc 1e-6일 때, 답을 구할 수 없음.



#### 5. Newton with Bracketing

```
==================Newton with bracketing(rtsafe.c)==================
반복 횟수: 0
1th root with 1e-4: -1289.950439
반복 횟수: 1
2th root with 1e-4: 1126.009766

반복 횟수: 1
1th root with 1e-6: -1289.950439
반복 횟수: 1
2th root with 1e-6: 1126.009766
```

1. xacc 1e-4일 때, 반복문 (1, 2)회 실행, 반복 횟수 (0, 1)회
2. xacc 1e-6일 때, 반복문 2회 실행, 반복 횟수 1회



#### 6. Muller Method

```
==================Muller Method==================
반복 횟수: 39
1th root with 1e-4: -nan
반복 횟수: 0
2th root with 1e-4: 1126.009766

반복 횟수: 39
1th root with 1e-6: -nan
반복 횟수: 0
2th root with 1e-6: 1126.009766
```

1. xacc 1e-4일 때, 해를 구할 수 없거나, 반복 횟수 0회
2. xacc 1e-6일 때, 해를 구할 수 없거나, 반복 횟수 0회



## pointer to function

- pointer to function은 함수 자체를 매개변수로 넘겨주고, 반환 값을 가져오기 위해서 사용된다. 
- 함수의 주소를 주고 받아 함수를 실행하는 것을 의미한다.
- 함수포인터를 선언할 때, 저장될 함수의 리턴 값 형식과 매겨변수 형식, 갯수가 일치해야한다. 

- `void (*fp)();`는 void 형식의 매개변수가 없는 함수 포인터 선언을 의미한다.



- 과제 과정에서, numerical method에서 전부 function pointer로 근을 구하고자 하는 함수를 받는 것을 알았다. 
- 따라서, 각 method의 function pointer가 요구하는 형식을 맞춰 구하고자 하는 함수를 선언했다.