# QRGenerator
基于libqrencode库的二维码生成器

##How to configure
####1、将文件拖入工程
####2、import "QRCodeGenerator.h"
##How to Use
```
UIImage *image = qrCodeImage = [QRCodeGenerator qrImageForString:interaction.qrContent imageSize:self.view.qRCoderImageView.frame.size.width];
[self.imageView setImage:qrCodeImage];
```
