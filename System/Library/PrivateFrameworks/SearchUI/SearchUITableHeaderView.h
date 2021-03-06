//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/TLKStackView.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class NSString, SFCollectionCardSection, SFResultSection, SearchUILabel, TLKTextButton;
@protocol SFFeedbackListener, SearchUITableHeaderCommandDelegate, SearchUITableHeaderViewDelegate;

@interface SearchUITableHeaderView : TLKStackView <NUIContainerViewDelegate>
{
    _Bool _shouldUseInsetRoundedSections;	// 8 = 0x8
    _Bool _isExpanded;	// 9 = 0x9
    id <SearchUITableHeaderViewDelegate> _headerViewDelegate;	// 16 = 0x10
    id <SearchUITableHeaderCommandDelegate> _commandDelegate;	// 24 = 0x18
    id <SFFeedbackListener> _feedbackListener;	// 32 = 0x20
    unsigned long long _headerType;	// 40 = 0x28
    SFResultSection *_section;	// 48 = 0x30
    SearchUILabel *_titleLabel;	// 56 = 0x38
    TLKTextButton *_headerOptionButton;	// 64 = 0x40
    SFCollectionCardSection *_cardSection;	// 72 = 0x48
}

+ (id)reuseIdentifier;	// IMP=0x000000000004b91e
- (void).cxx_destruct;	// IMP=0x000000000004d927
@property(retain, nonatomic) SFCollectionCardSection *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) TLKTextButton *headerOptionButton; // @synthesize headerOptionButton=_headerOptionButton;
@property(retain, nonatomic) SearchUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool shouldUseInsetRoundedSections; // @synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections;
@property(retain, nonatomic) SFResultSection *section; // @synthesize section=_section;
@property(nonatomic) unsigned long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) __weak id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
@property(nonatomic) __weak id <SearchUITableHeaderCommandDelegate> commandDelegate; // @synthesize commandDelegate=_commandDelegate;
@property(nonatomic) __weak id <SearchUITableHeaderViewDelegate> headerViewDelegate; // @synthesize headerViewDelegate=_headerViewDelegate;
@property(readonly) NSString *title;
- (void)updateWithCollectionCardSection:(id)arg1 section:(id)arg2 usesInsetRoundedSection:(_Bool)arg3;	// IMP=0x000000000004d21f
- (id)attributedStringWithSymbolImageName:(id)arg1 text:(id)arg2;	// IMP=0x000000000004d039
- (void)updateButtonWithAttributedText:(id)arg1 image:(id)arg2;	// IMP=0x000000000004ceb1
- (void)moreButtonPressed;	// IMP=0x000000000004c807
- (_Bool)supportsShowMoreInApp;	// IMP=0x000000000004c707
- (_Bool)isSuggestedAppsHeader;	// IMP=0x000000000004c68f
- (void)updateHeaderButtonVisibilityAnimated:(_Bool)arg1;	// IMP=0x000000000004be31
- (id)moreResultsPunchout;	// IMP=0x000000000004bd90
- (void)updateWithSection:(id)arg1 isExpanded:(_Bool)arg2 usesInsetRoundedSection:(_Bool)arg3;	// IMP=0x000000000004bca0
- (void)layoutSubviews;	// IMP=0x000000000004bc58
- (id)init;	// IMP=0x000000000004b92b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

