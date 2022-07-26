//
//  UIControl+ClickInterval.h
//  KKPodTest726
//
//  Created by 陈棋 on 2022/7/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIControl (ClickInterval)
/// 点击事件响应的时间间隔
@property (nonatomic, assign) NSTimeInterval clickInterval;
/// 交换点击方法
+ (void)exchangeClickMethod;
@end

NS_ASSUME_NONNULL_END
