//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSNumber;

@interface STHorizontallySegmentedView : UIView
{
    _Bool _useVibrancy;	// 8 = 0x8
    _Bool _truncateLabels;	// 9 = 0x9
    NSArray *_segmentItems;	// 16 = 0x10
    NSNumber *_numberOfLines;	// 24 = 0x18
    unsigned long long _maximumNumberOfLines;	// 32 = 0x20
    double _previousWidth;	// 40 = 0x28
    NSMutableArray *_segmentViews;	// 48 = 0x30
    NSArray *_segmentConstraints;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000061300
@property(copy, nonatomic) NSArray *segmentConstraints; // @synthesize segmentConstraints=_segmentConstraints;
@property(readonly, nonatomic) NSMutableArray *segmentViews; // @synthesize segmentViews=_segmentViews;
@property(nonatomic) double previousWidth; // @synthesize previousWidth=_previousWidth;
@property(readonly) _Bool truncateLabels; // @synthesize truncateLabels=_truncateLabels;
@property(readonly) _Bool useVibrancy; // @synthesize useVibrancy=_useVibrancy;
@property(readonly) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(retain, nonatomic) NSNumber *numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSArray *segmentItems; // @synthesize segmentItems=_segmentItems;
- (void)_setUpConstraints;	// IMP=0x000000000005fac7
- (void)layoutSubviews;	// IMP=0x000000000005fa20
- (id)init;	// IMP=0x000000000005f72d
- (void)_stHorizontallySegmentedViewCommonInit;	// IMP=0x000000000005f69c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005f655
- (id)initWithVibrancy:(_Bool)arg1 maximumNumberOfLines:(unsigned long long)arg2 truncateLabels:(_Bool)arg3;	// IMP=0x000000000005f5c1

@end
