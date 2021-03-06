//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDIDSActivityMonitorDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDHomeManager, NSString;
@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate;

@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMFLogging, HMDIDSActivityMonitorDataSource>
{
    id <HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000922892
- (void).cxx_destruct;	// IMP=0x000000000092286c
@property(readonly) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property __weak id <HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate; // @synthesize delegate;
- (void)handleRegistrationUpdated:(id)arg1;	// IMP=0x0000000000922737
- (void)handleDeviceRemoved:(id)arg1;	// IMP=0x0000000000922410
- (void)handleDeviceAdded:(id)arg1;	// IMP=0x0000000000922007
- (void)stopObservingDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x0000000000921c83
- (void)startObservingDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x00000000009218ff
- (_Bool)homeHasCamera:(id)arg1;	// IMP=0x0000000000921655
- (id)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x0000000000920db3
- (id)currentDevice;	// IMP=0x0000000000920d32
- (void)startWithNotificationCenter:(id)arg1;	// IMP=0x0000000000920b31
- (void)start;	// IMP=0x0000000000920ade
- (id)initWithHomeManager:(id)arg1;	// IMP=0x0000000000920a62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

