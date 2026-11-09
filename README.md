# c-practice

![chouchou](.image/chouchou.gif)

> 我的 C 语言练习记录 · My C language practice log

一名信息安全专业学生，用这个仓库记录自己的 C 语言学习过程。
An information security student, using this repository to document the journey of learning C.

## 📖关于这个仓库 · About

这个仓库主要保存 C 语言课程练习、课后作业和语法实验，内容包括：

- 输入输出与格式化
- 变量、数据类型和类型转换
- 算术运算与运算符
- 条件分支和循环
- 数组与简单的过程模拟
- ASCII 图形输出
- 整数表示、溢出和类型边界实验

代码以独立的小程序为主，适合按主题复习和查漏补缺。

## 📂目录结构 · Repository layout

```text
c-practice/
├── .image/                # README 使用的图片
├── .vscode/               # 本地 VS Code 编译与调试配置
├── Cyuandaima/            # C 源程序
├── .gitignore
└── README.md
```

> `Cyuandaima` 是早期命名。后续如果需要重新组织，可以再考虑改成 `src/` 或按章节分目录。

## 练习索引 · Exercises

### 入门与输入输出

| 文件 | 内容 |
| --- | --- |
| [`HelloWorld.c`](Cyuandaima/HelloWorld.c) | 第一个 C 程序，输出 `Hello,World!` |
| [`HelloWorld_V2.c`](Cyuandaima/HelloWorld_V2.c) | 教材示例：连续输出三行文本 |
| [`huanhang.c`](Cyuandaima/huanhang.c) | 字符串拼接、换行和续行写法 |
| [`shujvshuchu.c`](Cyuandaima/shujvshuchu.c) | 用十进制、八进制、十六进制和 `unsigned` 格式输出同一整数 |
| [`Youduiqi.c`](Cyuandaima/Youduiqi.c) | 使用字段宽度控制输出对齐 |
| [`supermario.c`](Cyuandaima/supermario.c) | 使用字符画输出 ASCII 图形 |

### 变量、类型与转换

| 文件 | 内容 |
| --- | --- |
| [`Leixing.c`](Cyuandaima/Leixing.c) | 使用 `sizeof` 查看基本数据类型占用的字节数 |
| [`zhengxin.c`](Cyuandaima/zhengxin.c) | 查看整数类型的取值范围与大小 |
| [`Yichu.c`](Cyuandaima/Yichu.c) | 观察同一组比特在有符号和无符号类型中的不同解释 |
| [`Booltest.c`](Cyuandaima/Booltest.c) | 整数和 `_Bool` 之间的转换 |
| [`Num.c`](Cyuandaima/Num.c) | 变量赋值与语句执行顺序练习 |
| [`suanshuzhuanhuan.c`](Cyuandaima/suanshuzhuanhuan.c) | 整数除法、浮点除法和隐式类型转换 |
| [`numtoASCII.c`](Cyuandaima/numtoASCII.c) | 把整数强制转换为字符后输出 |
| [`ASCIItonum.c`](Cyuandaima/ASCIItonum.c) | 输入字符并输出对应的 ASCII 数值 |
| [`xiangling.c`](Cyuandaima/xiangling.c) | `long double` 转换为整数时的截断实验 |

> `Yichu.c` 是故意用于观察溢出和有符号/无符号解释差异的实验，不应把其中的溢出行为直接用于普通程序。

### 算术运算

