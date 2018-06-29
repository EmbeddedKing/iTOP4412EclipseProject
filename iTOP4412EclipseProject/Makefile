# CORTEX-A9 PERI DRIVER CODE
# VERSION 2.0
# ATHUOR www.dev.hqyj.com
# MODIFY DATE
# 2014.05.28  Makefile
# shell������·��
SHELL=C:/Windows/System32/cmd.exe
# ����������ͺ�
CROSS_COMPILE = arm-none-eabi-
# �����ļ���
NAME = main
#=============================================================================#
# CFLAGS
# -g �ɵ���
# -O0 �Ż�����Ϊ0���������Ż���
# -mabi=apcs-gnu ʹ��ARM PROCEDUCE CALL STANDARD���������üĴ���ʹ�ñ�׼
# -mfpu=neon Ӳ�����㵥Ԫ
# -mfloat-abi=softfp 
# -fno-builtin��ʾ��Ҫʹ�ñ�������Ĭ�ϵ�һЩ�򵥵��ڽ�����
# ��������Ϊ������д��printf��ʹ����puts putc�ȵ�,�����ָ���������ϣ�������ն��ϣ�
# �����ʹ���������ѡ�printf������ṹ�������tty��
# Ҳ�����ǵĿ������ϲ�û����ôһ���÷���
# -nostdinc ��Ҫ�ڱ�׼ϵͳĿ¼��Ѱ��ͷ�ļ�.ֻ����'-I'ѡ��ָ����Ŀ¼(�Լ���ǰĿ¼,�������).
CFLAGS += -g   -O0  -mabi=apcs-gnu -mfpu=neon -mfloat-abi=softfp  -fno-builtin \
			-nostdinc  -I ./common/inc -I ./lib/inc
# Ŀ��������
LD	= $(CROSS_COMPILE)ld
# Ŀ�������
CC	= $(CROSS_COMPILE)gcc
# Ŀ�긴���������ɶ������ļ�
OBJCOPY = $(CROSS_COMPILE)objcopy
# Ŀ���㵹����е����������ˣ���������һ������������������ɵ�Ŀ���ļ�
OBJDUMP = $(CROSS_COMPILE)objdump
#============================================================================#
# wildcard : ��չͨ���
# notdir �� ȥ��·��
# patsubst ���滻ͨ���
# .S��֧��gnu�Ļ���﷨���ļ���.s��ֻ֧�ֱ�׼�����﷨���ļ�
# ��start��common/src��/lib/src�Լ���ǰĿ¼�µ�.S .c�ļ�չ��
# չ�����ļ�����·�������Կո����ָ���
OBJSss 	:= $(wildcard start/*.S) $(wildcard common/src/*.S) $(wildcard *.S)\
		   $(wildcard start/*.c) $(wildcard common/src/*.c) $(wildcard *.c)\
		   $(wildcard lib/src/*.c) $(wildcard lib/src/*.S)
# ��������ʵ�ǽ�OBJSssչ�����ļ�ȫ���滻��.o��׺����������ʾĿ���ļ���
OBJSs  	:= $(patsubst %.S,%.o,$(OBJSss))
OBJS 	:= $(patsubst %.c,%.o,$(OBJSs))
#============================================================================#
# all����Ĭ�ϵ��ռ�Ŀ�꣬������ִ��make��ʱ�����ͻ�ȥִ��make all
# ��������Makefile��û��all��ʱ��һ��Ŀ���žͳ���all���ռ�Ŀ�꣩
# ��ִ��all��ʱ�����Ƚ�clean��Ȼ����Ҫ�����ļ�$(OBJS),�������a.o b.o c.o d.o
# ���ڹ���Ŀ¼�£���a.c b.c c.s d.s ��Ȼ�����ʱ��Ȼ����Ҫa.o��
# ������Ŀ���ļ���ȥѰ��a.S ������a.s�����ڣ����ִ���a.c
# ��ʹ��$(CC) $(CFLAGS) -c -o a.o a.c ������������a.o��

# �����е�.S�ļ��������.o�ļ�
%.o: %.S 
	$(CC) $(CFLAGS) -c -o  $@ $<
# �����е�.c�ļ��������.o�ļ�
%.o: %.c
	$(CC) $(CFLAGS) -c -o  $@ $<
# ɾ�����е�.o�ļ��������е�.S��.o�ļ�����ɶ�Ӧ��.o�ļ�
# Ȼ����Щ�ļ�ͨ��map.lds���ӽű�����elf�ļ�
# �����ɵ�elf�ļ�ת���ɶ������ļ�
# ���elf���������dis�ļ�
all:clean  $(OBJS)
	$(LD)  $(OBJS) -T map.lds -o $(NAME).elf
	$(OBJCOPY)  -O binary  $(NAME).elf $(NAME).bin 
	$(OBJDUMP) -D $(NAME).elf > $(NAME).dis 
#============================================================================#
clean:
	rm -rf $(OBJS) *.elf *.bin *.dis *.o
#============================================================================#