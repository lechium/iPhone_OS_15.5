//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class CAMSlashMaskView, CAMSlashView, UIImageView;

@interface CAMAutoMacroButton : UIButton
{
    _Bool _active;	// 8 = 0x8
    long long _orientation;	// 16 = 0x10
    CAMSlashView *__slashView;	// 24 = 0x18
    CAMSlashMaskView *__slashMaskView;	// 32 = 0x20
    UIImageView *__imageView;	// 40 = 0x28
    UIImageView *__backgroundView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000084280
@property(readonly, nonatomic) UIImageView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(readonly, nonatomic) CAMSlashMaskView *_slashMaskView; // @synthesize _slashMaskView=__slashMaskView;
@property(readonly, nonatomic) CAMSlashView *_slashView; // @synthesize _slashView=__slashView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (id)_createCircleImageForContentSize:(id)arg1;	// IMP=0x0000000000084142
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008408a
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000084031
- (void)_updateSlashAnimated:(_Bool)arg1;	// IMP=0x0000000000083eee
- (void)_updateImage;	// IMP=0x0000000000083ddd
- (void)_updateTintColors;	// IMP=0x0000000000083c89
- (void)_updateBackgroundImage;	// IMP=0x0000000000083b99
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000083ad2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000839a2
- (void)layoutSubviews;	// IMP=0x0000000000083635
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000834e0

@end

