//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray;

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell
{
    NSArray *_people;	// 8 = 0x8
    NSArray *_groupAvatarViews;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004c2879
@property(retain, nonatomic) NSArray *groupAvatarViews; // @synthesize groupAvatarViews=_groupAvatarViews;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
- (id)focusEffect;	// IMP=0x00000000004c2760
- (void)_layoutAvatarViewsInFrame:(struct CGRect)arg1;	// IMP=0x00000000004c132a
- (void)prepareForReuse;	// IMP=0x00000000004c0814
- (void)layoutSubviews;	// IMP=0x00000000004c0779
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004c0739

@end
