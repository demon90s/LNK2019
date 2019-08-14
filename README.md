# LNK2019 example and solution

使用 vs2015 打开解决方案，链接时将会失败，并提示 LNK2019 链接错误，原因是没找到符号。

具体的提示：

```
LNK2019	unresolved external symbol "public: void __cdecl Bar::Init(class Foo const &)" (?Init@Bar@@QEAAXAEBVFoo@@@Z) referenced in function main
```

这是一个比较罕见的情况，我使用了错误的前置声明，导致了这个错误。

即把 `class Foo;`  声明成了 `struct Foo;`。

但如果把 Bar.h 放在 Foo.h 前面，这个链接错误又会消失。因此我觉得这是一个比较罕见的情况了。