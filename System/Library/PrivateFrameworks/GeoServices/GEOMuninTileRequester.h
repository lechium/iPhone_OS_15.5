//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOSimpleTileRequesterSubclass-Protocol.h>

@interface GEOMuninTileRequester <GEOSimpleTileRequesterSubclass>
{
}

+ (unsigned char)tileProviderIdentifier;	// IMP=0x00000000011b77c2
- (id)additionalAnalyticsStatesForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011b7b83
- (_Bool)shouldReportAnalyticsOnErrorForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011b7b7b
- (_Bool)shouldReportAnalyticsOnSuccessForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011b7b73
- (_Bool)shouldReportAnalyticsOnErrorWithRetryForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011b7b6b
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011b7b3d
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011b77e8
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011b77e0
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011b77d8
- (CDUnion_23a7df3d)tileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011b77cd

@end

