//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKPaymentSetupInitialCardEducationIconsView, PKWatchDeviceImageOverlayView;

@interface PKPeerPaymentIconEducationView : UIView
{
    PKPaymentSetupInitialCardEducationIconsView *_iconsView;	// 8 = 0x8
    PKWatchDeviceImageOverlayView *_watchDeviceImageView;	// 16 = 0x10
    _Bool _showWatchView;	// 24 = 0x18
    _Bool _showIconsView;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x000000000034606b
@property(nonatomic) _Bool showIconsView; // @synthesize showIconsView=_showIconsView;
@property(nonatomic) _Bool showWatchView; // @synthesize showWatchView=_showWatchView;
- (id)_imageForWatchView;	// IMP=0x0000000000345fff
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000345f64
- (void)layoutSubviews;	// IMP=0x0000000000345d8a

@end
