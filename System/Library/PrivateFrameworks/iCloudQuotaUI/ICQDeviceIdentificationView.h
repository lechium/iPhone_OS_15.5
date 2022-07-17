//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

@interface ICQDeviceIdentificationView : UIView
{
    UIImageView *_deviceImageView;	// 8 = 0x8
    UILabel *_deviceNameLabel;	// 16 = 0x10
    UILabel *_deviceModelLabel;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x000000000003840d
- (void).cxx_destruct;	// IMP=0x00000000000390eb
- (void)layoutSubviews;	// IMP=0x0000000000038d54
@property(retain, nonatomic) UIImage *deviceImage; // @dynamic deviceImage;
- (void)loadImageForDeviceIdentifier:(id)arg1 URL:(id)arg2;	// IMP=0x0000000000038944
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000388ec
- (void)sizeToFit;	// IMP=0x0000000000038878
- (id)initWithFrame:(struct CGRect)arg1 deviceName:(id)arg2 deviceIdentifier:(id)arg3 imageURL:(id)arg4 isCurrentDevice:(_Bool)arg5;	// IMP=0x0000000000038463

@end
