//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/_GCIPCRemoteEndpointInterface-Protocol.h>

@class GCDeviceBattery;

@protocol GCBatteryXPCProxyRemoteClientEndpointInterface <_GCIPCRemoteEndpointInterface>
- (void)refreshBattery;
- (void)newBattery:(GCDeviceBattery *)arg1;
@end

