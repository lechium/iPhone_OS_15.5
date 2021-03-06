//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSData, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface CKBusinessMacToolbarView : UIView
{
    _Bool _showingInStandAloneWindow;	// 8 = 0x8
    NSData *_bannerImageData;	// 16 = 0x10
    double _preferredHeight;	// 24 = 0x18
    UIView *_leftItemView;	// 32 = 0x20
    UIImage *_bannerImage;	// 40 = 0x28
    UILabel *_fallbackTitleLabel;	// 48 = 0x30
    struct CGRect _detailsPopoverFrame;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002c0137
@property(retain, nonatomic) UILabel *fallbackTitleLabel; // @synthesize fallbackTitleLabel=_fallbackTitleLabel;
@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(retain, nonatomic) UIView *leftItemView; // @synthesize leftItemView=_leftItemView;
@property(nonatomic) struct CGRect detailsPopoverFrame; // @synthesize detailsPopoverFrame=_detailsPopoverFrame;
@property(nonatomic) _Bool showingInStandAloneWindow; // @synthesize showingInStandAloneWindow=_showingInStandAloneWindow;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) NSData *bannerImageData; // @synthesize bannerImageData=_bannerImageData;
- (void)_updateBannerImage:(id)arg1;	// IMP=0x00000000002bfefd
- (id)_generateScaledImageFromBannerData;	// IMP=0x00000000002bfc09
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002bfad9
- (void)setFallbackTitleColor:(id)arg1;	// IMP=0x00000000002bfa3a
- (void)setFallbackTitle:(id)arg1;	// IMP=0x00000000002bf89d
- (void)layoutSubviews;	// IMP=0x00000000002bf32f

@end

