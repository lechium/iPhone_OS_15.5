//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SetupAssistantUI/UIScrollViewDelegate-Protocol.h>

@class BFFPaneHeaderView, NSMutableArray, NSString, UIColor, UIImage, UIScrollView, UIView, UIVisualEffectView;

@interface BFFSplashController : UIViewController <UIScrollViewDelegate>
{
    BFFPaneHeaderView *_headerView;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    NSMutableArray *_buttons;	// 24 = 0x18
    UIColor *_tint;	// 32 = 0x20
    UIView *_bleedView;	// 40 = 0x28
    _Bool _disableIconTint;	// 48 = 0x30
    _Bool _scrollingDisabled;	// 49 = 0x31
    _Bool _fullWidthContent;	// 50 = 0x32
    _Bool _usesTwoButtonLayout;	// 51 = 0x33
    NSString *_detailText;	// 56 = 0x38
    UIView *_contentView;	// 64 = 0x40
    long long _contentViewPosition;	// 72 = 0x48
    UIView *_buttonTray;	// 80 = 0x50
    UIColor *_bleedColor;	// 88 = 0x58
    UIVisualEffectView *_effectView;	// 96 = 0x60
    struct UIEdgeInsets _additionalInsets;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000010c93
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) _Bool usesTwoButtonLayout; // @synthesize usesTwoButtonLayout=_usesTwoButtonLayout;
@property(retain, nonatomic) UIColor *bleedColor; // @synthesize bleedColor=_bleedColor;
@property(nonatomic) _Bool fullWidthContent; // @synthesize fullWidthContent=_fullWidthContent;
@property(nonatomic, getter=isScrollingDisabled) _Bool scrollingDisabled; // @synthesize scrollingDisabled=_scrollingDisabled;
@property(nonatomic) _Bool disableIconTint; // @synthesize disableIconTint=_disableIconTint;
@property(retain, nonatomic) UIColor *tint; // @synthesize tint=_tint;
@property(nonatomic) struct UIEdgeInsets additionalInsets; // @synthesize additionalInsets=_additionalInsets;
@property(readonly, nonatomic) UIView *buttonTray; // @synthesize buttonTray=_buttonTray;
@property(nonatomic) long long contentViewPosition; // @synthesize contentViewPosition=_contentViewPosition;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
- (void)_buttonPressed:(id)arg1;	// IMP=0x00000000000109dc
- (void)_updateTrayVisibility;	// IMP=0x0000000000010855
- (void)updateBleedViewLayout;	// IMP=0x000000000001070b
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000106dd
- (void)updateBleedColor;	// IMP=0x00000000000104cb
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000010407
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001031a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000102d9
- (void)viewDidLayoutSubviews;	// IMP=0x000000000000ee7c
- (id)contentScrollView;	// IMP=0x000000000000ee67
- (void)loadView;	// IMP=0x000000000000ebc2
- (void)setButtonsEnabled:(_Bool)arg1;	// IMP=0x000000000000ea36
- (id)_createButtonWithTitle:(id)arg1 style:(long long)arg2;	// IMP=0x000000000000e798
- (void)_updateButtonFonts;	// IMP=0x000000000000e565
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000e553
@property(readonly, nonatomic) BFFPaneHeaderView *headerView;
- (void)setLinkText:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e071
- (id)buttonAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000dfec
- (void)setTitle:(id)arg1 forButtonAtIndex:(unsigned long long)arg2 action:(CDUnknownBlockType)arg3;	// IMP=0x000000000000dfcd
- (void)removeAllButtons;	// IMP=0x000000000000de34
- (void)addButtonWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;	// IMP=0x000000000000dd9e
- (void)setTitle:(id)arg1;	// IMP=0x000000000000db05
@property(retain, nonatomic) UIImage *icon;
- (id)init;	// IMP=0x000000000000d916

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

