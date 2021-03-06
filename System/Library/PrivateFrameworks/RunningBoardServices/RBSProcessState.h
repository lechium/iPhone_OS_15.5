//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, RBSProcessHandle;
@protocol OS_xpc_object;

@interface RBSProcessState : NSObject <RBSXPCSecureCoding, NSCopying>
{
    NSObject<OS_xpc_object> *_codedState;	// 8 = 0x8
    unsigned long long _codedValues;	// 16 = 0x10
    NSMutableDictionary *_codedStateCache;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    unsigned char _taskState;	// 36 = 0x24
    unsigned char _debugState;	// 37 = 0x25
    unsigned char _terminationResistance;	// 38 = 0x26
    _Bool _preventedFromLaunching;	// 39 = 0x27
    RBSProcessHandle *_process;	// 40 = 0x28
    NSSet *_endowmentNamespaces;	// 48 = 0x30
    NSSet *_tags;	// 56 = 0x38
    NSSet *_legacyAssertions;	// 64 = 0x40
    NSSet *_primitiveAssertions;	// 72 = 0x48
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x00000000000260cf
+ (void)setActiveStateDescriptor:(id)arg1;	// IMP=0x0000000000024b4c
+ (id)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 error:(out id *)arg3;	// IMP=0x00000000000249b1
+ (id)untrackedRunningStateforProcess:(id)arg1;	// IMP=0x000000000002492e
+ (id)stateWithProcess:(id)arg1;	// IMP=0x0000000000024886
- (void).cxx_destruct;	// IMP=0x00000000000266c9
@property(readonly, nonatomic, getter=isPreventedFromLaunching) _Bool preventedFromLaunching; // @synthesize preventedFromLaunching=_preventedFromLaunching;
@property(readonly, copy, nonatomic) NSObject<OS_xpc_object> *codedState; // @synthesize codedState=_codedState;
@property(nonatomic) unsigned char terminationResistance; // @synthesize terminationResistance=_terminationResistance;
@property(copy, nonatomic) NSSet *primitiveAssertions; // @synthesize primitiveAssertions=_primitiveAssertions;
@property(copy, nonatomic) NSSet *legacyAssertions; // @synthesize legacyAssertions=_legacyAssertions;
@property(copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSSet *endowmentNamespaces; // @synthesize endowmentNamespaces=_endowmentNamespaces;
@property(nonatomic) unsigned char debugState; // @synthesize debugState=_debugState;
@property(nonatomic) unsigned char taskState; // @synthesize taskState=_taskState;
@property(readonly, nonatomic) RBSProcessHandle *process; // @synthesize process=_process;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000264e8
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000026210
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000260d7
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025be1
@property(readonly) unsigned long long hash;
- (void)encodeWithPreviousState:(id)arg1;	// IMP=0x0000000000024e70
- (_Bool)isDifferentFromState:(id)arg1 significantly:(out _Bool *)arg2;	// IMP=0x0000000000024bf5
@property(readonly, copy, nonatomic) NSSet *assertions;
@property(readonly, nonatomic, getter=isEmptyState) _Bool emptyState;
@property(readonly, nonatomic, getter=isDebugging) _Bool debugging;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)init;	// IMP=0x0000000000024976

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

