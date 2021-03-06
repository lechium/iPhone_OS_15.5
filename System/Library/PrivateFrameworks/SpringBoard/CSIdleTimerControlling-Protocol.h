//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString;

@protocol CSIdleTimerControlling <NSObject>
- (void)resetIdleTimerIfTopMost;
- (void)removeIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (void)addIdleTimerDisabledAssertionReason:(NSString *)arg1;
@end

