# **atm-project-by-c++/中国石油大学北京计算机21级c++课程大作业**
1. **实验平台**
    * Qt 5.9.1
2. **问题分析**
    * 采用C++面向对象的程序设计方法开发基于ATM的个人银行账户管理系统，根据大家的日常经验设计、实现以下功能（但不限于）：
(1)    管理个人账户Account（基类）基本信息，比如帐号、密码、姓名、性别、住址、电话、身份证号等，登录时进行帐号和密码验证；
(2)    账户的基本功能有新建、登录、存款、取款、余额查询、利息计算等，设计这些功能时注意实际使用中的有效性约束；
(3)    系统可以动态管理多个帐户；
(4)    帐户分为多种类型，如储蓄帐户Debit（存款有利息，不可透支）和信用卡帐户Credit（可以透支，存款无利息），后者还可以进一步划分消费等级，如普通账户和VIP账户等，另外还有兼具储蓄和透支功能的复合卡Compcard，使用继承、派生和多态等机制来设计；
(5)    将银行ATM设计成一个组合类，支持帐户的创建、撤销、登录和退出以及银行侧的统计、查询等管理功能；
(6)    为系统设计尽量完整、方便的输入输出界面，对输入信息实现初步的有效性检查，帐户信息可通过磁盘文件进行保存和读取；
(7)    可尝试使用图形化界面类库MFC或QT进行窗口形式的界面开发，以实现更丰富的信息显示和更直观的交互操作（加分项）。
3. **基本功能**
    * 系统中存在两种用户，一是面向非银行管理人员的普通用户，普通用户可以对自己的账户进行登录登出，存款取款，余额信息查询以及对非信用卡进行利息计算，二是面向银行管理员的管理员用户，管理员用户通过专用的账号密码进行登录，可以对用户的信息包括姓名、性别、电话、地址、身份证号、银行账号、银行密码、卡类型以及余额进行管理修改。

* 账户信息格式如下

| 姓名 | 性别 | 地址 | 身份证 | 账号 | 密码 | 卡类型 | 余额 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|张三|男|12345678901|昌平|123456789012345678|720220511181757000|debit/credit/compcard|1200|

* UML类图如下
![uml类图](https://github.com/lyy0709/atm-project-by-c-/blob/master/uml.png)

* 主流程图如下
![主流程图](https://github.com/lyy0709/atm-project-by-c-/blob/master/%E6%B5%81%E7%A8%8B%E5%9B%BE.png)
