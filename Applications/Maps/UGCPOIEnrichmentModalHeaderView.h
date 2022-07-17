//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKMapItem, MapsThemeButton, ModalCardHeaderConfiguration, NSProgress, UGCPOIEnrichmentHeaderView, UIProgressView, UIStackView;

__attribute__((visibility("hidden")))
@interface UGCPOIEnrichmentModalHeaderView : UIView
{
    UIStackView *_stackView;	// 8 = 0x8
    UIProgressView *_progressView;	// 16 = 0x10
    UGCPOIEnrichmentHeaderView *_poiIconView;	// 24 = 0x18
    ModalCardHeaderConfiguration *_headerConfiguration;	// 32 = 0x20
    MapsThemeButton *_leadingButton;	// 40 = 0x28
    MapsThemeButton *_trailingButton;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000a73f18
@property(readonly, nonatomic) MapsThemeButton *trailingButton; // @synthesize trailingButton=_trailingButton;
@property(readonly, nonatomic) MapsThemeButton *leadingButton; // @synthesize leadingButton=_leadingButton;
@property(nonatomic) float progress;
@property(retain, nonatomic) NSProgress *observedProgress;
@property(retain, nonatomic) MKMapItem *mapItem;
- (void)_setupConstraints;	// IMP=0x0010000000a737ac
- (void)_updateSizeForCurrentConfiguration;	// IMP=0x0010000000a736ab
- (void)_setupSubviews;	// IMP=0x0010000000a733b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a73314

@end
