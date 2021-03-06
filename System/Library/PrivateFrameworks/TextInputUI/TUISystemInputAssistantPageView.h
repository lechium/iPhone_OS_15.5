//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

#import <TextInputUI/UIScrollViewDelegate-Protocol.h>

@class NSString, TUIPredictionCellButton, UIScrollView;
@protocol TUISystemInputAssistantPageViewDelegate;

@interface TUISystemInputAssistantPageView : UIView <UIScrollViewDelegate>
{
    unsigned long long _currentChevronStyle;	// 8 = 0x8
    _Bool _secondaryViewInitialized;	// 16 = 0x10
    _Bool _layoutIsDirty;	// 17 = 0x11
    _Bool _hidesExpandButton;	// 18 = 0x12
    _Bool _secondaryViewVisible;	// 19 = 0x13
    UIView *_primaryView;	// 24 = 0x18
    UIView *_secondaryView;	// 32 = 0x20
    TUIPredictionCellButton *_expandButton;	// 40 = 0x28
    id <TUISystemInputAssistantPageViewDelegate> _pageViewDelegate;	// 48 = 0x30
    UIView *_clipView;	// 56 = 0x38
    UIView *_primaryContainerView;	// 64 = 0x40
    UIScrollView *_scrollView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000058d5c
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *primaryContainerView; // @synthesize primaryContainerView=_primaryContainerView;
@property(retain, nonatomic) UIView *clipView; // @synthesize clipView=_clipView;
@property(nonatomic) _Bool secondaryViewVisible; // @synthesize secondaryViewVisible=_secondaryViewVisible;
@property(nonatomic) __weak id <TUISystemInputAssistantPageViewDelegate> pageViewDelegate; // @synthesize pageViewDelegate=_pageViewDelegate;
@property(readonly, nonatomic) TUIPredictionCellButton *expandButton; // @synthesize expandButton=_expandButton;
@property(nonatomic) _Bool hidesExpandButton; // @synthesize hidesExpandButton=_hidesExpandButton;
@property(retain, nonatomic) UIView *secondaryView; // @synthesize secondaryView=_secondaryView;
@property(retain, nonatomic) UIView *primaryView; // @synthesize primaryView=_primaryView;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000058b7f
- (void)layoutSubviews;	// IMP=0x00000000000584cb
- (void)didMoveToWindow;	// IMP=0x000000000005847d
- (void)setNeedsLayout;	// IMP=0x0000000000058443
- (struct CGSize)_contentSize;	// IMP=0x00000000000583e3
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000058347
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000582ab
- (void)_checkOldBounds:(struct CGRect)arg1 forContentOffsetChangeWithNewBounds:(struct CGRect)arg2;	// IMP=0x0000000000058249
- (void)setSecondaryViewVisible:(_Bool)arg1 force:(_Bool)arg2 withAnimationType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000057ef1
- (void)setSecondaryViewVisible:(_Bool)arg1 withAnimationType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057ed7
- (void)setSecondaryViewVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057ec0
- (id)_createExpandButtonIfNecessary;	// IMP=0x0000000000057d6d
- (id)imageSymbolConfigurationForAssistantItem;	// IMP=0x0000000000057cc7
- (void)_updateExpandButtonChevronImage;	// IMP=0x00000000000579e8
- (unsigned long long)_expandChevronImageStyleForRenderConfig:(id)arg1;	// IMP=0x00000000000579c7
- (_Bool)_expandButtonVisible;	// IMP=0x00000000000579b3
- (void)_setRenderConfig:(id)arg1;	// IMP=0x0000000000057972
- (void)updateScrollEnabled;	// IMP=0x0000000000057792
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005720f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

