//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreAutoLayout/NSCoding-Protocol.h>
#import <CoreAutoLayout/NSCopying-Protocol.h>

@class NSISVariable, NSString;

@interface NSLayoutAnchor : NSObject <NSCopying, NSCoding>
{
    id _referenceItem;	// 8 = 0x8
    long long _attr;	// 16 = 0x10
    NSISVariable *_variable;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    id _cachedReferenceItems;	// 40 = 0x28
    id _reserved;	// 48 = 0x30
    unsigned int _type:2;	// 56 = 0x38
    unsigned int _reserved3:30;	// 56 = 0x38
}

+ (id)anchorNamed:(id)arg1 inItem:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x000000000002f7e6
+ (id)anchorNamed:(id)arg1 inItem:(id)arg2;	// IMP=0x000000000002f7d1
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x000000000002f7bf
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2;	// IMP=0x000000000002f7ad
+ (id)layoutAnchorWithName:(id)arg1 forReferenceView:(id)arg2;	// IMP=0x000000000002f79b
+ (id)anchorWithItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x000000000002f4d0
+ (id)layoutAnchorWithItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x000000000002f4be
+ (id)_anchorForItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x000000000002ef35
- (id)constraintLessThanOrEqualToAnchor:(id)arg1;	// IMP=0x0000000000031a13
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1;	// IMP=0x00000000000319cb
- (id)constraintEqualToAnchor:(id)arg1;	// IMP=0x0000000000031986
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x000000000003192a
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x00000000000318d0
- (id)constraintEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000031879
- (long long)_constraintAttribute;	// IMP=0x000000000003186f
- (id)_constraintItem;	// IMP=0x0000000000031865
- (_Bool)nsli_lowerIntoExpression:(id)arg1 withCoefficient:(double)arg2 forConstraint:(id)arg3;	// IMP=0x0000000000031238
- (id)description;	// IMP=0x0000000000031037
- (id)_referencingConstraints;	// IMP=0x0000000000030e5f
- (id)constraintsAffectingLayout;	// IMP=0x0000000000030bb6
- (_Bool)hasAmbiguousLayout;	// IMP=0x0000000000030a32
- (double)_valueInEngine:(id)arg1;	// IMP=0x00000000000308a4
- (id)_equationDescriptionLegendEntries;	// IMP=0x0000000000030539
- (id)_equationDescriptionInParent;	// IMP=0x00000000000303ff
- (id)equationDescription;	// IMP=0x00000000000303f7
- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x0000000000030368
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x00000000000302d9
- (id)_referencedLayoutItems;	// IMP=0x0000000000030277
- (void)_accumulateReferenceLayoutItemsIntoTable:(id)arg1;	// IMP=0x000000000003000c
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;	// IMP=0x000000000002fb9e
- (id)_variableName;	// IMP=0x000000000002fada
- (id)_referenceItem;	// IMP=0x000000000002fa23
- (id)_referenceView;	// IMP=0x000000000002fa11
- (id)initWithIndependentVariableName:(id)arg1 item:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x000000000002f8e2
- (long long)_proxiedAttribute;	// IMP=0x000000000002f6e4
- (id)_proxiedItem;	// IMP=0x000000000002f62d
- (id)initWithItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x000000000002f504
- (id)item;	// IMP=0x000000000002f4b4
- (id)anchorWithName:(id)arg1;	// IMP=0x000000000002f462
- (id)anchorWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x000000000002f3e8
- (id)name;	// IMP=0x000000000002f1c4
- (id)_expressionInDefaultContextWithEngine:(id)arg1;	// IMP=0x000000000002eefe
- (id)_constituentAnchors;	// IMP=0x000000000002ecec
- (id)_nearestAncestorLayoutItem;	// IMP=0x000000000002eb1d
- (long long)_anchorType;	// IMP=0x000000000002eb10
- (id)initWithAnchor:(id)arg1;	// IMP=0x000000000002e904
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e8b7
- (unsigned long long)hash;	// IMP=0x000000000002e7f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e622
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e4ed
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e221
- (void)dealloc;	// IMP=0x000000000002e1bd
- (id)initWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x000000000002e150
- (id)init;	// IMP=0x000000000002e137
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;	// IMP=0x0000000000005b2c
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;	// IMP=0x0000000000005b12
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;	// IMP=0x0000000000005af8
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000005ad9
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000005aba
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000005a9b
- (id)ruleLessThanOrEqualToAnchor:(id)arg1;	// IMP=0x0000000000005a00
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1;	// IMP=0x0000000000005966
- (id)ruleEqualToAnchor:(id)arg1;	// IMP=0x00000000000058cf
- (id)observableValueInItem:(id)arg1;	// IMP=0x00000000000325ed
- (double)valueInItem:(id)arg1;	// IMP=0x00000000000324fb

@end

