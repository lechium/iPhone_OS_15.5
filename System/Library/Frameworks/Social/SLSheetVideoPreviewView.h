//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetVideoPreviewView
{
    UIView *_infoBar;	// 8 = 0x8
    UIImageView *_videoGlyphView;	// 16 = 0x10
    UILabel *_durationLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000047b56
- (void)_applyConstraints;	// IMP=0x00000000000477ae
- (void)setVideoDuration:(double)arg1;	// IMP=0x00000000000475a0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000047378
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000472bf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000046e39

@end
