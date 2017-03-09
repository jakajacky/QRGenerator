//
//  QRCodeGenetator.h
//  iMeeting
//
//  Created by xqzh on 17/3/9.
//  Copyright © 2017年 Yang Yu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QRCodeGenerator : NSObject

+ (UIImage *)qrImageForString:(NSString *)string imageSize:(CGFloat)size;

@end
