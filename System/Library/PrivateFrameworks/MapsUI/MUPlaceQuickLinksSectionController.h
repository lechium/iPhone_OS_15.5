//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MUActionGroupSectionView, MUPlaceSectionView, NSArray;
@protocol MUPlaceQuickLinksSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceQuickLinksSectionController
{
    NSArray *_quickLinks;	// 8 = 0x8
    MUPlaceSectionView *_sectionView;	// 16 = 0x10
    MUActionGroupSectionView *_cardContentView;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    id <MUPlaceQuickLinksSectionControllerDelegate> _quickLinkProviderDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006c3fa
@property(nonatomic) __weak id <MUPlaceQuickLinksSectionControllerDelegate> quickLinkProviderDelegate; // @synthesize quickLinkProviderDelegate=_quickLinkProviderDelegate;
- (_Bool)isActive;	// IMP=0x000000000006c3bd
- (id)sectionView;	// IMP=0x000000000006c3a8
- (_Bool)hasContent;	// IMP=0x000000000006c384
- (int)analyticsModuleType;	// IMP=0x000000000006c379
- (void)_instrumentAppClipWithURLString:(id)arg1;	// IMP=0x000000000006c314
- (void)_instrumentShortcutWithURLString:(id)arg1;	// IMP=0x000000000006c2b3
- (void)_performTapInstrumentationWithQuickLink:(id)arg1;	// IMP=0x000000000006c21e
- (void)_buildContentViews;	// IMP=0x000000000006be4f
- (void)_fetchQuickLinksIfNeeded;	// IMP=0x000000000006b96f
- (void)setActive:(_Bool)arg1;	// IMP=0x000000000006b94c
- (void)_setupSectionView;	// IMP=0x000000000006b865
- (id)initWithMapItem:(id)arg1;	// IMP=0x000000000006b74f

@end
