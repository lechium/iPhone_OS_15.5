//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSProcessMatching-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString, RBSProcessIdentity, RBSProcessPredicateImpl;

@interface RBSProcessPredicate : NSObject <RBSXPCSecureCoding, RBSProcessMatching>
{
    RBSProcessPredicateImpl *_predicate;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0000000000016115
+ (id)predicateNotMatchingPredicate:(id)arg1;	// IMP=0x0000000000015d7b
+ (id)predicateMatchingAnyPredicate:(id)arg1;	// IMP=0x0000000000015a64
+ (id)predicateMatchingPredicates:(id)arg1;	// IMP=0x000000000001574d
+ (id)predicateMatching:(id)arg1;	// IMP=0x000000000001564d
+ (id)predicate;	// IMP=0x000000000001563b
+ (id)predicateMatchingProcessTypeApplication;	// IMP=0x00000000000020b0
+ (id)predicatePowerLogProcesses;	// IMP=0x000000000000b972
+ (id)predicateForClearTheBoard;	// IMP=0x000000000000b9c2
+ (id)predicateMatchingAuid:(unsigned int)arg1;	// IMP=0x000000000001a091
+ (id)predicateMatchingEuid:(unsigned int)arg1;	// IMP=0x000000000001a023
+ (id)predicateMatchingPlatform:(int)arg1;	// IMP=0x0000000000023a67
+ (id)predicateMatchingExecPathStartsWith:(id)arg1;	// IMP=0x000000000002c782
+ (id)predicateMatchingBundleIdentifiers:(id)arg1;	// IMP=0x000000000002c6f4
+ (id)predicateMatchingBeforeTranslocationBundlePath:(id)arg1;	// IMP=0x000000000002c666
+ (id)predicateMatchingExtensionPoint:(id)arg1;	// IMP=0x000000000002c5d8
+ (id)predicateMatchingBundleIdentifier:(id)arg1;	// IMP=0x000000000002c54a
+ (id)predicateMatchingHandle:(id)arg1;	// IMP=0x0000000000031fb1
+ (id)predicateMatchingIdentifier:(id)arg1;	// IMP=0x0000000000031e5d
+ (id)predicateMatchingLaunchServicesProcesses;	// IMP=0x000000000003291e
+ (id)predicateMatchingSuspendableProcesses;	// IMP=0x00000000000335f0
+ (id)predicateMatchingTarget:(id)arg1;	// IMP=0x0000000000033d67
+ (id)predicateMatchingIdentity:(id)arg1;	// IMP=0x0000000000033ceb
+ (id)predicateMatchingServiceName:(id)arg1;	// IMP=0x0000000000033c5d
+ (id)predicateMatchingJobLabel:(id)arg1;	// IMP=0x0000000000033bcf
- (void).cxx_destruct;	// IMP=0x00000000000161c5
@property(readonly, nonatomic) RBSProcessPredicateImpl *predicate; // @synthesize predicate=_predicate;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000016140
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000001611d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000160dc
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015fe1
@property(readonly) unsigned long long hash;
- (id)processPredicate;	// IMP=0x0000000000015fc2
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000015fac
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000015e9a
- (unsigned int)auid;	// IMP=0x000000000001a17c
@property(readonly, nonatomic) unsigned int euid;
@property(readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property(readonly, copy, nonatomic) NSString *extensionPoint;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)processIdentifier;	// IMP=0x000000000003203f
@property(readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property(readonly, copy, nonatomic) NSString *serviceName;
@property(readonly, copy, nonatomic) NSString *jobLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
