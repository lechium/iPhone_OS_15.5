//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventDiscreteDispatchingPredicate, BKSHIDEventDispatchingTarget, NSString;

@interface BKSHIDEventDiscreteDispatchingRule : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>
{
    BKSHIDEventDiscreteDispatchingPredicate *_predicate;	// 8 = 0x8
    BKSHIDEventDispatchingTarget *_target;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007396
+ (id)ruleForDispatchingDiscreteEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2;	// IMP=0x0000000000006f11
- (void).cxx_destruct;	// IMP=0x0000000000006eb8
@property(readonly, copy, nonatomic) BKSHIDEventDispatchingTarget *target; // @synthesize target=_target;
@property(readonly, copy, nonatomic) BKSHIDEventDiscreteDispatchingPredicate *predicate; // @synthesize predicate=_predicate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000006df1
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000006da1
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000006cdc
- (id)succinctDescription;	// IMP=0x0000000000006c8c
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006bf2
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000068b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000684a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000683f
- (id)_initWithPredicate:(id)arg1 target:(id)arg2;	// IMP=0x0000000000006623
- (id)init;	// IMP=0x00000000000064f5

// Remaining properties
@property(readonly) Class superclass;

@end

