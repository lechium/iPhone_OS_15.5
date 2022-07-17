//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface SRCompactDeviceMotionEffectView : UIView
{
    UIImageView *_effectImageView;	// 8 = 0x8
    _Bool _shouldUpdateOffsetRadians;	// 16 = 0x10
    _Bool _forcefullyUpdateImageViewFrame;	// 17 = 0x11
    double _initialOffsetRadians;	// 24 = 0x18
    long long _cachedInterfaceOrientation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000086acc
- (long long)_currentInterfaceOrientation;	// IMP=0x0010000000086a7f
- (id)_currentWindowScene;	// IMP=0x00100000000868ec
- (void)_cleanUpIfNeeded;	// IMP=0x00100000000868e6
- (void)_configureDeviceMotionIfNeeded;	// IMP=0x00100000000866be
- (void)viewWillBeUpdated;	// IMP=0x00100000000866ad
- (void)_updateViewsforTraitCollection:(id)arg1;	// IMP=0x00100000000864fc
- (_Bool)_supportsDeviceMotion;	// IMP=0x00100000000864e2
- (void)layoutSubviews;	// IMP=0x00100000000860ba
- (void)invalidate;	// IMP=0x00100000000860a8
- (void)updateMaskingForView:(id)arg1;	// IMP=0x0010000000085e92
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000085db8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000085ce1

@end
