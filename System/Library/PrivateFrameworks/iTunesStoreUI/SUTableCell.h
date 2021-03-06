//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class SUCellConfiguration, SUItemOfferButton, SUTableCellContentView, UIBezierPath, UIColor;

@interface SUTableCell : UITableViewCell
{
    UIColor *_bottomBorderColor;	// 8 = 0x8
    SUTableCellContentView *_configurationView;	// 16 = 0x10
    unsigned int _hideHighlight:1;	// 24 = 0x18
    SUItemOfferButton *_itemOfferButton;	// 32 = 0x20
    CDStruct_3e55db63 _position;	// 40 = 0x28
    UIColor *_topBorderColor;	// 72 = 0x48
    long long _editState;	// 80 = 0x50
}

@property(nonatomic) long long editState; // @synthesize editState=_editState;
@property(retain, nonatomic) UIColor *topBorderColor; // @synthesize topBorderColor=_topBorderColor;
@property(nonatomic) CDStruct_3e55db63 position; // @synthesize position=_position;
@property(retain, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(nonatomic) _Bool usesSubviews;
@property(nonatomic) _Bool showHighlight;
@property(nonatomic) _Bool highlightsOnlyContentView;
@property(nonatomic) _Bool drawAsDisabled;
@property(retain, nonatomic) SUCellConfiguration *configuration;
@property(nonatomic) int clipCorners;
@property(readonly, retain, nonatomic) SUItemOfferButton *itemOfferButton;
@property(readonly, nonatomic) UIBezierPath *clippingPath;
- (void)setShowingDeleteConfirmation:(_Bool)arg1;	// IMP=0x0000000000036dae
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000036d1a
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000036c86
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000036be8
- (void)layoutSubviews;	// IMP=0x00000000000368cc
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000367c8
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000036613
- (_Bool)_canDrawContent;	// IMP=0x00000000000365df
- (id)copyPurchaseAnimationView;	// IMP=0x000000000003639f
- (void)dealloc;	// IMP=0x0000000000036310
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000361bc

@end

