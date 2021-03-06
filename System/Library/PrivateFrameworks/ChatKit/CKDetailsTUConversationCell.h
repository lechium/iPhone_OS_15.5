//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, TUConversation, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CKDetailsTUConversationCell <CKDetailsCell>
{
    TUConversation *_conversation;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIImageView *_iconView;	// 32 = 0x20
    UIButton *_actionButton;	// 40 = 0x28
    unsigned long long _state;	// 48 = 0x30
}

+ (_Bool)shouldHighlight;	// IMP=0x0000000000418923
+ (id)reuseIdentifier;	// IMP=0x0000000000417e38
- (void).cxx_destruct;	// IMP=0x0000000000418c6f
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TUConversation *conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic) double buttonTitleVerticalSpacing;
@property(readonly, nonatomic) double buttonTitleHorizontalSpacing;
@property(readonly, nonatomic) double interitemSpacing;
@property(readonly, nonatomic) double buttonInteritemSpacing;
@property(readonly, nonatomic) double insetPadding;
- (void)layoutSubviews;	// IMP=0x000000000041892b
- (void)formatSubtitleForText;	// IMP=0x000000000041875b
- (void)formatTitle;	// IMP=0x00000000004184bd
- (void)formatIconViewForExpanse;	// IMP=0x00000000004182e4
- (void)formatIconViewForFaceTime;	// IMP=0x000000000041810e
- (void)updateView;	// IMP=0x0000000000418090
- (void)_handleMultiWayStateChange:(id)arg1;	// IMP=0x0000000000417fc6
- (void)actionButtonTapped:(id)arg1;	// IMP=0x0000000000417e45
- (void)configureActionButton;	// IMP=0x0000000000417b43
- (void)configureSubtitle;	// IMP=0x00000000004179f3
- (void)configureIconView;	// IMP=0x0000000000417979
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000417618
- (void)addConstraints;	// IMP=0x000000000041615d
- (void)setupView;	// IMP=0x0000000000415ab9
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 conversation:(id)arg3;	// IMP=0x00000000004159e3
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000004159b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

