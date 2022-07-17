//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TintedView, UIImage;

@interface LineGraphView : UIView
{
    _Bool _showingTintedLine;	// 8 = 0x8
    UIImage *_lineImage;	// 16 = 0x10
    UIView *_tintedLineClipView;	// 24 = 0x18
    TintedView *_tintedLineView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000497ad
- (void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2;	// IMP=0x000000000004963c
- (void)setShowingSelectedLine:(_Bool)arg1;	// IMP=0x00000000000494df
- (void)setGraphImageSet:(id)arg1;	// IMP=0x0000000000049404
- (void)setSelectedLineImage:(id)arg1;	// IMP=0x0000000000049392
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004932d

@end
