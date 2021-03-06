//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_os_log;

@interface HMDDeviceSetupServerSession <HMFLogging>
{
    NSObject<OS_os_log> *_logger;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0000000000262958
+ (id)allowedClasses;	// IMP=0x0000000000262878
+ (_Bool)isSupported;	// IMP=0x000000000026282d
+ (long long)role;	// IMP=0x0000000000262822
- (void).cxx_destruct;	// IMP=0x000000000026280f
- (_Bool)processSessionData:(id)arg1 fromBundle:(id)arg2 outAccessoryUUID:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000002619bd
- (id)initWithHomeManager:(id)arg1;	// IMP=0x000000000026195c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

