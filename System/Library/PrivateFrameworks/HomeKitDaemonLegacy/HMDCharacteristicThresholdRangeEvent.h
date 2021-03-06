//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCharacteristicThresholdRangeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>
{
    NSNumber *_min;	// 8 = 0x8
    NSNumber *_max;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006936d9
+ (id)logCategory;	// IMP=0x00000000006936a9
- (void).cxx_destruct;	// IMP=0x0000000000693213
@property(retain, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(retain, nonatomic) NSNumber *min; // @synthesize min=_min;
- (id)analyticsTriggerEventData;	// IMP=0x00000000006930d5
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000006930cf
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000692dd6
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000692bae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000692ada
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006929eb
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x0000000000692581
- (_Bool)_isValueInRange:(id)arg1;	// IMP=0x0000000000692418
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x0000000000692184
- (id)emptyModelObject;	// IMP=0x00000000006920cb
- (id)createPayload;	// IMP=0x0000000000691f6b
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000691dd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

