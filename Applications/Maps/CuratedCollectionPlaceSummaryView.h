//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CuratedCollectionPlaceSummaryView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_secondaryLabel;	// 16 = 0x10
    UILabel *_tertiaryLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000009dd3de
@property(retain, nonatomic) UILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_setupConstraints;	// IMP=0x00100000009dcc2c
- (void)_createSubviews;	// IMP=0x00100000009dc71d
- (void)configureWithModel:(id)arg1;	// IMP=0x00100000009dc451
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009dc3df

@end

