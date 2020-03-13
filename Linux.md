#linux学习笔记
#####在接到任务后跟上一次一样做出了学习计划。
>第一天通过百度知乎了解linux相关知识以及看一个3h的速学教程。并下载虚拟机和Linux系统。
第二天开始进行实践环节，安装虚拟机和Linux系统。但是这部分超出了本人的时间估计，特别是到第二天临晨一点钟，还无法完成远程ssh访问Linux系统。
一开始以为是网络问题，调试好网络后问题仍然未解决，然后打开ssh和关闭防火墙后问题依然存在，于是乎只能问师兄，目前问题仍未得到解决。（网络上倒是有不少的解决方法，但可能是兼容性问题一直没能成功
）

###linux基本命令
>pwd 打印当前工作目录
cd 进入工作路径：相对路径 cd ..(向上跳） 绝对路径 cd /xxx/xxx/xxx
mkdir 建立空文件夹
ls 平铺 ll 详细列表 
vi 编辑文本（i进入写入模式，esc退出写)，
：wq保存并退出，：q退出
vim 高级编辑 （与vi一样，若文件不存在可创建文件）
touch 创建空文件
cat 查看文件内容
head 默认查看前十行 -数字：查看前几行
tail 默认查看后十行 -数字：查看后几行
tailf 动态显示文件内容后n行 （常用与显示tomcat日志文件功能）
echo ‘内容’>>文件名
ifconfig 打印网卡信息
reboot 重启
Tar zxvf+文件名 解压文件  
conmmand c 中断
cp -r 复制文件夹
mv 原文件 >新文件—重命名功能
rm  删除
rm -rf 删除文件
rm -r 删除目录
rm -f 强制删除
clear 清屏
###几个重要的系统路径
>etc 存放系统配置文件目录
root 最高权限的文件夹
home 除了root以外以用户名为名建立的文件夹
usr 安装软件的文件夹

###几条特殊指令
>systemctl stop firewalld.service 停用防火墙
service sshd start 开启ssh
