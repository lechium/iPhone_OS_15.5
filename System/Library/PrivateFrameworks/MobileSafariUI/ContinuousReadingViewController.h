//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileSafariUI/UIScrollViewDelegate-Protocol.h>

@class ContinuousReadingBannerView, ContinuousReadingItem, ContinuousReadingPreviewView, NSString, SFBannerTheme, UIScrollView, UIView, _SFWebView;
@protocol ContinuousReadingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ContinuousReadingViewController : NSObject <UIScrollViewDelegate>
{
    SFBannerTheme *_bannerTheme;	// 8 = 0x8
    _Bool _suppressingAutoScroll;	// 16 = 0x10
    _Bool _committingToContinuousDocument;	// 17 = 0x11
    _Bool _scrollingToNextContinuousDocument;	// 18 = 0x12
    ContinuousReadingPreviewView *_previousItemPreviewView;	// 24 = 0x18
    ContinuousReadingPreviewView *_previewView;	// 32 = 0x20
    ContinuousReadingItem *_currentItem;	// 40 = 0x28
    _SFWebView *_currentWebView;	// 48 = 0x30
    id <ContinuousReadingViewControllerDelegate> _delegate;	// 56 = 0x38
    UIScrollView *_outerScrollView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000017ac42
@property(retain, nonatomic, getter=_outerScrollView, setter=_setOuterScrollView:) UIScrollView *outerScrollView; // @synthesize outerScrollView=_outerScrollView;
@property(nonatomic) __weak id <ContinuousReadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isScrollingToNextContinuousDocument) _Bool scrollingToNextContinuousDocument; // @synthesize scrollingToNextContinuousDocument=_scrollingToNextContinuousDocument;
@property(readonly, nonatomic, getter=isCommittingToContinuousDocument) _Bool committingToContinuousDocument; // @synthesize committingToContinuousDocument=_committingToContinuousDocument;
@property(nonatomic, getter=isSuppressingAutoScroll) _Bool suppressingAutoScroll; // @synthesize suppressingAutoScroll=_suppressingAutoScroll;
@property(nonatomic) __weak _SFWebView *currentWebView; // @synthesize currentWebView=_currentWebView;
@property(retain, nonatomic) ContinuousReadingItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) ContinuousReadingPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) ContinuousReadingPreviewView *previousItemPreviewView; // @synthesize previousItemPreviewView=_previousItemPreviewView;
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000017aad9
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000017a906
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000017a823
- (double)_scrollOffsetYForPreviousDocument;	// IMP=0x000000000017a7a8
- (double)_scrollOffsetYForNextDocument;	// IMP=0x000000000017a732
@property(readonly, nonatomic) double scrollOffsetYForCurrentDocument;
- (void)_commitToPreviousContinuousDocument;	// IMP=0x000000000017a676
- (void)_commitToNextContinuousDocument;	// IMP=0x000000000017a5c3
- (void)_willCommitToContinuousDocumentInPreviewView:(id)arg1;	// IMP=0x000000000017a41c
- (void)updateContinuousPreviewViewSizeAttributes;	// IMP=0x0000000000179ffb
- (void)innerScrollViewDidScroll:(id)arg1;	// IMP=0x0000000000179dac
- (void)didCreateWebViewForPreviousDocument:(id)arg1;	// IMP=0x0000000000179bf0
- (void)didCreateWebViewForNextDocument:(id)arg1;	// IMP=0x0000000000179a34
- (void)setBannerTheme:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001798b8
@property(readonly, nonatomic, getter=isUserInteractingWithContainer) _Bool userInteractingWithContainer;
@property(readonly, nonatomic) ContinuousReadingBannerView *topBannerView;
@property(readonly, retain, nonatomic) UIView *view;
- (void)loadNextItem;	// IMP=0x00000000001796d4
- (void)loadPreviousItem;	// IMP=0x000000000017969e
- (void)updateOuterScrollView;	// IMP=0x0000000000179570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

