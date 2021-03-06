//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSNumber, NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface VenueFloorPickerCell : UICollectionViewCell
{
    _Bool _isUserLocation;	// 8 = 0x8
    _Bool _lacksSearchResults;	// 9 = 0x9
    _Bool _showSelection;	// 10 = 0xa
    NSNumber *_floorOrdinal;	// 16 = 0x10
    UILabel *_floorNameLabel;	// 24 = 0x18
    UIView *_selectionBackgroundView;	// 32 = 0x20
}

+ (id)floorNameFont;	// IMP=0x002000000062b4b1
+ (double)cellHeight;	// IMP=0x001000000062b43e
+ (id)reuseIdentifier;	// IMP=0x001000000062b431
- (void).cxx_destruct;	// IMP=0x002000000062b954
@property(nonatomic) _Bool showSelection; // @synthesize showSelection=_showSelection;
@property(nonatomic) _Bool lacksSearchResults; // @synthesize lacksSearchResults=_lacksSearchResults;
@property(nonatomic) _Bool isUserLocation; // @synthesize isUserLocation=_isUserLocation;
@property(retain, nonatomic) UIView *selectionBackgroundView; // @synthesize selectionBackgroundView=_selectionBackgroundView;
@property(retain, nonatomic) UILabel *floorNameLabel; // @synthesize floorNameLabel=_floorNameLabel;
@property(copy, nonatomic) NSNumber *floorOrdinal; // @synthesize floorOrdinal=_floorOrdinal;
- (void)updateStyle;	// IMP=0x001000000062b5f2
- (void)updateTheme;	// IMP=0x001000000062b5e0
- (void)setSelected:(_Bool)arg1;	// IMP=0x001000000062b55e
@property(copy, nonatomic) NSString *floorName;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000062abb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

