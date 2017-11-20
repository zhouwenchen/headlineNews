//
//  HNHeader.h
//  headlineNews
//
//  Created by dengweihao on 2017/11/17.
//  Copyright © 2017年 vcyber. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIView+Frame.h"
#import <Masonry/Masonry.h>
#import <MJRefresh/MJRefresh.h>
#import "HNRefreshGifHeader.h"
#import "HNRefreshFooter.h"

#define HN_MIAN_STYLE_COLOR [UIColor colorWithRed:0.97 green:0.35 blue:0.35 alpha:1.0]
#define HN_MIAN_GRAY_COLOR [UIColor colorWithRed:0.31 green:0.31 blue:0.31 alpha:1.0f]
#define HN_WEAK_SELF __weak typeof(self) wself = self;

UIKIT_EXTERN NSString const *HN_BASE_URL;