| 文件 | 内容 |
| --- | --- |
| [`AplusB.c`](Cyuandaima/AplusB.c) | 输入两个整数并输出和 |
| [`AxB.c`](Cyuandaima/AxB.c) | 输入两个整数并输出乘积 |
| [`AplusBxC.c`](Cyuandaima/AplusBxC.c) | 计算 `(A + B) * C` |
| [`AplusBzC.c`](Cyuandaima/AplusBzC.c) | 计算 `(A + B) / C` |
| [`AgeToDays.c`](Cyuandaima/AgeToDays.c) | 把年龄换算为天数 |
| [`FtoC.c`](Cyuandaima/FtoC.c) | 华氏温度转换为摄氏温度 |
| [`AZB.c`](Cyuandaima/AZB.c) | 两个浮点数相除并控制小数位数 |
| [`Chengzaili.c`](Cyuandaima/Chengzaili.c) | 将四个输入代入给定公式进行计算 |
| [`Jiadeathrate.c`](Cyuandaima/Jiadeathrate.c) | 根据两个输入计算百分比并输出百分号 |
| [`Pingjunfen.c`](Cyuandaima/Pingjunfen.c) | 计算三个数的平均值、舍入和不同精度输出 |
| [`zhengchu.c`](Cyuandaima/zhengchu.c) | 计算两个整数的商和余数 |
| [`circle.c`](Cyuandaima/circle.c) | 根据半径计算直径、周长和圆面积 |
| [`dianzu.c`](Cyuandaima/dianzu.c) | 计算两个电阻并联后的总电阻 |

### 条件与分支

| 文件 | 内容 |
| --- | --- |
| [`Panduan.c`](Cyuandaima/Panduan.c) | 判断整数为正数、负数或零 |
| [`jinjinyuehui.c`](Cyuandaima/jinjinyuehui.c) | 按输入编号进行多条件分支判断 |
| [`sanxuanyi.c`](Cyuandaima/sanxuanyi.c) | 读取三个整数并输出指定的输入项 |

### 循环、图形与数组

| 文件 | 内容 |
| --- | --- |
| [`FuhaoJinzita.c`](Cyuandaima/FuhaoJinzita.c) | 输出三层符号金字塔 |
| [`FuhaoLingXin.c`](Cyuandaima/FuhaoLingXin.c) | 使用字符组成平面符号图形 |
| [`fuhaojinzitashu.c`](Cyuandaima/fuhaojinzitashu.c) | 根据输入高度输出星号金字塔 |
| [`Shuixianhua.c`](Cyuandaima/Shuixianhua.c) | 枚举三位水仙花数 |
| [`qiuhepingjun.c`](Cyuandaima/qiuhepingjun.c) | 计算 `1` 到 `n` 的和与平均值 |
| [`leijia.c`](Cyuandaima/leijia.c) | 使用循环进行累加实验 |
| [`fentangguo.c`](Cyuandaima/fentangguo.c) | 使用数组模拟围成一圈分糖果的过程 |
| [`chaif.c`](Cyuandaima/chaif.c) | 拆分并输出一个三位整数的各位数字 |

### 个人信息练习

| 文件 | 内容 |
| --- | --- |
| [`Personal_imf.c`](Cyuandaima/Personal_imf.c) | 使用多条输出语句打印个人信息和浮点数 |

## ⚙️编译与运行 · Build and run

建议使用支持 C17 的 GCC，例如 MinGW-w64。

### Windows PowerShell

先创建输出目录：

```powershell
New-Item -ItemType Directory -Force build | Out-Null
```

编译任意一个练习，例如：

```powershell
gcc -std=c17 -Wall -Wextra -Wpedantic Cyuandaima\HelloWorld.c -o build\HelloWorld.exe
.\build\HelloWorld.exe
```

### Linux

```bash
mkdir -p build
gcc -std=c17 -Wall -Wextra -Wpedantic Cyuandaima/HelloWorld.c -o build/HelloWorld
./build/HelloWorld
```
（其实我看不懂这是什么意思）

可把文件名替换为表格中的其他 `.c` 文件。

## 学习计划 · Learning roadmap

当前练习以基础语法为主。下一阶段可以逐步加入：

- 函数与模块化
- 字符串与字符数组
- 指针与动态内存
- `struct`、`union` 和枚举
- 文件读写
- 多文件项目的编译与链接
- 使用调试器分析数组越界、未初始化变量和指针错误
- 使用 `gcc -fsanitize=address,undefined` 检查内存与未定义行为

## 💬反馈 · Feedback

如果发现错误或有改进建议，欢迎提出：

- ⭐在仓库中提交 Issue
- ⭐邮箱：1708321991@qq.com

---

⭐这个仓库用于持续记录学习过程，重点是理解概念、验证实验和保留踩坑记录。

此文档使用AI辅助编写，AI真是太好用了!!