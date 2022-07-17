//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _NUStripImageLayout
{
    long long _stripHeight;	// 24 = 0x18
    long long _stripCount;	// 32 = 0x20
}

- (_Bool)isEqualToLayout:(id)arg1;	// IMP=0x0000000000086059
- (CDStruct_912cb5d2)tileCounts;	// IMP=0x0000000000086043
- (CDStruct_912cb5d2)borderSize;	// IMP=0x0000000000086039
- (CDStruct_912cb5d2)tileSize;	// IMP=0x0000000000086011
- (id)tileInfoAtIndex:(long long)arg1;	// IMP=0x0000000000085f8f
- (CDStruct_996ac03c)frameRectForTileAtIndex:(long long)arg1;	// IMP=0x0000000000085f70
- (CDStruct_996ac03c)contentRectForTileAtIndex:(long long)arg1;	// IMP=0x0000000000085b24
- (long long)tileCount;	// IMP=0x0000000000085b13
- (id)initWithImageSize:(CDStruct_912cb5d2)arg1 stripHeight:(long long)arg2;	// IMP=0x0000000000085aa4

@end
