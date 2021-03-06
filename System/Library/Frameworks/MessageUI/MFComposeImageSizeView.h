//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UISegmentedControl;
@protocol MFComposeImageSizeViewDelegate;

@interface MFComposeImageSizeView
{
    UISegmentedControl *_segmentedControl;	// 8 = 0x8
    NSMutableArray *_visibleScales;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002c8cb
- (void)segmentedControlChanged;	// IMP=0x000000000002c78f
- (void)setScale:(unsigned long long)arg1;	// IMP=0x000000000002c703
- (void)removeSizeDescriptionForScale:(unsigned long long)arg1;	// IMP=0x000000000002c635
- (void)setSizeDescription:(id)arg1 forScale:(unsigned long long)arg2;	// IMP=0x000000000002c036
- (unsigned long long)_insertIndexForScale:(unsigned long long)arg1;	// IMP=0x000000000002bf58
- (unsigned long long)_scaleLabelIndexForScale:(unsigned long long)arg1;	// IMP=0x000000000002bf30
- (void)layoutSubviews;	// IMP=0x000000000002bc8f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002b86d

// Remaining properties
@property(nonatomic) __weak id <MFComposeImageSizeViewDelegate> delegate; // @dynamic delegate;

@end

