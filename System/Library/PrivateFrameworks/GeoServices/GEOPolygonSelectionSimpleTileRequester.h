//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GEOPolygonSelectionSimpleTileRequester
{
}

+ (unsigned char)tileProviderIdentifier;	// IMP=0x00000000009ad6ef
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000009ae0a2
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000009ae09a
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000009adbcc
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000009ad9ec
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000009ad9e4
- (struct _GEOTileKey)_regularTileKeyForPolygonSelectionSelectionTileKey:(const struct _GEOTileKey *)arg1 polyId:(unsigned long long *)arg2;	// IMP=0x00000000009ad6fa

@end
