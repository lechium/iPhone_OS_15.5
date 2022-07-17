//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/TLKTextAreaViewDelegate-Protocol.h>

@class NSArray, NSString, TLKImage, TLKRichText, TLKTextAreaView, UIView;
@protocol TLKDetailsViewDelegate;

@interface TLKDetailsView <TLKTextAreaViewDelegate>
{
    id <TLKDetailsViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006ba6
@property(nonatomic) __weak id <TLKDetailsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAccessoryViewBottomAligned;
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000006a99
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000006a49
- (void)layoutMarginsDidChange;	// IMP=0x00000000000069d1
- (id)footnoteContainer;	// IMP=0x0000000000006981
- (id)footnoteButton;	// IMP=0x0000000000006931
- (id)footnoteLabelString;	// IMP=0x00000000000068e1
- (id)footnoteLabel;	// IMP=0x0000000000006891
- (id)detailsStrings;	// IMP=0x0000000000006841
- (id)detailsFields;	// IMP=0x00000000000067f1
- (id)titleContainer;	// IMP=0x00000000000067a1
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000000667d
@property(retain, nonatomic) UIView *accessoryView;
@property(retain, nonatomic) NSString *footnoteButtonText;
@property(retain, nonatomic) TLKRichText *footnote;
@property(retain, nonatomic) NSArray *details;
@property(nonatomic) _Bool secondaryTitleIsDetached;
@property(retain, nonatomic) TLKImage *secondaryTitleImage;
@property(retain, nonatomic) TLKRichText *secondaryTitle;
@property(nonatomic) _Bool truncateTitleMiddle;
@property(retain, nonatomic) TLKRichText *title;
@property(retain, nonatomic) TLKRichText *bannerBadge;
@property(nonatomic) _Bool useCompactMode;
- (void)footnoteButtonPressed;	// IMP=0x0000000000005e80
- (id)setupContentView;	// IMP=0x0000000000005e48

// Remaining properties
@property(retain, nonatomic) TLKTextAreaView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
