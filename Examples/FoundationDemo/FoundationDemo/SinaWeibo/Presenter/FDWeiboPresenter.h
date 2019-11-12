//
//  FDWeiboPresenter.h
//  FoundationDemo
//
//  Created by Rake Yang on 2019/11/1.
//  Copyright © 2019 BinaryParadise. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TIRouterAction/TIRouterAction.h>
#import "FWBRequestManager.h"
#import "FWBStatus.h"
#import <MCObserverKit/MCObserverKit.h>

@interface FDWeiboPresenter : NSObject

@property (nonatomic, copy) NSArray<FWBStatus *> *statuses;
@property (nonatomic, assign) BOOL authChanged;

PGMethod(initWeibo, "fd://weibo/init");
PGMethod(openWeiboURL, "fd://weibo/openurl");

/**
 开始认证如果当前认证无效
 */
- (void)authorizeIfInvalid;

/**
 前登录用户及其所关注（授权）用户的最新微博
 */
- (void)fetchHomeTimeline:(FDActionCompletion)completion;

@end