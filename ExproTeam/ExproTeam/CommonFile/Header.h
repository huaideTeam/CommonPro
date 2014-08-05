//
//  Header.h
//  ExproTeam
//
//  Created by lichengfei on 14-8-5.
//  Copyright (c) 2014年 lichengfei. All rights reserved.
//

#ifndef ExproTeam_Header_h
#define ExproTeam_Header_h

#import "Hud.h"

#define IPHONE5                     ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define IOS7                        ([[[UIDevice currentDevice] systemVersion] doubleValue] >= 7.0 ? YES : NO )

#define SCREENWIDTH                 CGRectGetWidth([UIScreen mainScreen].applicationFrame)
#define SCREENHEIGHT                CGRectGetHeight([UIScreen mainScreen].applicationFrame)
/*
 
 字体，颜色
 
 */

#define FONT(parameter)     [UIFont systemFontOfSize:(parameter)]
#define BOLD(parameter)     [UIFont boldSystemFontOfSize:(parameter)]
#define COLOR(r,g,b)        [UIColor colorWithRed:(r)/255.f green:(g)/255.f blue:(b)/255.f alpha:1.f]


#define kStatueHeight ([[UIDevice currentDevice] systemVersion].floatValue >=7.0?20:0)

#define kFullWindowHeight [[UIScreen mainScreen] bounds].size.height

#define kCurrentWindowHeight [[UIScreen mainScreen] applicationFrame].size.height

#define kTopImageHeight 44 +kStatueHeight


#endif
