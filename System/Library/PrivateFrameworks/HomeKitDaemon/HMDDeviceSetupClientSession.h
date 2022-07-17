//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_os_log;

@interface HMDDeviceSetupClientSession <HMFLogging>
{
    NSObject<OS_os_log> *_logger;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000027713d
+ (id)allowedClasses;	// IMP=0x000000000027705d
+ (_Bool)isSupported;	// IMP=0x0000000000277012
+ (long long)role;	// IMP=0x000000000027700a
- (void).cxx_destruct;	// IMP=0x0000000000275b9d
- (_Bool)processSessionData:(id)arg1 fromBundle:(id)arg2 outAccessoryUUID:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000274938
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000002748d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
