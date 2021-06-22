"#include <iostream>",
"#include <string>",
"#include <vector>",
"#include <algorithm>",
"#include <sstream>",
"#include <queue>",
"#include <deque>",
"#include <bitset>",
"#include <iterator>",
"#include <list>",
"#include <stack>",
"#include <map>",
"#include <set>",
"#include <functional>",
"#include <numeric>",
"#include <utility>",
"#include <limits>",
"#include <time.h>",
"#include <math.h>",
"#include <stdio.h>",
"#include <string.h>",
"#include <stdlib.h>",
"#include <assert.h>",
" ",
"using namespace std;",
" ",
"#define SCD(t) scanf(\"%d\",&t)",
"#define SCLD(t) scanf(\"%ld\",&t)",
"#define SCLLD(t) scanf(\"%lld\",&t)",
"#define SCC(t) scanf(\"%c\",&t)",
"#define SCS(t) scanf(\"%s\",t)",
"#define SCF(t) scanf(\"%f\",&t)",
"#define SCLF(t) scanf(\"%lf\",&t)",









"#define MEM(a, b) memset(a, (b), sizeof(a))",

"#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)",
"#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)",
"#define REP(i, j) FOR(i, 0, j, 1)",
"#define RREP(i, j) RFOR(i, j, 0, 1)",

"#define all(cont) cont.begin(), cont.end()",
"#define rall(cont) cont.end(), cont.begin()",

"#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)",

"#define IN(A, B, C) assert( B <= A && A <= C)",
"#define MP make_pair",
"#define PB push_back",
"#define INF (int)1e9",
"#define EPS 1e-9",
"#define PI 3.1415926535897932384626433832795",
"#define MOD 1000000007",
"#define read(type) readInt<type>()",

"const double pi=acos(-1.0);",

"typedef pair<int, int> PII;",
"typedef vector<int> VI;",
"typedef vector<string> VS;",
"typedef vector<PII> VII;",
"typedef vector<VI> VVI;",
"typedef map<int,int> MPII;",
"typedef set<int> SETI;",
"typedef multiset<int> MSETI;",
"typedef long int int32;",
"typedef unsigned long int uint32;",
"typedef long long int int64;",
"typedef unsigned long long int  uint64;",
" ",
"template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }",
"template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }",
" ",
"template <typename T> inline void write(T x)",
"{",
	"int i = 20;",
	"char buf[21];",
	"// buf[10] = 0;",
	"buf[20] = '\n';",

	"do",
	"{",
		"buf[--i] = x % 10 + '0';",
		"x/= 10;",
	"}while(x);",
	"do",
	"{",
		"putchar(buf[i]);",
	"} while (buf[i++] != '\n');",
"}",
" ",
"template <typename T> inline T readInt()",
"{",
	"\tT n=0,s=1;",
	"\tchar p=getchar();",
	"\tif(p=='-')",
		"\t\ts=-1;",
	"\twhile((p<'0'||p>'9')&&p!=EOF&&p!='-')",
		"\t\tp=getchar();",
	"\tif(p=='-')",
		"\t\ts=-1,p=getchar();",
	"\twhile(p>='0'&&p<='9') {",
		"\t\tn = (n<< 3) + (n<< 1) + (p - '0');",
		"\t\tp=getchar();",
	"}",

	"return n*s;",
"}",








"// #define DEBUG",
" ",
"#ifdef DEBUG",
" ",
    "\t#define debug(args...)     (Debugger()) , args",
" ",
    "\tclass Debugger",
    "\t{",
        "\t\tpublic:",
        "\t\tDebugger(const std::string& _separator = " - ") :",
        "\t\tfirst(true), separator(_separator){}",
" ",
        "\t\ttemplate<typename ObjectType> Debugger& operator , (const ObjectType& v)",
        "\t\t{",
            "\t\t\tif(!first)",
                "\t\t\t\tstd:cerr << separator;",
            "\t\t\tstd::cerr << v;",
            "\t\t\tfirst = false;",
            "\t\t\treturn *this;",
        "\t\t}",
        "\t\t~Debugger() {  std:cerr << endl;}",
" ",
        "\t\tprivate:",
        "\t\tbool first;",
        "\t\tstd::string separator;",
    "\t};",
" ",
"#else",
    "\t#define debug(args...)",                  // Just strip off all debug tokens
"#endif",
" ",
"void pre(){",
	"\tios_base::sync_with_stdio(false);",
	"\tcin.tie(0);cout.tie(0);",
" ",
	"\t#ifndef ONLINE_JUDGE",
        "\t\tfreopen("input.txt","r",stdin);",
        "\t\tfreopen("output.txt","w",stdout);",
	"\t#endif",
"}",

int main()
{
	pre();
	int tc;
	tc = read(int);
	while(tc--){
		// write(tc);
	}
	return 0;
}