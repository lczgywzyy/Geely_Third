//
//  GeelyLeftFrameDynamicView.h
//  Geely_Third
//
//  Created by WillyZhao on 2016/11/17.
//  Copyright © 2016年 WillyZhao. All rights reserved.
//

#import <UIKit/UIKit.h>
@class GeelyLeftFrameDynamicView;

@protocol GeelyLeftFrameDynamicViewDelate <NSObject>

-(void)check;
-(void)didSelectedDynamciSetView:(GeelyLeftFrameDynamicView *)view selectedIndex:(NSInteger)index;

@end
typedef enum {
    DYNAMIC_MUSIC,                                  //音乐小侧边
    DYNAMIC_RADIO,                                  //电台小侧边
    DYNAMIC_CALLZ,                                  //电话小侧边
    DYNAMIC_SETTZ,                                  //设置小侧边
    DYNAMIC_CALLD,                                  //呼出小侧边
    DYNAMIC_CALLL                                   //常用联系人小侧边
}GeelyDynamicViewStyle;

typedef void(^GeelyDynamicFinish)();

typedef void(^GeelyDynamicFinishView)(UIView *amicView);

//@protocol GeelyLeftFrameDynamicDelegate <NSObject>
//
//
//
//@end


@interface GeelyLeftFrameDynamicView : UIView


@property (nonatomic, assign) id<GeelyLeftFrameDynamicViewDelate> delegate;

-(instancetype)initWithFrame:(CGRect)frame;

@property (nonatomic, strong) UITableView *tableView_;

@property (nonatomic, assign) GeelyDynamicViewStyle style;

@property (nonatomic, strong) UIView *currentView;

@property (nonatomic, assign) BOOL show;

@property (nonatomic, assign) BOOL showSingle;

//-(void)startAnimationViewStyle:(GeelyDynamicViewStyle)style finish:(GeelyDynamicFinishView)finish;

-(void)dismissAnimationView:(UIView *)animaView animationFinish:(GeelyDynamicFinish)finish;

-(void)showAnimationStyle:(GeelyDynamicViewStyle)style finish:(GeelyDynamicFinishView)finish;
//-(void)dismissAnimationStyle:(GeelyDynamicViewStyle)style finish:(GeelyDynamicFinishView)finish;


@end
