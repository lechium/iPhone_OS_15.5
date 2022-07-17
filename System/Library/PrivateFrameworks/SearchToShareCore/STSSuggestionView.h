//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class STSSuggestionFooter, UITableView;
@protocol STSSuggestionViewDelegate;

@interface STSSuggestionView : UIView
{
    STSSuggestionFooter *_footerView;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    UIView *_overlayView;	// 24 = 0x18
    id <STSSuggestionViewDelegate> _delegate;	// 32 = 0x20
    struct CGPoint _footerOffset;	// 40 = 0x28
    struct UIEdgeInsets _contentInset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000024557
@property(nonatomic) __weak id <STSSuggestionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint footerOffset; // @synthesize footerOffset=_footerOffset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)_updateContentInsets;	// IMP=0x00000000000243fc
- (void)_updateFooterOrigin;	// IMP=0x0000000000024381
- (void)updateFooterImage:(id)arg1;	// IMP=0x0000000000024364
- (void)_handleLogoTap:(id)arg1;	// IMP=0x00000000000242c7
- (struct CGSize)footerSize;	// IMP=0x000000000002429a
@property(nonatomic, getter=isShowingFooter) _Bool showingFooter;
- (void)setOverlayView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000023f13
- (void)layoutSubviews;	// IMP=0x0000000000023e25
- (id)init;	// IMP=0x00000000000239bb

@end
