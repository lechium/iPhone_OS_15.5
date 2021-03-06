//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>
#import <TemplateKit/TLKTextAreaViewTesting-Protocol.h>

@class NSArray, NSMutableArray, NSString, NUIContainerStackView, TLKEmbossedLabel, TLKImage, TLKLabel, TLKRichText, TLKRichTextField, TLKStackView, TLKTextButton, TLKTitleContainerView, UIView;
@protocol TLKTextAreaViewDelegate;

@interface TLKTextAreaView <NUIContainerViewDelegate, TLKTextAreaViewTesting>
{
    _Bool _truncateTitleMiddle;	// 8 = 0x8
    _Bool _secondaryTitleIsDetached;	// 9 = 0x9
    _Bool _isAccessoryViewBottomAligned;	// 10 = 0xa
    _Bool _useCompactMode;	// 11 = 0xb
    _Bool _disableAllObservers;	// 12 = 0xc
    _Bool _isHorizontallyCompressed;	// 13 = 0xd
    id <TLKTextAreaViewDelegate> _buttonDelegate;	// 16 = 0x10
    TLKRichText *_bannerText;	// 24 = 0x18
    TLKRichText *_title;	// 32 = 0x20
    TLKRichText *_secondaryTitle;	// 40 = 0x28
    TLKImage *_secondaryTitleImage;	// 48 = 0x30
    NSArray *_detailTexts;	// 56 = 0x38
    TLKRichText *_footnote;	// 64 = 0x40
    NSString *_footnoteButtonText;	// 72 = 0x48
    UIView *_accessoryView;	// 80 = 0x50
    TLKEmbossedLabel *_bannerBadgeView;	// 88 = 0x58
    TLKTitleContainerView *_titleContainer;	// 96 = 0x60
    NUIContainerStackView *_detailFieldFootnoteAndAccessoryStackView;	// 104 = 0x68
    NUIContainerStackView *_detailFieldAndFootnoteStackView;	// 112 = 0x70
    NUIContainerStackView *_detailFieldStackView;	// 120 = 0x78
    NSMutableArray *_detailsFields;	// 128 = 0x80
    NSMutableArray *_bulletFields;	// 136 = 0x88
    TLKLabel *_hyphenField;	// 144 = 0x90
    TLKRichTextField *_footnoteLabel;	// 152 = 0x98
    TLKTextButton *_footnoteButton;	// 160 = 0xa0
    NUIContainerStackView *_footnoteContainer;	// 168 = 0xa8
}

+ (id)footNoteLabelFont;	// IMP=0x000000000000f454
- (void).cxx_destruct;	// IMP=0x000000000000fd38
@property(nonatomic) _Bool isHorizontallyCompressed; // @synthesize isHorizontallyCompressed=_isHorizontallyCompressed;
@property(nonatomic) _Bool disableAllObservers; // @synthesize disableAllObservers=_disableAllObservers;
@property(retain, nonatomic) NUIContainerStackView *footnoteContainer; // @synthesize footnoteContainer=_footnoteContainer;
@property(retain, nonatomic) TLKTextButton *footnoteButton; // @synthesize footnoteButton=_footnoteButton;
@property(retain, nonatomic) TLKRichTextField *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) TLKLabel *hyphenField; // @synthesize hyphenField=_hyphenField;
@property(retain, nonatomic) NSMutableArray *bulletFields; // @synthesize bulletFields=_bulletFields;
@property(retain, nonatomic) NSMutableArray *detailsFields; // @synthesize detailsFields=_detailsFields;
@property(retain, nonatomic) NUIContainerStackView *detailFieldStackView; // @synthesize detailFieldStackView=_detailFieldStackView;
@property(retain, nonatomic) NUIContainerStackView *detailFieldAndFootnoteStackView; // @synthesize detailFieldAndFootnoteStackView=_detailFieldAndFootnoteStackView;
@property(retain, nonatomic) NUIContainerStackView *detailFieldFootnoteAndAccessoryStackView; // @synthesize detailFieldFootnoteAndAccessoryStackView=_detailFieldFootnoteAndAccessoryStackView;
@property(retain, nonatomic) TLKTitleContainerView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property(retain, nonatomic) TLKEmbossedLabel *bannerBadgeView; // @synthesize bannerBadgeView=_bannerBadgeView;
@property(nonatomic) _Bool useCompactMode; // @synthesize useCompactMode=_useCompactMode;
@property(nonatomic) _Bool isAccessoryViewBottomAligned; // @synthesize isAccessoryViewBottomAligned=_isAccessoryViewBottomAligned;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) NSString *footnoteButtonText; // @synthesize footnoteButtonText=_footnoteButtonText;
@property(retain, nonatomic) TLKRichText *footnote; // @synthesize footnote=_footnote;
@property(retain, nonatomic) NSArray *detailTexts; // @synthesize detailTexts=_detailTexts;
@property(nonatomic) _Bool secondaryTitleIsDetached; // @synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached;
@property(retain, nonatomic) TLKImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property(retain, nonatomic) TLKRichText *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(nonatomic) _Bool truncateTitleMiddle; // @synthesize truncateTitleMiddle=_truncateTitleMiddle;
@property(retain, nonatomic) TLKRichText *title; // @synthesize title=_title;
@property(retain, nonatomic) TLKRichText *bannerText; // @synthesize bannerText=_bannerText;
@property __weak id <TLKTextAreaViewDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
- (id)footnoteLabelString;	// IMP=0x000000000000f99d
- (id)secondaryTitleLabelString;	// IMP=0x000000000000f94d
- (id)titleLabelString;	// IMP=0x000000000000f8fd
- (id)detailsStrings;	// IMP=0x000000000000f73b
- (id)detailsViews;	// IMP=0x000000000000f729
- (id)titleView;	// IMP=0x000000000000f717
- (id)viewForLastBaselineLayout;	// IMP=0x000000000000f5c2
- (id)viewForFirstBaselineLayout;	// IMP=0x000000000000f46d
- (void)updateFootnote;	// IMP=0x000000000000ed34
- (void)internalTextFieldsInBatchUpdate:(_Bool)arg1;	// IMP=0x000000000000eb38
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ea4c
- (void)updateDetailFieldStackViewVisibility;	// IMP=0x000000000000e856
- (void)updateDetails;	// IMP=0x000000000000d412
- (void)insertDetailsStackViewIfNeeded;	// IMP=0x000000000000d27f
- (void)updateBannerBadge;	// IMP=0x000000000000d007
- (void)propertiesDidChange;	// IMP=0x000000000000caa0
- (id)setupContentView;	// IMP=0x000000000000bd3b

// Remaining properties
@property(retain, nonatomic) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

