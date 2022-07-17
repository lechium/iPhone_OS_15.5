//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBLocalZone, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraClipImporter : HMFObject <HMFLogging>
{
    NSString *_logIdentifier;	// 8 = 0x8
    HMBLocalZone *_localZone;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSUUID *_cameraProfileUUID;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000009522d5
- (void).cxx_destruct;	// IMP=0x00000000009515a7
@property(readonly, copy) NSUUID *cameraProfileUUID; // @synthesize cameraProfileUUID=_cameraProfileUUID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (id)importClipsWithImportData:(id)arg1;	// IMP=0x000000000095096b
- (id)initWithLocalZone:(id)arg1 cameraProfileUUID:(id)arg2;	// IMP=0x0000000000950811

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
