//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface PXSmartScaleView : UIView
{
    struct CGSize _displaySize;	// 8 = 0x8
}

@property struct CGSize displaySize; // @synthesize displaySize=_displaySize;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000069809c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000697fd1
@property(readonly) double displayScale;
- (void)viewScaleDidChange;	// IMP=0x0000000000697f2f

@end
