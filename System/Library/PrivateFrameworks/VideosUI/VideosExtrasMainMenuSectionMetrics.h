//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFontDescriptor;
@protocol VideosExtrasMainMenuSectionMetricsDataSource;

__attribute__((visibility("hidden")))
@interface VideosExtrasMainMenuSectionMetrics : NSObject
{
    double _fittingWidth;	// 8 = 0x8
    _Bool _needsUpdate;	// 16 = 0x10
    long long _itemCount;	// 24 = 0x18
    struct CGSize *_calculatedSizes;	// 32 = 0x20
    id <VideosExtrasMainMenuSectionMetricsDataSource> _dataSource;	// 40 = 0x28
    UIFontDescriptor *_desiredFontDescriptor;	// 48 = 0x30
    UIFontDescriptor *_minimumFontDescriptor;	// 56 = 0x38
    double _desiredCellSpacing;	// 64 = 0x40
    double _minimumCellSpacing;	// 72 = 0x48
    double _desiredWidth;	// 80 = 0x50
    UIFontDescriptor *_fittingFontDescriptor;	// 88 = 0x58
    double _fittingCellSpacing;	// 96 = 0x60
    struct CGSize _totalFittingSize;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000199895
@property(readonly, nonatomic) struct CGSize totalFittingSize; // @synthesize totalFittingSize=_totalFittingSize;
@property(readonly, nonatomic) double fittingCellSpacing; // @synthesize fittingCellSpacing=_fittingCellSpacing;
@property(readonly, nonatomic) UIFontDescriptor *fittingFontDescriptor; // @synthesize fittingFontDescriptor=_fittingFontDescriptor;
@property(nonatomic) double desiredWidth; // @synthesize desiredWidth=_desiredWidth;
@property(nonatomic) double minimumCellSpacing; // @synthesize minimumCellSpacing=_minimumCellSpacing;
@property(nonatomic) double desiredCellSpacing; // @synthesize desiredCellSpacing=_desiredCellSpacing;
@property(retain, nonatomic) UIFontDescriptor *minimumFontDescriptor; // @synthesize minimumFontDescriptor=_minimumFontDescriptor;
@property(retain, nonatomic) UIFontDescriptor *desiredFontDescriptor; // @synthesize desiredFontDescriptor=_desiredFontDescriptor;
@property(nonatomic) __weak id <VideosExtrasMainMenuSectionMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (struct CGSize)_horizontalFittingSizeForFontDescriptor:(id)arg1 gutterSize:(double)arg2 itemCount:(long long)arg3 itemSizes:(out struct CGSize *)arg4;	// IMP=0x00000000001996e3
- (void)_updateAllMetrics;	// IMP=0x00000000001995a7
- (void)updateSizes;	// IMP=0x0000000000199579
- (struct CGSize)sizeForCellAtIndex:(long long)arg1;	// IMP=0x0000000000199519
- (void)setFittingWidth:(double)arg1;	// IMP=0x00000000001994e1
- (void)_setNeedsUpdate;	// IMP=0x000000000019934e
- (void)_recalculateSizes;	// IMP=0x00000000001992cd
- (void)dealloc;	// IMP=0x000000000019928e

@end
