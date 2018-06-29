# CORTEX-A9 PERI DRIVER CODE
# VERSION 2.0
# ATHUOR www.dev.hqyj.com
# MODIFY DATE
# 2014.05.28  Makefile
# shell解释器路径
SHELL=C:/Windows/System32/cmd.exe
# 交叉编译器型号
CROSS_COMPILE = arm-none-eabi-
# 工程文件名
NAME = main
#=============================================================================#
# CFLAGS
# -g 可调试
# -O0 优化级别为0（不进行优化）
# -mabi=apcs-gnu 使用ARM PROCEDUCE CALL STANDARD，函数调用寄存器使用标准
# -mfpu=neon 硬件浮点单元
# -mfloat-abi=softfp 
# -fno-builtin表示不要使用编译器中默认的一些简单的内建函数
# 这里是因为我们重写了printf（使用了puts putc等等,将输出指定到串口上，输出到终端上）
# 如果不使用这个编译选项，printf的输出结构将输出到tty上
# 也在我们的开发板上并没有这么一个用法。
# -nostdinc 不要在标准系统目录中寻找头文件.只搜索'-I'选项指定的目录(以及当前目录,如果合适).
CFLAGS += -g   -O0  -mabi=apcs-gnu -mfpu=neon -mfloat-abi=softfp  -fno-builtin \
			-nostdinc  -I ./common/inc -I ./lib/inc
# 目标连接器
LD	= $(CROSS_COMPILE)ld
# 目标编译器
CC	= $(CROSS_COMPILE)gcc
# 目标复制命令生成二进制文件
OBJCOPY = $(CROSS_COMPILE)objcopy
# 目标倾倒命令（有点望文生义了）用来创建一个反汇编代码来检查生成的目标文件
OBJDUMP = $(CROSS_COMPILE)objdump
#============================================================================#
# wildcard : 扩展通配符
# notdir ： 去除路径
# patsubst ：替换通配符
# .S是支持gnu的汇编语法的文件，.s是只支持标准汇编的语法的文件
# 将start、common/src、/lib/src以及当前目录下的.S .c文件展出
# 展出的文件都带路径，并以空格做分隔符
OBJSss 	:= $(wildcard start/*.S) $(wildcard common/src/*.S) $(wildcard *.S)\
		   $(wildcard start/*.c) $(wildcard common/src/*.c) $(wildcard *.c)\
		   $(wildcard lib/src/*.c) $(wildcard lib/src/*.S)
# 这两步其实是将OBJSss展开的文件全部替换成.o后缀名，用来表示目标文件名
OBJSs  	:= $(patsubst %.S,%.o,$(OBJSss))
OBJS 	:= $(patsubst %.c,%.o,$(OBJSs))
#============================================================================#
# all：是默认的终极目标，当我们执行make的时候，他就会去执行make all
# 当在整个Makefile中没有all的时候，一个目标标号就成了all（终极目标）
# 当执行all的时候，首先将clean，然后需要依赖文件$(OBJS),这里比如a.o b.o c.o d.o
# 而在工程目录下，有a.c b.c c.s d.s ，然后这个时候当然是需要a.o了
# 发现在目标文件中去寻找a.S ，发现a.s不存在，发现存在a.c
# 便使用$(CC) $(CFLAGS) -c -o a.o a.c 来编译来生成a.o了

# 将所有的.S文件都编译成.o文件
%.o: %.S 
	$(CC) $(CFLAGS) -c -o  $@ $<
# 将所有的.c文件都编译成.o文件
%.o: %.c
	$(CC) $(CFLAGS) -c -o  $@ $<
# 删除所有的.o文件并将所有的.S和.o文件编译成对应的.o文件
# 然后将这些文件通过map.lds连接脚本生成elf文件
# 将生成的elf文件转换成二进制文件
# 最后将elf反汇编生成dis文件
all:clean  $(OBJS)
	$(LD)  $(OBJS) -T map.lds -o $(NAME).elf
	$(OBJCOPY)  -O binary  $(NAME).elf $(NAME).bin 
	$(OBJDUMP) -D $(NAME).elf > $(NAME).dis 
#============================================================================#
clean:
	rm -rf $(OBJS) *.elf *.bin *.dis *.o
#============================================================================#