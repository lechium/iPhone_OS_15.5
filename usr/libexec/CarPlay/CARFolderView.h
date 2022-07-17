//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBRootFolderView.h>

@class CARScrollButton, NSLayoutConstraint;
@protocol CAREnvironment;

@interface CARFolderView : SBRootFolderView
{
    _Bool _buttonUXEnabled;	// 8 = 0x8
    id <CAREnvironment> _environment;	// 16 = 0x10
    CARScrollButton *_scrollLeftButton;	// 24 = 0x18
    CARScrollButton *_scrollRightButton;	// 32 = 0x20
    NSLayoutConstraint *_leadingScrollArrowLeadingConstraint;	// 40 = 0x28
    NSLayoutConstraint *_trailingScrollArrowTrailingConstraint;	// 48 = 0x30
    struct UIEdgeInsets _listViewInsets;	// 56 = 0x38
}

+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;	// IMP=0x00400000000a4332
+ (double)maximumPageControlHeightForInteractionAffordances:(unsigned long long)arg1;	// IMP=0x00100000000a3d67
+ (Class)_scrollViewClass;	// IMP=0x00100000000a3d56
- (void).cxx_destruct;	// IMP=0x00200000000a4d3c
@property(retain, nonatomic) NSLayoutConstraint *trailingScrollArrowTrailingConstraint; // @synthesize trailingScrollArrowTrailingConstraint=_trailingScrollArrowTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingScrollArrowLeadingConstraint; // @synthesize leadingScrollArrowLeadingConstraint=_leadingScrollArrowLeadingConstraint;
@property(nonatomic) struct UIEdgeInsets listViewInsets; // @synthesize listViewInsets=_listViewInsets;
@property(retain, nonatomic) CARScrollButton *scrollRightButton; // @synthesize scrollRightButton=_scrollRightButton;
@property(retain, nonatomic) CARScrollButton *scrollLeftButton; // @synthesize scrollLeftButton=_scrollLeftButton;
@property(nonatomic) _Bool buttonUXEnabled; // @synthesize buttonUXEnabled=_buttonUXEnabled;
@property(nonatomic) __weak id <CAREnvironment> environment; // @synthesize environment=_environment;
- (void)_scrollButtonPressed:(id)arg1;	// IMP=0x00100000000a4b66
- (void)_updateScrollButtonStatesForIndex:(long long)arg1;	// IMP=0x00100000000a4ab7
- (struct UIEdgeInsets)_listViewVerticalInset;	// IMP=0x00100000000a47e1
- (double)_listViewSideInset;	// IMP=0x00100000000a4603
- (long long)defaultPageIndex;	// IMP=0x00100000000a45f1
- (void)setLeadingCustomViewVisibilityProgress:(double)arg1;	// IMP=0x00100000000a4459
- (double)pageControlAreaHeight;	// IMP=0x00100000000a442d
- (double)internalDockPageControlVerticalMargin;	// IMP=0x00100000000a4404
- (void)_updatePageControlToIndex:(long long)arg1;	// IMP=0x00100000000a43b9
- (double)_offsetToCenterPageControlInSpaceForPageControl;	// IMP=0x00100000000a43b0
- (_Bool)_useParallaxOnPageControl;	// IMP=0x00100000000a43a8
- (id)_newPageControl;	// IMP=0x00100000000a4345
- (long long)iconVisibilityHandling;	// IMP=0x00100000000a433d
- (void)_updateIconListFrames;	// IMP=0x00100000000a4223
- (void)_layoutSubviews;	// IMP=0x00100000000a4177
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00100000000a3f99
- (_Bool)_showsButtons;	// IMP=0x00100000000a3f5d
- (long long)orientation;	// IMP=0x00100000000a3f52
- (_Bool)hidesOffscreenCustomPageViews;	// IMP=0x00100000000a3f4a
- (_Bool)shouldInstallFocusGuides;	// IMP=0x00100000000a3f42
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000a38b6

@end
