//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CHPCategoryAndSeriesReordering
{
}

- (void)reorderCategoryAndSeries:(id)arg1 sheet:(id)arg2 clearAxisReversedFlag:(_Bool)arg3;	// IMP=0x0000000000182f5b
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;	// IMP=0x0000000000182f42
- (_Bool)isObjectSupported:(id)arg1;	// IMP=0x0000000000180927
- (void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;	// IMP=0x0000000000232176
- (long long)reorderDataValues:(id)arg1 dataPointCount:(unsigned long long)arg2;	// IMP=0x00000000002320a7
- (void)reorderData:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;	// IMP=0x0000000000231fa2
- (void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned long long)arg2;	// IMP=0x0000000000232789
- (void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;	// IMP=0x0000000000231ea6
- (void)applyCategoryReorderingPreprocessor:(id)arg1;	// IMP=0x0000000000231ca0
- (void)applySeriesReorderingPreprocessor:(id)arg1;	// IMP=0x000000000039751f
- (_Bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(_Bool)arg2;	// IMP=0x000000000018326c

@end

