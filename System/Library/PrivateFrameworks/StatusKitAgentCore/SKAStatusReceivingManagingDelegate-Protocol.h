//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>

@class SKADatabaseChannel, SKADatabaseStatus;
@protocol SKAStatusReceivingManaging;

@protocol SKAStatusReceivingManagingDelegate <NSObject>
- (void)statusReceivingManager:(id <SKAStatusReceivingManaging>)arg1 didReceiveStatusUpdate:(SKADatabaseStatus *)arg2 onChannel:(SKADatabaseChannel *)arg3;
@end

