# fscript_lua

> 将 fscript 代码转换成 lua 代码，并用 lua 的虚拟机执行。

本项目主要目的有几个：

* 使用 lua 提升 fscript 的性能 (lua 本身比较快，而且支持 JIT，速度比 fscript 快很多）。

* AWBlock 目前生成 fscript 代码，直接生成 lua 代码也是可以的。但是存在三个问题：
    * 从 lua 反向生成 AWBlock 需要重写一个 lua 的 parser。
    * 从 lua 反向生成 AWBlock 部分信息会丢失，为了解决这个问题，需要对 lua 本身做不少扩展。
    * fscript 的扩展函数需要为 lua 重写一套。

* 调试时仍然使用 fscript 的调试器，不需要再为 lua 适配一次。

已知问题：
 * lua 不支持 continue。可选的解决方案有几个：
    * 扩展 lua 支持 continue
    * 如果存在 continue 仍然使用 fscript 执行。
 * lua 的数据类型比较单一，比如缺少 64 位整数的支持。
 * require 目前不支持用 lua 运行。

## 准备

1. 获取 tkc 并编译

```
git clone https://github.com/zlgopen/fscript_lua.git
cd fscript_lua; scons; cd -
```

> 注意：tkc 和 fscript_lua 并列放在同一级目录。

* 编译 PC 版本

```
scons
```

* 编译 LINUX FB 版本

```
scons LINUX_FB=true
```

> 完整编译选项请参考 [编译选项](https://github.com/zlgopen/awtk-widget-generator/blob/master/docs/build_options.md)

## 运行

```
./bin/runFScript testcases/array2.js
```

## 性能对比

* 直接用 fscript 运行

```
../tkc/bin/runFScript @testcases/time.js
```

* 使用 lua 引擎运行

```
./bin/runFScript testcases/time.js
```

* 直接运行 lua 代码

```
./bin/runFScript testcases/time.lua
```

> 总的来说，

* 脚本本身，比如表达式计算、条件和循环等，加速之后速度可以快一个到两个数量级。

* 调用原生函数，则性能有微小损失，主要是参数和返回值的数据类型转换。

> 本文以 Linux/MacOS 为例，Windows 可能会微妙差异，请酌情处理。
