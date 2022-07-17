//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class CLKDevice, NTKPigmentEditOption, UIColor, UIImageView;

@interface _NTKPigmentAddCell : UICollectionViewCell
{
    CLKDevice *_device;	// 8 = 0x8
    UIColor *_primaryColor;	// 16 = 0x10
    NTKPigmentEditOption *_pigmentEditOption;	// 24 = 0x18
    UIImageView *_swatch;	// 32 = 0x20
    UIImageView *_check;	// 40 = 0x28
}

+ (id)reuseIdentifier;	// IMP=0x00000000001b9a7f
- (void).cxx_destruct;	// IMP=0x00000000001ba042
@property(readonly, nonatomic) UIImageView *check; // @synthesize check=_check;
@property(readonly, nonatomic) UIImageView *swatch; // @synthesize swatch=_swatch;
@property(retain, nonatomic) NTKPigmentEditOption *pigmentEditOption; // @synthesize pigmentEditOption=_pigmentEditOption;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void)setImage:(id)arg1;	// IMP=0x00000000001b9fbc
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001b9f67
- (void)layoutSubviews;	// IMP=0x00000000001b9e4f
- (void)_updateCheck;	// IMP=0x00000000001b9c75
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b9a98

@end
