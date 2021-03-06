//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MobileSafariUI/BookmarksBarLabelButtonDelegate-Protocol.h>
#import <MobileSafariUI/BookmarksNavigationControllerDelegate-Protocol.h>
#import <MobileSafariUI/SFUnifiedBarContentView-Protocol.h>
#import <MobileSafariUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <MobileSafariUI/_SFNavigationIntentHandling-Protocol.h>

@class BookmarksNavigationController, NSArray, NSMutableArray, NSString, SFUnifiedBarMetrics, SFUnifiedBarTheme, UIButton, WebBookmark;
@protocol BookmarksBarViewDelegate, LinkPreviewProvider, TabGroupProvider, _SFNavigationIntentHandling;

@interface BookmarksBarView : UIView <BookmarksBarLabelButtonDelegate, BookmarksNavigationControllerDelegate, UIPopoverPresentationControllerDelegate, _SFNavigationIntentHandling, SFUnifiedBarContentView>
{
    NSMutableArray *_bookmarkBarLabels;	// 8 = 0x8
    UIView *_separator;	// 16 = 0x10
    int _bookmarkBarID;	// 24 = 0x18
    UIButton *_moreBookmarksButton;	// 32 = 0x20
    WebBookmark *_moreBookmarksParent;	// 40 = 0x28
    unsigned int _moreBookmarksOffset;	// 48 = 0x30
    UIButton *_buttonUsedToShowNavigationController;	// 56 = 0x38
    _Bool _isShowingNavigationController;	// 64 = 0x40
    BookmarksNavigationController *_bookmarksNavigationController;	// 72 = 0x48
    id <BookmarksBarViewDelegate> _delegate;	// 80 = 0x50
    id <LinkPreviewProvider> _linkPreviewProvider;	// 88 = 0x58
    id <_SFNavigationIntentHandling> _navigationIntentHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000002b4c2
@property(nonatomic) __weak id <_SFNavigationIntentHandling> navigationIntentHandler; // @synthesize navigationIntentHandler=_navigationIntentHandler;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <BookmarksBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double topSpacingAdjustment;
@property(readonly, nonatomic) double preferredBottomSpacing;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)bookmarksBarLabelButtonDidSelectOpenInNewTab:(id)arg1;	// IMP=0x000000000002b324
@property(readonly, nonatomic) id <TabGroupProvider> tabGroupProvider;
- (void)bookmarksNavigationControllerViewDidDisappear:(id)arg1;	// IMP=0x000000000002b1ef
- (void)bookmarksNavigationControllerViewDidAppear:(id)arg1;	// IMP=0x000000000002b15b
- (void)bookmarksNavigationControllerDidReload:(id)arg1;	// IMP=0x000000000002ada8
- (void)bookmarksNavigationControllerReloadDidFail:(id)arg1;	// IMP=0x000000000002ad4a
- (id)containingBookmarkForNavigationController:(id)arg1;	// IMP=0x000000000002acf3
- (void)dispatchNavigationIntent:(id)arg1;	// IMP=0x000000000002ac46
- (void)handleNavigationIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002abd1
@property(nonatomic) _Bool showsSeparator;
- (void)dealloc;	// IMP=0x000000000002a7b4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002a72d
- (void)layoutSubviews;	// IMP=0x0000000000029d34
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000029856
- (void)_receivedBookmarksChangedNotification:(id)arg1;	// IMP=0x0000000000029714
- (void)_reloadBookmarkLabels;	// IMP=0x00000000000296e6
- (void)_createAllLabelButtons;	// IMP=0x000000000002925a
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000002922a
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x0000000000028dbc
- (void)_dismissCurrentBookmarksPopover;	// IMP=0x0000000000028d7d
- (void)_presentCurrentBookmarksPopoverFromButton:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000028ae1
- (void)_buttonTapped:(id)arg1;	// IMP=0x000000000002883d
- (void)_clearBookmarksNavigationController;	// IMP=0x00000000000287f7
- (void)_setButtonUsedToShowNavigationController:(id)arg1;	// IMP=0x00000000000287a6

// Remaining properties
@property(nonatomic) double barBackgroundAlpha;
@property(readonly, nonatomic) SFUnifiedBarMetrics *barMetrics;
@property(retain, nonatomic) SFUnifiedBarTheme *barTheme;
@property(readonly, nonatomic, getter=isContentHidden) _Bool contentHidden;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCurrentlyScrollable;
@property(nonatomic) struct CGPoint midpointForCenteredContent;
@property(nonatomic) _Bool pinsScrollPositionToTrailingEdgeDuringResize;
@property(nonatomic) _Bool showsSquishedAccessoryViews;
@property(nonatomic) unsigned long long sizeClass;
@property(nonatomic) double squishTransformFactor;
@property(readonly, nonatomic) NSArray *squishedAccessoryViews;
@property(nonatomic) struct UIEdgeInsets squishedContentInset;
@property(readonly) Class superclass;
@property(nonatomic) double themeColorVisibility;

@end

