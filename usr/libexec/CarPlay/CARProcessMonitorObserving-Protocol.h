//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CARProcessMonitor, NSString;

@protocol CARProcessMonitorObserving <NSObject>
- (void)processMonitor:(CARProcessMonitor *)arg1 didHandleDeathOfBundleIdentifier:(NSString *)arg2;
- (void)processMonitor:(CARProcessMonitor *)arg1 shouldHandleDeathOfBundleIdentifier:(NSString *)arg2 isCrash:(_Bool)arg3;
@end
