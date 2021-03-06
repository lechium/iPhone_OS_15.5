//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AvatarUI/AVTColorSliderDelegate-Protocol.h>

@class AVTAvatarAttributeEditorSectionColorItem, AVTColorSlider, NSArray;
@protocol AVTAvatarColorSliderContainerViewDelegate;

@interface AVTAvatarColorSliderContainerView : UIView <AVTColorSliderDelegate>
{
    AVTAvatarAttributeEditorSectionColorItem *_sectionItem;	// 8 = 0x8
    id <AVTAvatarColorSliderContainerViewDelegate> _delegate;	// 16 = 0x10
    AVTColorSlider *_slider;	// 24 = 0x18
    NSArray *_layoutConstraints;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e5ccc
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) AVTColorSlider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak id <AVTAvatarColorSliderContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVTAvatarAttributeEditorSectionColorItem *sectionItem; // @synthesize sectionItem=_sectionItem;
- (void)colorSlider:(id)arg1 didFinishSelectingValue:(double)arg2;	// IMP=0x00000000000e5bca
- (void)colorSlider:(id)arg1 valueChanged:(double)arg2;	// IMP=0x00000000000e5b50
- (void)updateSliderWithColorPreset:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e5902
- (void)updateSliderTrackLayerAnimated:(_Bool)arg1;	// IMP=0x00000000000e5738
- (void)layoutSubviews;	// IMP=0x00000000000e5647
- (void)setSectionItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e55d6
- (id)initWithFrame:(struct CGRect)arg1 userInterfaceLayoutDirection:(long long)arg2;	// IMP=0x00000000000e54ac

@end

