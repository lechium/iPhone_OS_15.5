//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSActivityMonitorStateManager, IDSActivityUpdate, NSString;

@protocol IDSActivityMonitorStateManagerListener <NSObject>
- (void)activityMonitorManager:(IDSActivityMonitorStateManager *)arg1 receivedUpdate:(IDSActivityUpdate *)arg2 forActivity:(NSString *)arg3;
@end

