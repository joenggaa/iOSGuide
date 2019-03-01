//
//  JSModel.h
//  FoundationDemo
//
//  Created by joengzi on 2019/2/19.
//  Copyright © 2019 joenggaa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JSModel : NSObject

@property (nonatomic, copy) NSString *tag;

- (instancetype)initWithTag:(NSString *)tag;

@end

NS_ASSUME_NONNULL_END