//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell
{
    UIView *_pageContentView;	// 8 = 0x8
    struct UIEdgeInsets _additionalContentInsets;	// 16 = 0x10
}

+ (id)cellIdentifier;	// IMP=0x0000000000051642
- (void).cxx_destruct;	// IMP=0x0000000000051a8b
@property(nonatomic) struct UIEdgeInsets additionalContentInsets; // @synthesize additionalContentInsets=_additionalContentInsets;
@property(retain, nonatomic) UIView *pageContentView; // @synthesize pageContentView=_pageContentView;
- (void)prepareForReuse;	// IMP=0x0000000000051915
- (void)layoutSubviews;	// IMP=0x00000000000517e9

@end
