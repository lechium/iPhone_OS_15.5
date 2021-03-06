//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSString, RBSAssertionDescriptor, RBSAssertionIdentifier, RBSTarget;
@protocol RBSServiceLocalProtocol;

@interface RBSAssertion : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    CDUnknownBlockType _invalidationHandler;	// 16 = 0x10
    CDUnknownBlockType _warningHandler;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    RBSAssertionDescriptor *_descriptor;	// 40 = 0x28
    unsigned long long _state;	// 48 = 0x30
    id <RBSServiceLocalProtocol> _service;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000019fca
- (void)_serverInvalidateWithError:(id)arg1;	// IMP=0x0000000000019987
- (id)_initWithDescriptor:(id)arg1 service:(id)arg2;	// IMP=0x00000000000198a2
- (id)_initWithServerValidatedDescriptor:(id)arg1;	// IMP=0x0000000000019784
- (id)debugDescription;	// IMP=0x00000000000196a0
- (id)description;	// IMP=0x0000000000019626
- (void)setExpirationWarningHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000192f1
@property(readonly, copy, nonatomic) RBSAssertionDescriptor *descriptor;
@property(readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property(readonly, nonatomic) unsigned long long state;
- (void)dealloc;	// IMP=0x000000000001916e
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019047
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000018f77
- (void)addObserver:(id)arg1;	// IMP=0x0000000000018e07
@property(readonly, copy, nonatomic) NSArray *attributes;
@property(readonly, nonatomic) RBSTarget *target;
@property(readonly, copy, nonatomic) NSString *explanation;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (oneway void)invalidate;	// IMP=0x0000000000018cf1
- (_Bool)invalidateSyncWithError:(out id *)arg1;	// IMP=0x0000000000018c11
- (_Bool)invalidateWithError:(out id *)arg1;	// IMP=0x0000000000018bfc
- (oneway void)acquireWithInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000189bc
- (_Bool)acquireWithError:(out id *)arg1;	// IMP=0x0000000000018694
- (id)initWithExplanation:(id)arg1 target:(id)arg2 attributes:(id)arg3;	// IMP=0x00000000000184c9
- (id)init;	// IMP=0x0000000000018442

@end

