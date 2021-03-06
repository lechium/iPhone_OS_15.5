//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOSimpleTileRequesterSubclass-Protocol.h>

@interface GEOVoltaireSimple3DTileRequester <GEOSimpleTileRequesterSubclass>
{
}

+ (unsigned char)tileProviderIdentifier;	// IMP=0x0000000000cf1e68
- (_Bool)shouldDownloadToDiskForTileKey:(const struct _GEOTileKey *)arg1 estimatedDataSize:(unsigned long long)arg2;	// IMP=0x0000000000cf2445
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000cf2411
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000cf1fcb
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000cf1f4d
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000cf1ea5
- (CDUnion_23a7df3d)tileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000cf1e73

@end

