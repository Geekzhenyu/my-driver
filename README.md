# 本项目目标：

**通过淘宝或其他购物平台，提供的源代码进行移植，并将遇到的问题进行总结**

硬件：

- STM32F103C8T6
- STM32F407ZGT6

软件：

- Clion
- STM32CubeMX



外设：

- OLED(SSD1306)



# 问题

## 1.Clion中如何替换代码

使用快捷键 Ctrl + Shift + R（Windows/Linux）或 Command + Shift + R（Mac）来打开 "Find and Replace" 对话框。 

在 "Find" 输入框中输入你要替换的代码片段，然后在 "Replace" 输入框中输入替换后的代码。

点击 "Replace" 按钮来逐个替换每个匹配项，或点击 "Replace All" 按钮一次性替换所有匹配项。

## 2. 在直接移植韦东山提供的OLED驱动时，出现ascii_font重定义

**将ascii_font.c文件改为ascii_font.h文件**

出现错误的原因：

在driver_oled.c中我们引用了ascii_font.c，导致ascii_font.c编译了两次。所以去掉一次就行