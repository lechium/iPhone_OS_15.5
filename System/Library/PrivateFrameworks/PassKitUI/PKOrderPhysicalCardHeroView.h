//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKPhysicalCardArtworkView, UIImageView;

@interface PKOrderPhysicalCardHeroView : UIView
{
    UIImageView *_backgroundView;	// 8 = 0x8
    PKPhysicalCardArtworkView *_artworkView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f072a
@property(readonly, nonatomic) PKPhysicalCardArtworkView *artworkView; // @synthesize artworkView=_artworkView;
- (id)_backgroundImage;	// IMP=0x00000000000f06d4
- (void)layoutSubviews;	// IMP=0x00000000000f05c9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000f0589
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f0453

@end

