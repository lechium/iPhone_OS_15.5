//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDMediaSystem, HMFMessageDispatcher, NSDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDMediaSystemSymptomHandler : HMFObject <NSSecureCoding, HMFLogging>
{
    NSUUID *_uuid;	// 8 = 0x8
    HMDMediaSystem *_mediaSystem;	// 16 = 0x10
    NSDictionary *_currentSymptoms;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMFMessageDispatcher *_msgDispatcher;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025a6f
+ (id)logCategory;	// IMP=0x0000000000025a3f
- (void).cxx_destruct;	// IMP=0x0000000000025535
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) NSDictionary *currentSymptoms; // @synthesize currentSymptoms=_currentSymptoms;
@property(readonly, nonatomic) __weak HMDMediaSystem *mediaSystem; // @synthesize mediaSystem=_mediaSystem;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025275
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024ff7
@property(readonly, nonatomic) NSSet *mergedSymptoms;
- (void)_updateBackingStoreModelWithNewSymptoms:(id)arg1;	// IMP=0x0000000000024bbf
- (void)handleMediaSystemSymptoms:(id)arg1 message:(id)arg2;	// IMP=0x0000000000024ae3
- (void)_handleNewDiscoveredSymptoms:(id)arg1 forAccessory:(id)arg2;	// IMP=0x00000000000247ba
- (void)handleNewDiscoveredSymptoms:(id)arg1 forAccessory:(id)arg2;	// IMP=0x00000000000245ef
- (void)_refreshCurrentDeviceSymptoms;	// IMP=0x00000000000242bf
- (void)refreshCurrentDeviceSymptoms;	// IMP=0x000000000002424e
- (void)configureWithMessageDispatcher:(id)arg1;	// IMP=0x00000000000241a7
- (id)logIdentifier;	// IMP=0x0000000000024157
- (id)_initializePlaceholderSymptomsDict:(id)arg1;	// IMP=0x0000000000023dbb
- (id)initWithMediaSystem:(id)arg1 workQueue:(id)arg2 symptoms:(id)arg3;	// IMP=0x0000000000023bc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
