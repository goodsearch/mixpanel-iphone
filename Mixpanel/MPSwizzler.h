//
//  MPSwizzler.h
//  HelloMixpanel
//
//  Created by Alex Hofsteede on 1/5/14.
//  Copyright (c) 2014 Mixpanel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MPSwizzler : NSObject

+ (void)swizzleSelector:(SEL)selector onClass:(Class)class withBlock:(void (^)(id))block;
+ (void)unswizzleSelector:(SEL)selector onClass:(Class)class;

@end