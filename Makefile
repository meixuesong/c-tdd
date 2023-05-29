#有了这个dependency，就可以在根目录直接运行：make dependency，生成依赖图片了。其实也可以直接运行下面的命令
dependency:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graphImage.png

#每次在build/目录下运行cmake ..，都会自动先清空build目录。但是似乎不起作用。
prepare:
	rm -rf build
	mkdir build
	cd build