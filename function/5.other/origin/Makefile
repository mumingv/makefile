val-in-file := test-file
override val-override := test-override

all:
	@echo $(origin not-define)    # not-define 没有定义
	@echo $(origin CC)            # CC 是Makefile默认定义的变量
	@echo $(origin PATH)          # PATH 是 bash 环境变量
	@echo $(origin val-in-file)   # 此Makefile中定义的变量
	@echo $(origin val-in-cmd)    # 这个变量会加在 make 的参数中
	@echo $(origin val-override)  # 此Makefile中定义的override变量
	@echo $(origin @)             # 自动变量, 具体前面的介绍
