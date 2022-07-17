//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CKHorizontalTiledLayoutGenerator
{
    struct CGPoint _origin;	// 8 = 0x8
    double _referenceHeight;	// 24 = 0x18
}

@property(nonatomic) double referenceHeight; // @synthesize referenceHeight=_referenceHeight;
- (_Bool)_addSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;	// IMP=0x00000000004b9b94
- (_Bool)_addColumnWithTiles:(CDStruct_1417b155 *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;	// IMP=0x00000000004b9a34
- (void)_enumerateColumnFramesWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000004b97d3
- (_Bool)_addColumnWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2;	// IMP=0x00000000004b946a
- (_Bool)_isAtEndOfColumn;	// IMP=0x00000000004b9458
- (_Bool)_hasLeftSuboptimalColumn;	// IMP=0x00000000004b93dd
- (_Bool)_scanNonPanoramaSequence:(CDStruct_1417b155 *)arg1 count:(long long)arg2;	// IMP=0x00000000004b9270
- (_Bool)_scanSpecialSequenceColumn:(CDStruct_1417b155 *)arg1 count:(long long *)arg2;	// IMP=0x00000000004b914d
- (_Bool)_scanSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;	// IMP=0x00000000004b9136
- (_Bool)_scanTripletWithLargeLead:(CDStruct_1417b155 *)arg1;	// IMP=0x00000000004b8c0e
- (_Bool)_parseSpecialSubsequenceWithColumnRequired:(_Bool)arg1 columnParsed:(_Bool *)arg2;	// IMP=0x00000000004b89f7
- (_Bool)_parseSpecialSequence;	// IMP=0x00000000004b897f
- (_Bool)_parseSpecialTileTriplet;	// IMP=0x00000000004b8856
- (_Bool)_parseTileTriplet;	// IMP=0x00000000004b812f
- (_Bool)_parseTilePair;	// IMP=0x00000000004b7f9f
- (_Bool)_parseSingleTile;	// IMP=0x00000000004b7ea9
- (double)referenceDistanceForMagneticGuidelines;	// IMP=0x00000000004b7e97
- (_Bool)parseNextTiles;	// IMP=0x00000000004b7e22
- (void)willParseTiles;	// IMP=0x00000000004b7ddc

@end
