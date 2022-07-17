//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/NSCopying-Protocol.h>
#import <CoreDuetContext/NSSecureCoding-Protocol.h>

@class NSOrderedSet, NSPredicate, NSSet;

@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _evaluateOnEveryKeyPathUpdate;	// 8 = 0x8
    NSSet *_keyPaths;	// 16 = 0x10
    NSPredicate *_predicate;	// 24 = 0x18
    NSPredicate *_predicateForPreviousState;	// 32 = 0x20
    double _minimumDurationInPreviousState;	// 40 = 0x28
    NSOrderedSet *_timeBasedPredicateEvaluationIntervals;	// 48 = 0x30
    NSSet *_circularLocationRegions;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ec61
+ (id)orPredicateWithSubpredicates:(id)arg1;	// IMP=0x000000000000d388
+ (id)andPredicateWithSubpredicates:(id)arg1;	// IMP=0x000000000000ca00
+ (id)notPredicateWithSubpredicate:(id)arg1;	// IMP=0x000000000000c531
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 withPredicateForPreviousState:(id)arg3 withMinimumDurationInPreviousState:(double)arg4;	// IMP=0x000000000000c437
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3;	// IMP=0x000000000000c336
+ (id)predicateForChangeAtKeyPath:(id)arg1 withMinimumDurationInPreviousState:(double)arg2;	// IMP=0x000000000000c298
+ (id)predicateForKeyPath:(id)arg1 withFormat:(id)arg2;	// IMP=0x000000000000c173
+ (id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2;	// IMP=0x000000000000c0eb
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2;	// IMP=0x000000000000c039
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2;	// IMP=0x000000000000beea
+ (id)predicateForChangeAtKeyPaths:(id)arg1;	// IMP=0x000000000000be1f
+ (id)predicateForChangeAtKeyPath:(id)arg1;	// IMP=0x000000000000bd54
- (void).cxx_destruct;	// IMP=0x000000000000f67d
@property(retain, nonatomic) NSSet *circularLocationRegions; // @synthesize circularLocationRegions=_circularLocationRegions;
@property(retain, nonatomic) NSOrderedSet *timeBasedPredicateEvaluationIntervals; // @synthesize timeBasedPredicateEvaluationIntervals=_timeBasedPredicateEvaluationIntervals;
@property(nonatomic) _Bool evaluateOnEveryKeyPathUpdate; // @synthesize evaluateOnEveryKeyPathUpdate=_evaluateOnEveryKeyPathUpdate;
@property(nonatomic) double minimumDurationInPreviousState; // @synthesize minimumDurationInPreviousState=_minimumDurationInPreviousState;
@property(retain, nonatomic) NSPredicate *predicateForPreviousState; // @synthesize predicateForPreviousState=_predicateForPreviousState;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSSet *keyPaths; // @synthesize keyPaths=_keyPaths;
- (id)description;	// IMP=0x000000000000f4ee
- (unsigned long long)hash;	// IMP=0x000000000000f494
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f25c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f180
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ed44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ec69
- (_Bool)evaluateWithState:(id)arg1 previousValue:(id)arg2;	// IMP=0x000000000000e128
- (_Bool)evaluateWithObject:(id)arg1;	// IMP=0x000000000000e062
@property(readonly, nonatomic) _Bool firesOnAnyChange;
- (id)initForChangeAtKeyPath:(id)arg1 equalToValue:(id)arg2;	// IMP=0x000000000000bf56
- (id)initForChangeAtKeyPaths:(id)arg1;	// IMP=0x000000000000be68
- (id)initForChangeAtKeyPath:(id)arg1;	// IMP=0x000000000000bd9d

@end
