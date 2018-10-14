# 图片格式（Image format）科普

图片格式是计算机储存数字图像的标准化手段。图像文件以属于一种格式的数据组成，以供计算机展示与输出。

图片格式主要分为光栅格式（*Raster formats*)和矢量格式(*Vector format*)以及复合格式（*Compound formats*）。

## Raster formats
光栅格式有JPEG，Exif，TIFF，GIF，BMP，PNG，PPM, PGM, PBM, and PNM，WebP，HDR raster formats，HEIF，BAT，BPG等格式，这里我们主要介绍常见的几种格式。

* ### TIFF    
标签图像文件格式（中文简称TIF、外语简称TIFF、外语全称：TagImage FileFormat）是由Aldus和Microsoft公司为桌上出版系统研制开发的一种较为通用的图像文件格式。 TIFF格式灵活易变，它又定义了四类不同的格式：TIFF-B适用于二值图像：TIFF-G适用于黑白灰度图像；TIFF-P适用于带调色板的彩色图像：TIFF-R适用于RGB真彩图像。  
TIFF是现存图像文件格式中最复杂的一种，它具有扩展性、方便性、可改性

* ### BMP  
位图（外语简称：BMP、外语全称：BitMaP）是一种与硬件设备无关的图像文件格式，使用非常广。它采用位映射存储格式，除了图像深度可选以外，不采用其他任何压缩，因此，BMP文件所占用的空间很大。BMP文件的图像深度可选lbit、4bit、8bit及24bit。BMP文件存储数据时，图像的扫描方式是按从左到右、从下到上的顺序。  
Windows 位图文件格式与其他 Microsoft Windows 程序兼容。它不支持文件压缩，也不适用于 Web 页。 从总体上看，Windows 位图文件格式的缺点超过了它的优点。为了保证照片图像的质量，请使用 PNG 、JPEG、TIFF 文件。BMP 文件适用于 Windows 中的墙纸。其优点是结构简单，在Windows程序中广泛接受。
* ### GIF  
图形交换格式（外语简称：GIF，外语全称：Graphics Interchange Format），是CompuServe公司在 1987年开发的图像文件格式。GIF文件的数据，是一种基于LZW算法的连续色调的无损压缩格式。其压缩率一般在50%左右，它不属于任何应用程序。几乎所有相关软件都支持它，公共领域有大量的软件在使用GIF图像文件。  
因为GIF文件使用LZW无损压缩（一种在大区域单一颜色时更有效的方式），所以最适合存储颜色很少的图形，例如简单的图表，形状，徽标和卡通风格的图像。
* ### JPEG  
JPEG（Joint Photographic Expert Group）也就是我们熟知的jpg，~~表情包黑恶势力聚集地~~，是最常用的图像文件格式，由一个软件开发联合会组织制定，是一种有损压缩格式，能够将图像压缩在很小的储存空间，图像中重复或不重要的资料会被丢失，因此容易造成图像数据的损伤。尤其是使用过高的压缩比例，将使最终解压缩后恢复的图像质量明显降低，如果追求高品质图像，不宜采用过高压缩比例。   
但是JPEG压缩技术十分先进，它用有损压缩方式去除冗余的图像数据，在获得极高的压缩率的同时能展现十分丰富生动的图像，换句话说，就是可以用最少的磁盘空间得到较好的图像品质。而且 JPEG是一种很灵活的格式，具有调节图像质量的功能，允许用不同的压缩比例对文件进行压缩，支持多种压缩级别，压缩比率通常在10：1到40：1之间，压缩比越大，品质就越低；相反地，压缩比越小，品质就越好。  
JPEG格式是目前网络上最流行的图像格式，光盘读物上也经常有它的身影，应用十分广泛。
* ### PNG  
便携式网络图形（外语简称PNG、外语全称：Portable Network Graphics），是网上接受的最新图像文件格式。PNG能够提供长度比GIF小30%的无损压缩图像文件。它同时提供 24位和48位真彩色图像支持以及其他诸多技术性支持。由于PNG非常新，所以并不是所有的程序都可以用它来存储图像文件，但Photoshop可以处理PNG图像文件，也可以用PNG图像文件格式存储。  
与JPEG相比，当图像具有大而均匀着色的区域时，PNG表现优异。即使对于照片而言，JPEG通常是最终的选择，因为其压缩技术通常会产生较小的文件，但由于PNG无损压缩，其仍然非常适合在编辑过程中存储图像。

## Vector formats
矢量格式有CGM，Gerber format，SVG等格式。矢量格式相比光栅格式而言有更大的灵活性，使用数学公式而不是单独的色块构建,非常适合创建经常需要调整大小的图形。
![](https://modassicmarketing.com/wp-content/uploads/2013/07/vector-vs-raster.png)

* ### AI
Adobe Illustrator Artwork (AI)适用于Adobe公司的ILLUSTRATOR输出格式,是Adobe System专门开发的一种用于表示单页矢量图片的格式。  
AI也是一种分层文件，每个对象都是独立的，他们具有各自的属性，如大小、形状、轮廓、颜色、位置等。以这种格式保存的文件便于修改，这种格式文件可以在任何尺寸大小下按最高分辨率输出。

## Compound formats
复合格式同时含有像素和矢量的数据，可看作前两种格式的结合。最常用的就是PDF(Portable Document Format)格式。

* ### PDF
![Adobe PDF图标](https://upload.wikimedia.org/wikipedia/commons/thumb/7/7d/Adobe_PDF.svg/96px-Adobe_PDF.svg.png)  
便携式文档格式是由Adobe Systems用于与应用程序、操作系统、硬件无关的方式进行文件交换所发展出的文件格式。PDF文件以PostScript语言图象模型为基础，无论在哪种打印机上都可保证精确的颜色和准确的打印效果，即PDF会忠实地再现原稿的每一个字符、颜色以及图象。  
可移植文档格式是一种电子文件格式。这种文件格式与操作系统平台无关，也就是说，PDF文件不管是在Windows，Unix还是在苹果公司的Mac OS操作系统中都是通用的。这一特点使它成为在Internet上进行电子文档发行和数字化信息传播的理想文档格式。越来越多的电子图书、产品说明、公司文告、网络资料、电子邮件在开始使用PDF格式文件。  
Adobe公司设计PDF文件格式的目的是为了支持跨平台上的，多媒体集成的信息出版和发布，尤其是提供对网络信息发布的支持。为了达到此目的， PDF具有许多其他电子文档格式无法相比的优点。PDF文件格式可以将文字、字型、格式、颜色及独立于设备和分辨率的图形图像等封装在一个文件中。该格式文件还可以包含超文本链接、声音和动态影像等电子信息，支持特长文件，集成度和安全可靠性都较高。  
对普通读者而言，用PDF制作的电子书具有纸版书的质感和阅读效果，可以逼真地展现原书的原貌，而显示大小可任意调节，给读者提供了个性化的阅读方式。

#### 参考及引用资料
##### [百度百科-图形格式](https://baike.baidu.com/item/%E5%9B%BE%E7%89%87%E6%A0%BC%E5%BC%8F#17)  
##### [Wikipedia-image formats](https://en.wikipedia.org/wiki/Image_file_formats)  
##### [VECTOR, RASTER, JPG, EPS, PNG – WHAT’S THE DIFFERENCE?](https://modassicmarketing.com/understanding-image-file-types)
