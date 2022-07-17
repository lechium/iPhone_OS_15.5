//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKActivityObserving-Protocol.h>
#import <MapKit/UGCCallToActionEditAccessoryViewDelegate-Protocol.h>

@class MKUGCCallToActionViewAppearance, NSArray, NSString, UILabel, UIView;
@protocol MKUGCCallToActionViewDelegate;

__attribute__((visibility("hidden")))
@interface MKUGCCallToActionView <UGCCallToActionEditAccessoryViewDelegate, MKActivityObserving>
{
    UIView *_accessoryButtonContainerView;	// 8 = 0x8
    UIView *_currentAccessoryView;	// 16 = 0x10
    NSArray *_constraints;	// 24 = 0x18
    UILabel *_callToActionLabel;	// 32 = 0x20
    MKUGCCallToActionViewAppearance *_appearance;	// 40 = 0x28
    double _verticalSpacing;	// 48 = 0x30
    id <MKUGCCallToActionViewDelegate> _delegate;	// 56 = 0x38
    long long _presentationContext;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001e66be
@property(nonatomic) long long presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) __weak id <MKUGCCallToActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MKUGCCallToActionViewAppearance *appearance; // @synthesize appearance=_appearance;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;	// IMP=0x00000000001e65fb
- (void)beginAnimatingActivityIndicator;	// IMP=0x00000000001e65b4
- (void)_addPhotosButtonPressed;	// IMP=0x00000000001e6578
- (void)_likeButtonPressed;	// IMP=0x00000000001e6537
- (void)_dislikeButtonPressed;	// IMP=0x00000000001e64f6
- (void)callToActionEditAccessoryViewTapped:(id)arg1;	// IMP=0x00000000001e64ba
@property(readonly, nonatomic) NSString *analyticValue;
@property(readonly, nonatomic) UIView *anchoringView;
- (void)_updateAccessoryView:(_Bool)arg1;	// IMP=0x00000000001e5d93
- (void)_invalidateLayout;	// IMP=0x00000000001e5d53
- (void)_contentSizeChanged;	// IMP=0x00000000001e5cf4
- (void)_setupConstraints;	// IMP=0x00000000001e5794
- (void)_setupSubviews;	// IMP=0x00000000001e5672
- (id)initWithAppearance:(id)arg1 verticalSpacing:(double)arg2;	// IMP=0x00000000001e5565
- (id)initWithAppearance:(id)arg1;	// IMP=0x00000000001e5550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
