//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class HKSPXPCClient;

@protocol HKSPXPCConnectionListenerDelegate <NSObject>
- (void)connectionListenerDidRemoveClient:(HKSPXPCClient *)arg1;
- (void)connectionListenerDidAddClient:(HKSPXPCClient *)arg1;
@end

