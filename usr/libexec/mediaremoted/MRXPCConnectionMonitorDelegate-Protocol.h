//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRXPCConnectionMonitor;

@protocol MRXPCConnectionMonitorDelegate <NSObject>
- (void)connectionDidResume:(MRXPCConnectionMonitor *)arg1;

@optional
- (void)connectionDidInvalidate:(MRXPCConnectionMonitor *)arg1;
@end

