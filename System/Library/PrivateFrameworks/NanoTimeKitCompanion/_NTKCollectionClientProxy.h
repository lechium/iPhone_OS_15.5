//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKCollectionClient-Protocol.h>

@class NSString;
@protocol NTKCollectionClient;

@interface _NTKCollectionClientProxy : NSObject <NTKCollectionClient>
{
    id <NTKCollectionClient> _proxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000dc9de
- (void)upgradeFaceInstanceDescriptor:(id)arg1 forUUID:(id)arg2 seqID:(id)arg3;	// IMP=0x00000000000dc951
- (void)addFaceInstanceDescriptor:(id)arg1 forUUID:(id)arg2 seqId:(id)arg3;	// IMP=0x00000000000dc8c4
- (void)flushCompleteForIdentifier:(id)arg1;	// IMP=0x00000000000dc86a
- (void)resetClientCollectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dc810
- (void)removeFaceForUUID:(id)arg1 seqId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dc783
- (void)updateFaceForUUID:(id)arg1 withResourceDirectory:(id)arg2 seqId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000dc6ce
- (void)updateFaceForUUID:(id)arg1 withConfiguration:(id)arg2 seqId:(id)arg3;	// IMP=0x00000000000dc641
- (void)updateOrderedFaceUUIDs:(id)arg1 seqId:(id)arg2;	// IMP=0x00000000000dc5cf
- (void)updateSelectedFaceUUID:(id)arg1 seqId:(id)arg2;	// IMP=0x00000000000dc55d
- (void)loadFullCollectionWithOrderedUUIDs:(id)arg1 selectedUUID:(id)arg2 facesDescriptorsByUUID:(id)arg3 seqId:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000dc48a
- (id)initWithWeakProxy:(id)arg1;	// IMP=0x00000000000dc426

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

