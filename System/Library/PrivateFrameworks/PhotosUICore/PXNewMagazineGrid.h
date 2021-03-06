//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXNewMagazineGrid : NSObject
{
    long long *_table;	// 8 = 0x8
    unsigned long long _tableSizeInBytes;	// 16 = 0x10
    long long _maxRows;	// 24 = 0x18
    unsigned long long _numberOfColumns;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (_Bool)_isEmptyGrid;	// IMP=0x00000000003a6f5f
- (unsigned long long)_rowsUsed;	// IMP=0x00000000003a6eb7
@property(readonly, nonatomic) unsigned long long endingType;
- (long long)_numberOfEmptyTilesAtTheEnd;	// IMP=0x00000000003a6d2e
- (_Bool)_hasAnyEmptyTilesInArea:(struct PXMagazineRect)arg1;	// IMP=0x00000000003a6cc9
- (long long)_numberOfEmptyTilesInArea:(struct PXMagazineRect)arg1;	// IMP=0x00000000003a6c5e
- (_Bool)_hasAnyTilesUsedInArea:(struct PXMagazineRect)arg1;	// IMP=0x00000000003a6bf9
- (_Bool)isGoodEnding;	// IMP=0x00000000003a6bdf
- (_Bool)isPerfectEnding;	// IMP=0x00000000003a6bc5
- (_Bool)nextEmptyTileX:(long long *)arg1 Y:(long long *)arg2 maxWidth:(long long *)arg3;	// IMP=0x00000000003a6b12
- (void)clearArea:(struct PXMagazineRect)arg1;	// IMP=0x00000000003a6af9
- (void)setTileIdentifier:(unsigned long long)arg1 forArea:(struct PXMagazineRect)arg2;	// IMP=0x00000000003a6a6e
- (void)enlargeTable;	// IMP=0x00000000003a6a0d
- (void)resetWithSize:(unsigned long long)arg1;	// IMP=0x00000000003a699b
- (void)reset;	// IMP=0x00000000003a6981
@property(readonly, nonatomic) unsigned long long currentRowsUsed;
- (void)setNumberOfColumns:(long long)arg1;	// IMP=0x00000000003a68df
- (void)dealloc;	// IMP=0x00000000003a6898
- (id)initWithNumberOfColumns:(long long)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000003a67be
- (id)init;	// IMP=0x00000000003a6744

@end

