//
//  1. C언어의 개요.c
//  CGrammar
//
//  Created by Lucas Kim on 2023/12/30.
//

#include "1. C언어의 개요.h"

/*
 1-1. C언어의 개요
    C언어
    C언어는 현재 사용되고 있는 거의 모든 컴퓨터 시스템에서 사용할 수 있는 프로그래밍 언어로 현재 널리 사용되는 주요 운영체제의 커널은 대부분 C언어를 이용해 구현되어 있다. 이처럼 C언어는 시스템 프로그래밍에 가장 잘 어울리지만, 응용 프로그래밍에도 많이 사용되는 프로그래밍 언어이다.
 */

//Ex.1
#include <stdio.h>

#define TEXT "Welcome to C Programming!"

int main()
{
    printf(TEXT);
    return 0;
}

/*
 1-2. C언어의 기초
    * C언어란?
        C언어는 현재 사용하고 있는 거의 모든 컴퓨터 시스템에서 사용할 수 있는 프로그래밍 언어
        프로그래밍 언어란 컴퓨터의 시스템을 구동시키는 소프트웨어를 작성하기 위한 언어를 의미합니다.
        이러한 프로그래밍 언어는 크게 저급 언어(low-level language)와 고급 언어(high-level language)로 나뉜다.
        저급 언어와 고급 언어는 좋고 나쁜 언어가 아니라, 기계가 이해하기 쉬운가(저급 언어), 사람이 이해하기 쉬운가(고급 언어)를 상대 적으로 나눈 개념이라고 할 수 있습니다.
        저급 언어는 컴퓨터가 이해하기 쉽게 작성된 프로그래밍 언어로, 대표적인 언어로는 기계어(machine language)와 어셈블리어(assembly language) 등이 있습니다.
        이 언어는 실행 속도가 매우 빠르지만, 사람이 배우기에는 매우 어려워 프로그램의 유지보수가 힘듭니다.
        고급 언어는 컴퓨터보다는 사람이 알기 쉽도록 작성된 프로그래밍 언어입니다.
        고급 언어는 컴파일러나 인터프리터에 의해 기계가 이해 할 수 있는 언어로 번역되어 실행 됩니다.
        그래서 저급 언어보다는 상대적으로 실행 속도가 느립니다. 대표적으로 자바, 파이썬 등이 있습니다.
        이 언어는 저급 언어에 비해 가독성이 높고 다루기가 쉽습니다.
    
        C언어는 저급 언어와 고급 언어의 특징을 모두 가지고 있는 절차 지향 프로그래밍 언어(procedure-oriented programming language)입니다.

    * C언어의 역사
        C언어는 1972년 벨 연구소의 켄 톰프슨(Kenneth Thompson)과 데니스 리치(Dennis Ritchie)가 유닉스(UNIX) 운영체제에서 사용하기 위해서 개발한 범용적인 고급 언어입니다.
        A언어라고 불리는 ALGOL 60부터, CPL, BCPL을 거쳐, 켄 톰프슨이 B언어를 개발하게 됩니다.
        이후 데니스 리치가 B언어를 좀 더 개선하여 지금의 C언어를 만들게 됩니다.
        C언어라는 이름의 유래 또한 B언어 바로 다음에 개발되어서 명명된 이름입니다.

    * C언어의 탄생 배경
        C언어 이전에 유닉스 운영체제는 어셈블리어라는 저급 언어를 사용했습니다.
        하지만 어셈블리어는 특정 하드웨어에 종속적인 언어여서, 이 언어로 작성된 프로그램은 다른 하드웨어로 이식할 수 없었습니다.
        즉, 하나의 기능을 하는 프로그램을 CPU의 종류만큼 여러 번 작성해야만 했던 것입니다.
        따라서 이식성도 좋고 어셈블리어보다 쉬운 언어가 필요해졌고, 그래서 개발된 언어가 바로 C언어입니다.
        현재 널리 사용되는 모든 운영체제의 커널은 대부분 C언어를 이용해 구현되어 있습니다.
        이처럼 C언어는 시스템 프로그래밍에 가장 잘 어울리지만, 응용 프로그래밍에도 많이 사용되는 프로그래밍 언어입니다.

    * C언어의 특징
        C언어가 가지는 장점은 다음과 같습니다.
            1. C언어로 작성된 프로그램은 다양한 하드웨어로의 이식성이 좋습니다.
            2. C언어는 절차 지향 프로그래밍 언어로, 코드가 복잡하지 않아 상대적으로 유지보수가 쉽습니다.
            3. C언어는 저급 언어의 특징을 가지고 있으므로, 어셈블리어 수준으로 하드웨어를 제어할 수 있습니다.
            4. C언어는 코드가 간결하여, 완성된 프로그램의 크기가 작고 실행 속도가 빠릅니다.

    * C언어가 가지는 단점은 다음과 같습니다.
        1. C언어는 저급 언어의 특징을 가지고 있으므로, 자바와 같은 다른 고급 언어보다 배우기가 쉽지 않습니다.
        2. C언어는 다른 언어와는 달리 시스템 자원을 직접 제어할 수 있으므로, 프로그래밍하는데 세심한 주의를 기울여야 합니다.

  * C언어 표준
    C언어는 1989년부터 ANSI(American National Standards Institute)에서 표준화 작업을 진행해왔습니다.
    하지만 현재는 ISO/IEC(International Organization for Standardization / International Electrotechnical Commission)에서 표준화를 담당하고 있습니다.
    C언어의 최신 표준은 ISO/IEC 9899:2011이며, 줄여서 C11이라고도 부릅니다.
 */

