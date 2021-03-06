//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>
#import <Silex/NSMutableCopying-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface SXConditionalObjectAnalysis : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_conditionsToComponentsMap;	// 8 = 0x8
    NSMutableDictionary *_componentsToConditionsMap;	// 16 = 0x10
    NSMutableDictionary *_conditionsToComponentStylesMap;	// 24 = 0x18
    NSMutableDictionary *_componentStylesToConditionsMap;	// 32 = 0x20
    NSMutableDictionary *_conditionsToComponentLayoutsMap;	// 40 = 0x28
    NSMutableDictionary *_componentLayoutsToConditionsMap;	// 48 = 0x30
    NSMutableDictionary *_conditionsToComponentTextStylesMap;	// 56 = 0x38
    NSMutableDictionary *_componentTextStylesToConditionsMap;	// 64 = 0x40
    NSMutableDictionary *_conditionsToTextStylesMap;	// 72 = 0x48
    NSMutableDictionary *_textStylesToConditionsMap;	// 80 = 0x50
    NSMutableSet *_documentStyleConditionTypes;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000c3317
@property(readonly, copy, nonatomic) NSSet *documentStyleConditionTypes; // @synthesize documentStyleConditionTypes=_documentStyleConditionTypes;
- (id)objectsForKey:(id)arg1 map:(id)arg2;	// IMP=0x00000000000c326a
- (id)objectsForKeys:(id)arg1 map:(id)arg2;	// IMP=0x00000000000c305d
- (void)populateWithSource:(id)arg1;	// IMP=0x00000000000c2e56
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c2e22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c2dee
- (id)conditionTypesUsedByComponentLayouts:(id)arg1;	// IMP=0x00000000000c2dd8
- (id)conditionTypesUsedByComponentLayout:(id)arg1;	// IMP=0x00000000000c2d72
- (id)componentLayoutsUsingConditionTypes:(id)arg1;	// IMP=0x00000000000c2d5c
- (id)componentLayoutsUsingConditionType:(id)arg1;	// IMP=0x00000000000c2cf6
- (id)conditionTypesUsedByTextStyles:(id)arg1;	// IMP=0x00000000000c2ce0
- (id)conditionTypesUsedByTextStyle:(id)arg1;	// IMP=0x00000000000c2c7a
- (id)textStylesUsingConditionTypes:(id)arg1;	// IMP=0x00000000000c2c64
- (id)textStylesUsingConditionType:(id)arg1;	// IMP=0x00000000000c2bfe
- (id)conditionTypesUsedByComponentTextStyles:(id)arg1;	// IMP=0x00000000000c2be8
- (id)conditionTypesUsedByComponentTextStyle:(id)arg1;	// IMP=0x00000000000c2b82
- (id)componentTextStylesUsingConditionTypes:(id)arg1;	// IMP=0x00000000000c2b6c
- (id)componentTextStylesUsingConditionType:(id)arg1;	// IMP=0x00000000000c2b06
- (id)conditionTypesUsedByComponentStyles:(id)arg1;	// IMP=0x00000000000c2af0
- (id)conditionTypesUsedByComponentStyle:(id)arg1;	// IMP=0x00000000000c2a8a
- (id)componentStylesUsingConditionTypes:(id)arg1;	// IMP=0x00000000000c2a74
- (id)componentStylesUsingConditionType:(id)arg1;	// IMP=0x00000000000c2a0e
- (id)conditionTypesUsedByComponents:(id)arg1;	// IMP=0x00000000000c29f8
- (id)conditionTypesUsedByComponent:(id)arg1;	// IMP=0x00000000000c2992
- (id)componentsUsingConditionTypes:(id)arg1;	// IMP=0x00000000000c297c
- (id)componentsUsingConditionType:(id)arg1;	// IMP=0x00000000000c2916
- (id)init;	// IMP=0x00000000000c2751

@end

