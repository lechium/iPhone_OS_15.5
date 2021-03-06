//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOSimpleTileRequesterSubclass-Protocol.h>

@interface GEOVoltaireTileRequester <GEOSimpleTileRequesterSubclass>
{
    _Bool _hasUpdatedManifestForHTTP410;	// 144 = 0x90
}

+ (unsigned char)tileProviderIdentifier;	// IMP=0x0000000000d09573
- (id)additionalAnalyticsStatesForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000d0a65e
- (void)failedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;	// IMP=0x0000000000d0a583
- (_Bool)shouldDownloadToDiskForTileKey:(const struct _GEOTileKey *)arg1 estimatedDataSize:(unsigned long long)arg2;	// IMP=0x0000000000d0a55b
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000d0a3fb
- (id)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000d0a36f
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000d09d9c
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000d097c0
- (id)_deviceRegionSKUQueryItemForTileSet:(id)arg1;	// IMP=0x0000000000d096ac
- (_Bool)shouldAllowEmptyDataForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000d0968b
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000d09624
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000d0957e

@end

