//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NavManeuverSignView;

__attribute__((visibility("hidden")))
@interface NavSignCollectionViewCell : UICollectionViewCell
{
    NavManeuverSignView *_navSignView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000918086
@property(readonly, nonatomic) NavManeuverSignView *navSignView; // @synthesize navSignView=_navSignView;
- (void)prepareForReuse;	// IMP=0x001000000091802c
- (void)_configureConstraints;	// IMP=0x0010000000917d24
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000917c28

@end

