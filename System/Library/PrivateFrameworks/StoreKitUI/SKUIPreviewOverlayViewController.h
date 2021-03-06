//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>
#import <StoreKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class IKAppDocument, NSString, SKUIHorizontalLockupView, SKUILayoutCache, SKUIViewElementLayoutContext, SUPlayerStatus, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIPreviewOverlayViewController <SKUIItemStateCenterObserver, SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, UIGestureRecognizerDelegate>
{
    long long _backgroundStyle;	// 8 = 0x8
    IKAppDocument *_document;	// 16 = 0x10
    SKUILayoutCache *_layoutCache;	// 24 = 0x18
    SKUIViewElementLayoutContext *_layoutContext;	// 32 = 0x20
    SKUIHorizontalLockupView *_lockupView;	// 40 = 0x28
    SUPlayerStatus *_previewStatus;	// 48 = 0x30
    UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000036a78d
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (double)_overlayWidth;	// IMP=0x000000000036a6bc
- (id)_layoutCache;	// IMP=0x000000000036a667
- (void)_tapAction:(id)arg1;	// IMP=0x000000000036a536
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000036a4e6
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x000000000036a4d4
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x000000000036a4a0
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;	// IMP=0x000000000036a294
- (void)loadView;	// IMP=0x000000000036a031
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000369fcf
- (void)reloadOverlayView;	// IMP=0x0000000000369ebc
- (void)prepareOverlayView;	// IMP=0x0000000000369c18
- (void)documentDidUpdate:(id)arg1;	// IMP=0x0000000000369c12
- (void)dealloc;	// IMP=0x0000000000369b0e
- (id)initWithDocument:(id)arg1;	// IMP=0x0000000000369a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

