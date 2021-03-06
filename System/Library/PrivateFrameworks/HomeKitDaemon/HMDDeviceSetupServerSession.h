//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_os_log;

@interface HMDDeviceSetupServerSession <HMFLogging>
{
    NSObject<OS_os_log> *_logger;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0000000000276b8c
+ (id)allowedClasses;	// IMP=0x0000000000276aac
+ (_Bool)isSupported;	// IMP=0x0000000000276a61
+ (long long)role;	// IMP=0x0000000000276a56
- (void).cxx_destruct;	// IMP=0x0000000000276a43
- (_Bool)processSessionData:(id)arg1 fromBundle:(id)arg2 outAccessoryUUID:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000275c11
- (id)initWithHomeManager:(id)arg1;	// IMP=0x0000000000275bb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

