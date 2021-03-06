//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MFMessageCriterionConverterDelegate;

@interface MFMessageCriterionConverter : NSObject
{
    id <MFMessageCriterionConverterDelegate> _delegate;	// 8 = 0x8
}

+ (id)spotlightBodySearchPredicateForValue:(id)arg1;	// IMP=0x000000000012af25
+ (id)spotlightSubjectSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2;	// IMP=0x000000000012ae1e
+ (id)spotlightSenderSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2;	// IMP=0x000000000012ad17
+ (id)spotlightRecipientSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2;	// IMP=0x000000000012a755
+ (id)spotlightSearchPredicateForValue:(id)arg1;	// IMP=0x000000000012a579
- (void).cxx_destruct;	// IMP=0x000000000012c351
@property(nonatomic) __weak id <MFMessageCriterionConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)messageCriterionFromPredicateFormatString:(id)arg1;	// IMP=0x000000000012c2a7
- (id)messageCriterionFromPredicate:(id)arg1;	// IMP=0x000000000012c14a
- (id)_messageCriterionForCompoundPredicate:(id)arg1;	// IMP=0x000000000012be8c
- (id)_messageCriterionForComparisonPredicate:(id)arg1;	// IMP=0x000000000012b482
- (long long)_criterionTypeFromExpression:(id)arg1;	// IMP=0x000000000012b386
- (long long)_criterionTypeForKey:(id)arg1;	// IMP=0x000000000012b2ca
- (long long)_defaultCriterionTypeForKey:(id)arg1;	// IMP=0x000000000012b023
- (id)predicateFromMessageCriterion:(id)arg1;	// IMP=0x000000000012a503
- (id)_searchPredicateForCriterion:(id)arg1;	// IMP=0x0000000000129d80
- (id)_predicateKeysForCriterion:(long long)arg1;	// IMP=0x0000000000129cda
- (id)_defaultKeysForCriterionType:(long long)arg1;	// IMP=0x00000000001294fe
- (id)_orPredicateForAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3;	// IMP=0x000000000012937a
- (id)_predicateForKey:(id)arg1 value:(id)arg2 qualifier:(int)arg3;	// IMP=0x00000000001291f0
- (unsigned long long)_proposedPredicateOperatorType:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000129104
- (id)_simplifiedCompoundPredicateOfType:(unsigned long long)arg1 forSubqueries:(id)arg2;	// IMP=0x0000000000128d94

@end

