//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NADApplicationStore, NSString;
@protocol OS_dispatch_queue;

@interface NADApplicationStoreTransaction : NSObject
{
    _Bool _finalized;	// 8 = 0x8
    NADApplicationStore *_applicationStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_commandQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000003985
@property(nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) NADApplicationStore *applicationStore; // @synthesize applicationStore=_applicationStore;
- (void)_flushCommandQueue;	// IMP=0x001000000000391d
- (void)rollback;	// IMP=0x00100000000038b6
- (_Bool)commit:(id *)arg1;	// IMP=0x0010000000003839
- (void)setSequenceNumber:(id)arg1 UUID:(id)arg2;	// IMP=0x00100000000036b0
- (void)removeApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000035ae
- (void)insertApplication:(id)arg1;	// IMP=0x0010000000003462
- (void)removeAllEntities;	// IMP=0x00100000000033b0
- (id)initWithApplicationStore:(id)arg1;	// IMP=0x00100000000032f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

