//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>
#import <TemplateKit/TLKObservable-Protocol.h>
#import <TemplateKit/TLKObserver-Protocol.h>

@class NSString, TLKIconsView, TLKLabel, TLKRichText, TLKRoundedCornerLabels, TLKStarsView, UIFont;
@protocol TLKObserver;

__attribute__((visibility("hidden")))
@interface TLKRichTextField <NUIContainerViewDelegate, TLKObservable, TLKObserver>
{
    _Bool _useCompactMode;	// 8 = 0x8
    id <TLKObserver> observer;	// 16 = 0x10
    long long batchUpdateCount;	// 24 = 0x18
    TLKRichText *_richText;	// 32 = 0x20
    unsigned long long _roundedCornerLabelSizeConfiguration;	// 40 = 0x28
    TLKLabel *_textLabel;	// 48 = 0x30
    TLKRoundedCornerLabels *_roundedCornerLabels;	// 56 = 0x38
    TLKStarsView *_starRatingView;	// 64 = 0x40
    TLKIconsView *_iconView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003e53c
@property(retain, nonatomic) TLKIconsView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) TLKStarsView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(retain, nonatomic) TLKRoundedCornerLabels *roundedCornerLabels; // @synthesize roundedCornerLabels=_roundedCornerLabels;
@property(retain, nonatomic) TLKLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool useCompactMode; // @synthesize useCompactMode=_useCompactMode;
@property(nonatomic) unsigned long long roundedCornerLabelSizeConfiguration; // @synthesize roundedCornerLabelSizeConfiguration=_roundedCornerLabelSizeConfiguration;
@property(retain, nonatomic) TLKRichText *richText; // @synthesize richText=_richText;
@property(nonatomic) long long batchUpdateCount; // @synthesize batchUpdateCount;
@property __weak id <TLKObserver> observer; // @synthesize observer;
@property(readonly, copy) NSString *description;
- (id)attributedString;	// IMP=0x000000000003e302
- (id)viewForLastBaselineLayout;	// IMP=0x000000000003e1fe
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;	// IMP=0x000000000003e03a
- (void)updateRoundedCornerLabels:(id)arg1;	// IMP=0x000000000003ddac
- (void)updateIcons:(id)arg1;	// IMP=0x000000000003db05
- (void)updateStarRating:(id)arg1;	// IMP=0x000000000003d87b
@property(nonatomic) unsigned long long prominence;
@property(retain, nonatomic) UIFont *font;
- (void)updateWithRichText:(id)arg1;	// IMP=0x000000000003d3af
- (void)propertiesDidChange;	// IMP=0x000000000003d363
- (id)init;	// IMP=0x000000000003ce38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

