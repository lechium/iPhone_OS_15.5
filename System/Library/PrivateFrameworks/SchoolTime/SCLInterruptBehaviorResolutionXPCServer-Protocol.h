//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SchoolTime/NSObject-Protocol.h>

@class NSString, SCLInterruptEvent;

@protocol SCLInterruptBehaviorResolutionXPCServer <NSObject>
- (oneway void)resolveBehaviorForEvent:(SCLInterruptEvent *)arg1 clientIdentifier:(NSString *)arg2 completion:(void (^)(SCLInterruptEventBehavior *, NSError *))arg3;
@end
