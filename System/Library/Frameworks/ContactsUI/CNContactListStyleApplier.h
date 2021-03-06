//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CNContactListStyle;

__attribute__((visibility("hidden")))
@interface CNContactListStyleApplier : NSObject
{
    id <CNContactListStyle> _contactListStyle;	// 8 = 0x8
}

+ (void)applyDefaultStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3;	// IMP=0x0000000000049dc0
- (void).cxx_destruct;	// IMP=0x00000000000497ed
@property(readonly, nonatomic) id <CNContactListStyle> contactListStyle; // @synthesize contactListStyle=_contactListStyle;
- (void)applyContactListStyleToBannerFootnote:(id)arg1 primaryAppearance:(_Bool)arg2;	// IMP=0x000000000004971f
- (void)applyContactListStyleToBannerTitle:(id)arg1 primaryAppearance:(_Bool)arg2;	// IMP=0x000000000004961e
- (void)applyContactListStyleToEmergencyIcon:(id)arg1 ofCell:(id)arg2;	// IMP=0x0000000000049564
- (void)applyContactListStyleToMeContactLabel:(id)arg1 ofCell:(id)arg2;	// IMP=0x00000000000494ee
- (void)applyContactListStyleToText:(id)arg1 ofSearchResultCell:(id)arg2 withColor:(id)arg3 highlightColor:(id)arg4;	// IMP=0x0000000000049327
- (void)applyContactListStyleToText:(id)arg1 ofSearchResultCell:(id)arg2;	// IMP=0x000000000004922a
- (void)applyContactListStyleToText:(id)arg1 ofUnhighlightedCell:(id)arg2;	// IMP=0x00000000000490bd
- (void)applyContactListStyleToText:(id)arg1 ofHighlightedCell:(id)arg2;	// IMP=0x0000000000048f50
- (void)applyContactListStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3;	// IMP=0x0000000000048b88
- (void)applyContactListStyleToTableView:(id)arg1;	// IMP=0x0000000000048760
- (void)applyContactListStyleToSearchBar:(id)arg1;	// IMP=0x00000000000481f0
- (void)applyContactListStyleToNavigationBar:(id)arg1;	// IMP=0x00000000000480cd
- (void)applyContactListStyleToHeaderFooter:(id)arg1;	// IMP=0x0000000000048044
- (void)applyContactListStyleToSearchHeader:(id)arg1 withTitle:(id)arg2;	// IMP=0x0000000000047f64
- (void)applyContactListStyleToSearchCell:(id)arg1;	// IMP=0x0000000000047e79
- (void)applyContactListStyleToCell:(id)arg1;	// IMP=0x0000000000047761
- (void)applyDefaultTextColorsToContactListCell:(id)arg1;	// IMP=0x00000000000473ae
- (void)applyLightTextColorsToContactListCell:(id)arg1;	// IMP=0x0000000000047091
@property(readonly, nonatomic) _Bool usesInsetPlatterStyle;
@property(readonly, nonatomic) unsigned long long tableNoContactsAvailableStyle;
@property(readonly, nonatomic) double cellEstimatedHeight;
- (id)initWithContactListStyle:(id)arg1;	// IMP=0x0000000000046efa

@end

