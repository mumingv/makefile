SRCS := programA.c programB.c programC.c

target1: TARGET1-SRCS := programD.c
target1:
	@echo "SRCS: " $(SRCS)
	@echo "SRCS: " $(TARGET1-SRCS)

target2:
	@echo "SRCS: " $(SRCS)
	@echo "SRCS: " $(TARGET1-SRCS)

# 执行命令：
# make target1
# make target2
