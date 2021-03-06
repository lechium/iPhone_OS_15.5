//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;
@protocol WKHoverPlatterDelegate;

__attribute__((visibility("hidden")))
@interface WKHoverPlatter : NSObject
{
    UIView *_view;	// 8 = 0x8
    id <WKHoverPlatterDelegate> _delegate;	// 16 = 0x10
    struct FloatPoint _hoverPoint;	// 24 = 0x18
    _Bool _hasOutstandingPositionInformationRequest;	// 32 = 0x20
    _Bool _hasDeferredPositionInformationRequest;	// 33 = 0x21
    _Bool _isSittingDown;	// 34 = 0x22
    struct FloatRect _lastHoverBounds;	// 36 = 0x24
    struct RetainPtr<CAShapeLayer> _lastMaskLayer;	// 56 = 0x38
    struct RetainPtr<CALayer> _lastShadowLayer;	// 64 = 0x40
    struct RetainPtr<CALayer> _lastPlatterLayer;	// 72 = 0x48
    struct RetainPtr<CALayer> _lastBackgroundLayer;	// 80 = 0x50
    struct RetainPtr<CAPortalLayer> _lastSnapshotLayer;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x00000000003e666b
- (void).cxx_destruct;	// IMP=0x00000000003e65d9
- (void)clearLayers;	// IMP=0x00000000003e6559
- (void)didFinishAnimationForShadow:(id)arg1;	// IMP=0x00000000003e64ac
- (void)dismissPlatterWithAnimation:(_Bool)arg1;	// IMP=0x00000000003e5ea1
- (void)didReceivePositionInformation:(const void *)arg1;	// IMP=0x00000000003e3f18
- (void)requestPositionInformationForCurrentHoverPoint;	// IMP=0x00000000003e3d6d
@property(nonatomic) struct FloatPoint hoverPoint;
- (void)invalidate;	// IMP=0x00000000003e3d09
- (id)initWithView:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000003e3c4f

@end

