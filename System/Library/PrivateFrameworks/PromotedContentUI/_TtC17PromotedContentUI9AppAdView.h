//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PromotedContentUI/ASCAdLockupViewDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC17PromotedContentUI9AppAdView <ASCAdLockupViewDelegate>
{
    MISSING_TYPE *$__lazy_storage_$_appView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_topBorder;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_bottomBorder;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000006f190
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000006f0d0
- (id)metricsActivityForAdLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2 inState:(id)arg3;	// IMP=0x000000000004d0f0
- (id)metricsActivityForPresentingProductDetailsOfAdLockupView:(id)arg1 inState:(id)arg2;	// IMP=0x000000000004d030
- (void)adLockupView:(id)arg1 preprocessOffer:(id)arg2 inState:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000004cad0
- (void)adLockupViewDidSelectAdMarker:(id)arg1;	// IMP=0x000000000004c710
- (void)adLockupView:(id)arg1 didSelectOfferWithState:(id)arg2;	// IMP=0x000000000004c5f0
- (void)adLockupView:(id)arg1 didFailRequestWithError:(id)arg2;	// IMP=0x000000000004c380
- (void)adLockupViewDidFinishRequest:(id)arg1;	// IMP=0x000000000004c320
- (void)adLockupViewDidInvalidateIntrinsicContentSize:(id)arg1;	// IMP=0x000000000004b740
- (void)adLockupViewDidFinishScreenshotsFetchRequest:(id)arg1;	// IMP=0x000000000004b6c0
- (void)adLockupViewDidCancelScreenshotsFetchRequest:(id)arg1;	// IMP=0x000000000004b640
- (id)presentingViewControllerForAdLockupView:(id)arg1;	// IMP=0x000000000004b5c0

@end

