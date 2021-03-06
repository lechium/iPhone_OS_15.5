//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface NANowPlayingArtworkView : UIView
{
    UIImageView *_trackImageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e2ec
@property(retain, nonatomic) UIImageView *trackImageView; // @synthesize trackImageView=_trackImageView;
- (unsigned long long)accessibilityTraits;	// IMP=0x000000000000e2b7
- (_Bool)isAccessibilityElement;	// IMP=0x000000000000e2af
- (struct CGSize)artworkSizeForTitleViewWidth:(double)arg1;	// IMP=0x000000000000e2a6
@property(readonly, nonatomic) struct CGSize artworkSize;
- (void)setTrackImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000e0d8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000e0cf
- (void)layoutSubviews;	// IMP=0x000000000000dfc9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000de66

@end

