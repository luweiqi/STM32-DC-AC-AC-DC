# STM32-DC-AC-AC-DC
2018年湖北省电赛程序，前面的DC-AC稳压和变频能工作，但是变频的时候会随机性的导致MCU跑飞，尚不清楚原因,所以当时亡羊补牢加了看门狗。我变频是通过改变数组来实现的，没有改变SPWM的频率。

输出的AC通过变压器连接后面的AC-DC和boost电路，这个就很戏剧了。。。
前期老师让我搞APFC，跟踪电流控制电感电流的相位。花了很长时间到办公室跟他讨论，但是花了2天时间写程序没能很好的实现，最后一天的下午觉得不行了，就变成桥式整流了，最后的boost的稳压程序都没来及调试好。。。很可惜啊，最后那一下午老师完全变了一个人，之前对我们队伍很关注，那一天就不管不问了。不过想一想这也是我的错。

总之这个程序后面的AC-DC 和boost程序不管用。不能稳压输出。但前面的可以给刚刚入门的参考一下。
