//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, NSUUID, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerCollectionViewCell : UICollectionViewCell
{
    _Bool _displaySelection;	// 8 = 0x8
    _Bool _displaysBorder;	// 9 = 0x9
    unsigned long long _cellStyle;	// 16 = 0x10
    NSUUID *_displaySessionUUID;	// 24 = 0x18
    CAShapeLayer *_selectionLayer;	// 32 = 0x20
    UILabel *_captionLabel;	// 40 = 0x28
    UIView *_containerView;	// 48 = 0x30
    UIView *_containerContentView;	// 56 = 0x38
}

+ (struct CGPath *)selectionPathInBounds:(struct CGRect)arg1 forCellStyle:(unsigned long long)arg2;	// IMP=0x0000000000013bb8
+ (double)cornerRadiusForBounds:(struct CGRect)arg1 forCellStyle:(unsigned long long)arg2;	// IMP=0x0000000000013b98
+ (id)cellIdentifier;	// IMP=0x0000000000013b8b
- (void).cxx_destruct;	// IMP=0x0000000000013643
@property(retain, nonatomic) UIView *containerContentView; // @synthesize containerContentView=_containerContentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) CAShapeLayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain, nonatomic) NSUUID *displaySessionUUID; // @synthesize displaySessionUUID=_displaySessionUUID;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) _Bool displaysBorder; // @synthesize displaysBorder=_displaysBorder;
@property(nonatomic) _Bool displaySelection; // @synthesize displaySelection=_displaySelection;
- (void)prepareForReuse;	// IMP=0x0000000000013486
- (void)clearContainerViewAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000132e3
- (void)updateBorderTintColor:(id)arg1;	// IMP=0x000000000001322a
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000012e23
- (void)updateCaptionFrame;	// IMP=0x0000000000012a5c
- (void)updateWithCaption:(id)arg1;	// IMP=0x0000000000012794
- (void)updateWithView:(id)arg1 animation:(unsigned long long)arg2;	// IMP=0x00000000000124ca
- (void)layoutSubviews;	// IMP=0x0000000000012121
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000011f04

@end

