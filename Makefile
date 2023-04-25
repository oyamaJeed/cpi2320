# TARGET NAME
TARGET := display2


# OBJECT FILES
OBJS := display2.o test2.o


# SOURCE FILES　　（OBJSの.oを.cに置換え）
SRCS := $(OBJS:%.o=%.c)


# COMPILER TYPE
CC := gcc


# COMPILER OPTION
CFLAGS := -g -Wall -Wextra -DDEBUG=1
# オプションの例
# -g: デバッグ情報付与
# -Wall: 全ての警告を表示
# -lm: 三角関数などの算術ライブラリlabm.aをリンク
# -pthread: pthreadsライブラリをリンク
# -D: definition for '#if DEBUG=1'


# DYNAMIC LIBRARY
LDFLAGS := -lpthread


# MAKE ALL (PHONY TARGET)
.PHONY: all
all: $(TARGET)


# LINK OBJECTS
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)
# $@: 実行ファイル名（ターゲットファイル名）


# COMPILE SOURCES
./%.o: ./%.c
	$(CC) $(CFLAGS) -c $<
	gcc -shared display2.c -fPIC -o libdlink.so
	gcc -o test2 test2.c -L. -ldlink
	export LD_LIBRARY_PATH="/home/meit2320/cpi2320"
	
# サフィックスルール'.c.o: '（$^には～.cファイルを指定し同じ名前の～.oファイルを作成）
# などもよく使われます. 


# UPDATE HEADER FILE
#$(OBJS): myTCPSv.h


# CLEAN FILES (PHONY TARGET)
.PHONY: clean
clean: 
	rm -f *.o *~ $(TARGET)

