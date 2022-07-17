//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate;

@interface HFConditionCollection : NSObject
{
    NSArray *_conditions;	// 8 = 0x8
}

+ (id)_singleConditionForPredicate:(id)arg1 knownConditionsOnly:(_Bool)arg2;	// IMP=0x0000000000027918
+ (id)_findBestConditionMatchForPredicates:(id)arg1;	// IMP=0x00000000000274e0
+ (id)_findBestMatchingConditionsForPredicates:(id)arg1;	// IMP=0x000000000002739f
+ (id)_flattenedSubpredicatesForAndPredicate:(id)arg1;	// IMP=0x00000000000271f6
+ (id)conditionCollectionForPredicate:(id)arg1;	// IMP=0x0000000000027006
- (void).cxx_destruct;	// IMP=0x0000000000027fc8
@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(readonly, copy, nonatomic) NSPredicate *predicate;
- (void)removeCondition:(id)arg1;	// IMP=0x0000000000027d9b
- (void)addCondition:(id)arg1;	// IMP=0x0000000000027d07
- (id)initWithConditions:(id)arg1;	// IMP=0x0000000000027c9c
- (id)init;	// IMP=0x0000000000027be7

@end