/*
 1-3. C 프로그래밍
    * 프로그래밍(programming)
        프로그래밍이란 목적에 맞는 알고리즘으로부터 프로그래밍 언어를 사용하여 구체적인 프로그램을 작성하는 과정을 의미합니다.
        이렇게 작성된 프로그램은 먼저 실행 파일(executable file)로 변환되어야 실행할 수 있습니다.
        C언어에서 실행 파일을 생성하는 순서는 다음 그림과 같습니다.
            https://www.tcpschool.com/lectures/img_c_programming.png
            1. 소스 파일(source file)의 작성
            2. 선행처리기(preprocessor)에 의한 선행처리
            3. 컴파일러(compiler)에 의한 컴파일
            4. 링커(linker)에 의한 링크
            5. 실행 파일(executable file)의 생성

        * 소스 파일(source file)의 작성
            프로그래밍에서 가장 먼저 해야 할 작업은 바로 프로그램을 작성하는 것입니다.
            C언어를 사용하여 문법에 맞게 논리적으로 작성된 프로그램을 원시 파일 또는 소스 파일이라고 합니다.
            C언어를 통해 작성된 소스 파일의 확장자는 .c 가 됩니다.

        * 선행처리기(preprocessor)에 의한 선행처리
            선행처리(preprocess)란 소스 파일 중에서도 선행처리 문자(#)로 시작하는 선행처리 지시문의 처리 작업을 의미합니다.
            이러한 선행처리 작업은 선행처리기(preprocessor)가 수행합니다.
            선행처리기는 코드를 생성하는 것이 아닌, 컴파일하기 전 컴파일러가 작업하기 좋도록 소스를 재구성해주는 역할만을 합니다.
            선행처리에 대한 더 자세한 사항은 C언어 선행처리기 수업에서 확인할 수 있습니다.

        * 컴파일러(compiler)에 의한 컴파일
            컴퓨터는 0과 1로 이루어진 이진수로 작성된 기계어만을 이해할 수 있습니다.
            소스 파일은 개발자에 의해 C언어로 작성되므로, 컴퓨터는 그것을 바로 이해할 수 없습니다.
            따라서 소스 파일을 컴퓨터가 알아볼 수 있는 기계어로 변환시켜야 하는데, 그 작업을 컴파일(compile)이라고 합니다.
            컴파일은 컴파일러에 의해 수행되며, 컴파일이 끝나 기계어로 변환된 파일을 오브젝트 파일(object file)이라고 합니다.
            이러한 오브젝트 파일의 확장자는 .o 나 .obj 가 됩니다.

        * 링커(linker)에 의한 링크
            컴파일러에 의해 생성된 오브젝트 파일은 운영체제와의 인터페이스를 담당하는 시동 코드(start-up code)를 가지고 있지 않습니다.
            또한, 대부분의 C 프로그램에서 사용하는 C 표준 라이브러리 파일도 포함되어 있지 않습니다.
            이때 하나 이상의 오브젝트 파일과 라이브러리 파일, 시동 코드 등을 합쳐 하나의 파일로 만드는 작업을 링크(link)라고 합니다.
            링크는 링커(linker)에 의해 수행되며, 링크가 끝나면 하나의 새로운 실행 파일이나 라이브러리 파일이 생성됩니다.
            이처럼 여러 개의 소스 파일을 작성하여 최종적으로 링크를 통해 하나의 실행 파일로 만드는 것을 분할 컴파일이라고 합니다.
            분할 컴파일에 대한 더 자세한 사항은 C언어 분할 컴파일 수업에서 확인할 수 있습니다.

        * 실행 파일(executable file)의 생성
            소스 파일은 선행처리기, 컴파일러 그리고 링커에 의해 위와 같은 과정을 거쳐 실행 파일로 변환됩니다.
            최근 사용되는 개발 툴은 대부분 위에서 소개한 선행처리기, 컴파일러, 링커를 모두 내장하고 있으므로, 소스 파일에서 한 번에 실행 파일을 생성해 줍니다.
            이렇게 생성된 실행 파일의 확장자는 .exe 가 됩니다.
 */

