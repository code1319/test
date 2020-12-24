//
//  001git常用操作命令.h
//  test
//
//  Created by 1319 on 2020/12/3.
//  Copyright © 2020 Apple. All rights reserved.
//

#ifndef 001git常用操作命令
#define 001git常用操作命令


#endif /* 001git常用操作命令_h */








-------------------------------------------------

1、把git上的代码clone到本地

$ git clone http:xxxx(地址，可以http也可以ssh)

2、clone到本地以后、使用branch -a 查看远程所有分支

$  git branch -a

3、如若你有分支：master branch1 branch2 ，使用checkout用来切换分支。还可以用第2条指令去创建本地分支目录和远程的保持一致，并且切换远程分支到本地分支目录

$ git checkout branch1

$ git checkout -b branch1 origin/branch1

4、在本地修改完代码后、保存所有的项目

$ git add .

5、保存完成后可以提交到本地

$ git commit -m '提交说明'

6、最后提交git服务器，要加上分支的名字，默认master目录不加。

$ git push origin branch1



