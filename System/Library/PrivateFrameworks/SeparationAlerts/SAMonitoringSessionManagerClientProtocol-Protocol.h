//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeparationAlerts/NSObject-Protocol.h>
#import <SeparationAlerts/SABluetoothScanRequestProtocol-Protocol.h>
#import <SeparationAlerts/SALocationRequestProtocol-Protocol.h>

@class CLLocation, NSArray, NSDictionary, NSUUID;

@protocol SAMonitoringSessionManagerClientProtocol <NSObject, SABluetoothScanRequestProtocol, SALocationRequestProtocol>

@optional
- (void)updatedMonitoringState:(unsigned long long)arg1 forDeviceUUID:(NSUUID *)arg2;
- (void)notifySeparationsForDevices:(NSArray *)arg1 withLocation:(CLLocation *)arg2 withContext:(NSDictionary *)arg3;
@end

