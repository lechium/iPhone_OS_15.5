//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class TPKContentView;

@interface CKTipKitCollectionViewCell : UICollectionViewCell
{
    TPKContentView *_tipKitContentView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x00000000004422c2
- (void).cxx_destruct;	// IMP=0x00000000004422e0
@property(retain, nonatomic) TPKContentView *tipKitContentView; // @synthesize tipKitContentView=_tipKitContentView;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000004421bf
- (void)dealloc;	// IMP=0x0000000000441e5b

@end
