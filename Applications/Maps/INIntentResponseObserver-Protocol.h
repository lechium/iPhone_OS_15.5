//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class INIntentResponse, NSSet;

@protocol INIntentResponseObserver <NSObject>
- (void)intentResponseDidUpdate:(INIntentResponse *)arg1 withSerializedCacheItems:(NSSet *)arg2;

@optional
- (void)intentResponseDidUpdate:(INIntentResponse *)arg1;
@end

