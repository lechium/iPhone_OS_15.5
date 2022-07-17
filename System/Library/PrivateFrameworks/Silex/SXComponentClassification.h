//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SXComponentLayoutRules, SXComponentTextRules;

@interface SXComponentClassification : NSObject
{
    SXComponentLayoutRules *_layoutRules;	// 8 = 0x8
    SXComponentTextRules *_textRules;	// 16 = 0x10
    NSArray *_defaultStyleIdentifiers;	// 24 = 0x18
}

+ (id)roleString;	// IMP=0x00000000000b6eb2
+ (int)role;	// IMP=0x00000000000b6eaa
+ (id)typeString;	// IMP=0x00000000000b6e99
+ (_Bool)shouldRegister;	// IMP=0x00000000000b6e91
+ (id)classificationForComponentWithType:(id)arg1 role:(id)arg2;	// IMP=0x00000000000b6d46
+ (id)classificationForComponentWithType:(id)arg1;	// IMP=0x00000000000b6d10
+ (id)classificationForComponentWithRole:(int)arg1;	// IMP=0x00000000000b6baf
+ (void)registerClassification;	// IMP=0x00000000000b6a7e
+ (void)initialize;	// IMP=0x00000000000b6985
- (void).cxx_destruct;	// IMP=0x00000000000b71d1
@property(readonly, nonatomic) NSArray *defaultStyleIdentifiers; // @synthesize defaultStyleIdentifiers=_defaultStyleIdentifiers;
- (void)setupStyleIdentifiers;	// IMP=0x00000000000b6f95
- (_Bool)isCollapsible;	// IMP=0x00000000000b6f8d
- (_Bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;	// IMP=0x00000000000b6f85
- (Class)componentModelClass;	// IMP=0x00000000000b6f74
@property(readonly, nonatomic) unsigned long long contentRelevance;
@property(readonly, nonatomic) NSArray *defaultComponentStyleIdentifiers;
@property(readonly, nonatomic) NSArray *defaultTextStyleIdentifiers;
@property(readonly, nonatomic) SXComponentTextRules *textRules; // @synthesize textRules=_textRules;
@property(readonly, nonatomic) SXComponentLayoutRules *layoutRules; // @synthesize layoutRules=_layoutRules;
- (_Bool)accessibilitySkippedDuringReadAll;	// IMP=0x00000000000b6ed3
- (id)accessibilityCustomRotorMembership;	// IMP=0x00000000000b6ecb
- (id)accessibilityContextualLabel;	// IMP=0x00000000000b6ec3
- (id)init;	// IMP=0x00000000000b6939

@end