/*
 1-4. C 프로그램의 특징
    * C 프로그램의 구조
        간단한 C 프로그램의 기본 구조는 다음 예제와 같습니다.
        언제나 다음과 같이 구성되는 것은 아니지만, 대부분의 C 프로그램이 이와 비슷한 형태로 구성됩니다.
*/
// Ex2)
 #include 문

 #define 문

 int main(void)
 {
//     명령문;
//     ...
//     return 문;
 }

// Ex3)
 #include <stdio.h>

 #define TEXT "Welcome to C Programming!!"

 int main()
 {
     printf(TEXT);

     return 0;
 }
// Welcome to C Programming!!

/*
    * C 프로그램의 특징
        C언어로 작성된 프로그램이 가지는 일반적인 특징은 다음과 같습니다.
        1. C 프로그램의 기본 단위는 함수입니다.
        2. 함수 내의 각 명령문은 세미콜론(;)으로 끝나야 합니다.
        3. C언어는 대소문자를 구분합니다.
        4. C언어는 자유 형식(free-format)을 허용합니다.

    * C 프로그램의 기본 단위는 함수입니다.
        C 프로그램은 하나 또는 그 이상의 함수(function)로 이루어집니다.
        또한, C언어로 구현되는 모든 프로그램은 반드시 main() 함수를 가지고 있어야 합니다.
        C 프로그램이 실행되면 컴퓨터는 제일 먼저 main() 함수를 찾아서 호출하기 때문입니다.
*/
// Ex4)
#include <stdio.h>

#define TEXT "Welcome to C Programming!!"

int main()
{
    return 0;     // main() 함수의 모든 명령문을 수행한 후에는 0을 반환함.
}
/*
    * 함수 내의 각 명령문은 세미콜론(;)으로 끝나야 합니다.
        함수는 언제나 기능을 가지고 있어야 합니다.
        C언어에서 이러한 기능을 정의하기 위해 사용되는 문장을 명령문(statement)이라고 합니다.
        함수 내의 명령문은 언제나 위에서부터 아래로 순차적으로 실행되며, 언제나 세미콜론(;)으로 끝나야 합니다.
*/
// Ex5)
printf("C언어"); // 정상적으로 출력됨.
//printf("C언어")  // 오류가 발생함.

