//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVCustomStackLayout : NSObject
{
    NSString *_debugIdentifier;	// 8 = 0x8
    NSArray *_rowHeads;	// 16 = 0x10
    NSMutableArray *_rowSpacing;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008faba
@property(retain, nonatomic) NSMutableArray *rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property(retain, nonatomic) NSArray *rowHeads; // @synthesize rowHeads=_rowHeads;
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
- (double)_heightForRow:(unsigned long long)arg1 startingFrom:(id)arg2 inBoundingSize:(struct CGSize)arg3;	// IMP=0x000000000008f947
- (id)_lastVisibleLayoutItemAttributesFrom:(id)arg1;	// IMP=0x000000000008f884
- (id)_flexibleWidthMapForLayoutItemsBeginningWithLayoutItem:(id)arg1 endingWithItem:(id)arg2 withAvailableSize:(struct CGSize)arg3;	// IMP=0x000000000008f4a9
- (double)layoutHeightThatFitsRowsStartingWithRow:(unsigned long long)arg1;	// IMP=0x000000000008f3c4
- (void)setRowSpacing:(double)arg1 afterRow:(unsigned long long)arg2;	// IMP=0x000000000008f33f
- (id)prioritizedSizeThatFitsSize:(struct CGSize)arg1;	// IMP=0x000000000008f0dd
- (id)itemsThatFitSize:(struct CGSize)arg1;	// IMP=0x000000000008efd8
- (id)layoutFramesInBoundingSize:(struct CGSize)arg1;	// IMP=0x000000000008ee08
- (id)initWithLayoutRowHeads:(id)arg1;	// IMP=0x000000000008ed1b
- (id)init;	// IMP=0x000000000008ed02

@end
