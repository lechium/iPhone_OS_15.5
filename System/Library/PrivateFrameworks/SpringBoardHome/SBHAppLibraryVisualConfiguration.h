//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString, SBHSearchVisualConfiguration;

@interface SBHAppLibraryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    _Bool _usesInsetPlatterSearchAppearance;	// 8 = 0x8
    double _searchContinuousCornerRadius;	// 16 = 0x10
    SBHSearchVisualConfiguration *_extendedSearchVisualConfiguration;	// 24 = 0x18
    SBHSearchVisualConfiguration *_standardSearchVisualConfiguration;	// 32 = 0x20
    SBHSearchVisualConfiguration *_compactSearchVisualConfiguration;	// 40 = 0x28
    SBHSearchVisualConfiguration *_activeSearchVisualConfiguration;	// 48 = 0x30
    struct CGSize _portraitCategoryPodIconSpacing;	// 56 = 0x38
    struct CGSize _landscapeCategoryPodIconSpacing;	// 72 = 0x48
    struct CGSize _expandedCategoryPodIconSpacing;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000049609
@property(retain, nonatomic) SBHSearchVisualConfiguration *activeSearchVisualConfiguration; // @synthesize activeSearchVisualConfiguration=_activeSearchVisualConfiguration;
@property(retain, nonatomic) SBHSearchVisualConfiguration *compactSearchVisualConfiguration; // @synthesize compactSearchVisualConfiguration=_compactSearchVisualConfiguration;
@property(retain, nonatomic) SBHSearchVisualConfiguration *standardSearchVisualConfiguration; // @synthesize standardSearchVisualConfiguration=_standardSearchVisualConfiguration;
@property(retain, nonatomic) SBHSearchVisualConfiguration *extendedSearchVisualConfiguration; // @synthesize extendedSearchVisualConfiguration=_extendedSearchVisualConfiguration;
@property(nonatomic) double searchContinuousCornerRadius; // @synthesize searchContinuousCornerRadius=_searchContinuousCornerRadius;
@property(nonatomic) _Bool usesInsetPlatterSearchAppearance; // @synthesize usesInsetPlatterSearchAppearance=_usesInsetPlatterSearchAppearance;
@property(nonatomic) struct CGSize expandedCategoryPodIconSpacing; // @synthesize expandedCategoryPodIconSpacing=_expandedCategoryPodIconSpacing;
@property(nonatomic) struct CGSize landscapeCategoryPodIconSpacing; // @synthesize landscapeCategoryPodIconSpacing=_landscapeCategoryPodIconSpacing;
@property(nonatomic) struct CGSize portraitCategoryPodIconSpacing; // @synthesize portraitCategoryPodIconSpacing=_portraitCategoryPodIconSpacing;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000049310
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000492c0
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000492a4
- (id)succinctDescription;	// IMP=0x0000000000049254
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048f93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048ea9
- (id)init;	// IMP=0x0000000000048dda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

