//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScrollViewScrollObserver-Protocol.h>

@class CASpringAnimation, NSString, UIScrollView, UIView;
@protocol _UITVScrollViewManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITVScrollViewManager : NSObject <_UIScrollViewScrollObserver>
{
    _Bool _delegateScrollViewManagerDidFinishScrolling;	// 8 = 0x8
    _Bool _useCustomMaskForScrolling;	// 9 = 0x9
    id <_UITVScrollViewManagerDelegate> _delegate;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    long long _scrollStyle;	// 32 = 0x20
    CASpringAnimation *_scrollAnimation;	// 40 = 0x28
    UIView *_snapshotViewForWindow;	// 48 = 0x30
    struct CGPoint _targetOffset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000007f62c7
@property(nonatomic) struct CGPoint targetOffset; // @synthesize targetOffset=_targetOffset;
@property(nonatomic) _Bool useCustomMaskForScrolling; // @synthesize useCustomMaskForScrolling=_useCustomMaskForScrolling;
@property(retain, nonatomic) UIView *snapshotViewForWindow; // @synthesize snapshotViewForWindow=_snapshotViewForWindow;
@property(retain, nonatomic) CASpringAnimation *scrollAnimation; // @synthesize scrollAnimation=_scrollAnimation;
@property(nonatomic) long long scrollStyle; // @synthesize scrollStyle=_scrollStyle;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <_UITVScrollViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x00000000007f6025
- (id)_customScrollViewMaskForScrolling:(struct CGRect)arg1;	// IMP=0x00000000007f5e6e
- (void)_removeScreenshotViewIfNeeded;	// IMP=0x00000000007f5e20
- (void)_scrollToContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000007f5995
- (long long)_currentPage;	// IMP=0x00000000007f58d6
- (void)_scrollAnimationDidEnd:(id)arg1;	// IMP=0x00000000007f584f
- (void)_tearDown;	// IMP=0x00000000007f57b7
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000000007f5503
- (void)dealloc;	// IMP=0x00000000007f53f8
- (id)initWithScrollView:(id)arg1 scrollStyle:(long long)arg2;	// IMP=0x00000000007f527f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

