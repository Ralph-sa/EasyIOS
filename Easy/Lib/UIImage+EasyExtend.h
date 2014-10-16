//
//  UIImage+ImageProcessing.h
//
//  Created by Vincent Saluzzo on 28/05/12.
//  Copyright (c) 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (EasyExtend)
- (UIImage *) toGrayscale;
- (UIImage *) tintWithColor:(UIColor *)tintColor;
+ (UIImage *) imageWithUrl:(NSString *)url;
+ (UIImage *)imageWithColor:( UIColor  *)color size:( CGSize )size;
- (UIImage *)imageByScalingToMaxSize;
- (UIImage *)imageByScalingAndCroppingToSize:(CGSize)targetSize;
@end