/*
    * C언어는 대소문자를 구분합니다.
        C언어에서 변수나 함수의 이름을 작성할 때나 키워드나 예약어 등을 사용할 때는 대소문자를 정확히 구분하여 사용해야 합니다.
*/
//Ex6)
printf("C언어"); // 정상적으로 출력됨.
//Printf("C언어")  // 오류가 발생함.
/*
    * C언어는 자유 형식(free-format)을 허용합니다.
        C언어에서는 문법만 맞으면 여러 개의 명령문을 한 줄에 쓸 수도 있고, 하나의 명령문을 여러 줄에 나누어 쓸 수도 있습니다.
        하지만 프로그램의 구조를 한눈에 파악할 수 있도록, 될 수 있으면 들여쓰기 등을 잘 활용해 보기 좋게 작성하는 것이 좋습니다.
        따라서 다음 두 예제는 정확히 같은 동작을 수행할 것입니다.
*/
//Ex6)
int func() { printf("C언어는 재밌어요!"); }
//Ex7)
int func()
{
    printf("C언어는 재밌어요!");
}

/*
        하지만 코드의 가독성을 위해 두 번째 예제처럼 적절한 들여쓰기를 하여 코드를 작성하는 것이 좋습니다.

    * 주석(comments)
        주석은 코드에 대한 이해를 돕는 설명을 적거나 디버깅을 위해 작성합니다.
        C언어 주석의 장점은 프로그램 내의 어디에나 올 수 있다는 점입니다.
 C언어의 한 줄 주석은 시작위치에 //을 사용하고, 여러 줄 주석은 \/*로 시작해서 반드시 *\/ 로 끝나야 합니다.
*/

//Ex7)
// 한 줄 주석

/* 여러
   줄
   주석 */

//다음 예제는 여러 줄 주석 안에 또 다른 한 줄 주석을 중첩해서 삽입하는 예제입니다.

//Ex8)
/* 여러 줄
    // 이렇게 두 줄 주석 안에 또 다른 한 줄 주석을 삽입할 수 있습니다.
주석입니다. */

/*
        위의 예제처럼 C언어에서는 여러 줄 주석 안에 또 다른 한 줄 주석은 삽입할 수 있습니다.
        하지만 다음 예제처럼 여러 줄 주석 안에 또 다른 여러 줄 주석은 중첩해서 삽입할 수 없습니다.
 */

//Ex9)
//① /* 여러 줄
//②    /* 또 다른 여러 줄 주석입니다. */
//③ 주석입니다. */
    
 /*
        위의 예제처럼 여러 줄 주석 안에 또 다른 여러 줄 주석을 삽입하면, ②번 라인에서 삽입한 주석의 종료 기호(*\/)를 ①번 라인에서 시작한 첫 번째 주석이 자신의 종료 기호(*\/)로 잘못 인식하게 됩니다.
        따라서 위 예제의 ③번 라인은 주석으로 인식되지 못하고, 컴파일 시 오류가 발생하게 됩니다.
        그러므로 C언어에서 여러 줄 주석은 절대로 중첩해서 사용해서는 안 됩니다.
        다음 예제는 앞서 살펴본 예제에 여러 주석을 추가한 예제입니다.
*/

//Ex10)
#include <stdio.h>

#define TEXT "Welcome to C Programming!!"

/* 여기서부터 main() 함수가 시작됨.
   작성자 : 홍길동 */
int main()
{
    printf(TEXT); // printf() 함수는 인수로 전달받은 데이터를 출력해주는 함수임.
    return 0;     // main() 함수의 모든 명령문을 수행한 후에는 0을 반환함.
}

