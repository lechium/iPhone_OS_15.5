//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOMapAssetMetadataFetcher, GEOSPRMetroAvailabilityFetcher, GEOTileKeyList, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEONavRoutePreloadStep : NSObject
{
    CDStruct_2c43369c coord;	// 8 = 0x8
    double routeIdx;	// 24 = 0x18
    NSMutableDictionary *wantedTiles;	// 32 = 0x20
    GEOTileKeyList *assetMetadataTiles;	// 40 = 0x28
    double startTime;	// 48 = 0x30
    double endTime;	// 56 = 0x38
    unsigned int bytesLoadedFromNetwork;	// 64 = 0x40
    unsigned int generation;	// 68 = 0x44
    int cellularCoverage;	// 72 = 0x48
    unsigned int nearManeuver:1;	// 76 = 0x4c
    unsigned int loading:1;	// 76 = 0x4c
    unsigned int loaded:1;	// 76 = 0x4c
    GEOApplicationAuditToken *_auditToken;	// 80 = 0x50
    GEOSPRMetroAvailabilityFetcher *_sprMetrosAvailabilityFetcher;	// 88 = 0x58
    GEOMapAssetMetadataFetcher *_assetMetadataFetcher;	// 96 = 0x60
    unsigned int _errorCount;	// 104 = 0x68
    unsigned int _lifetimeErrorCount;	// 108 = 0x6c
    unsigned char _metrosSupported;	// 112 = 0x70
    unsigned long long _parentSignpostID;	// 120 = 0x78
    unsigned long long _signpostID;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000007fc68c
- (void)cancel;	// IMP=0x00000000007fc56e
- (void)_loadTiles:(id)arg1 requireWiFi:(_Bool)arg2 unsuccessfulKeysAccumulator:(id)arg3 errorsAccumulator:(id)arg4 queue:(id)arg5 group:(id)arg6 willLoadHandler:(CDUnknownBlockType)arg7 progressHandler:(CDUnknownBlockType)arg8;	// IMP=0x00000000007fbcf3
- (void)_loadAssetMetadataRequireWiFi:(_Bool)arg1 unsuccessfulKeysAccumulator:(id)arg2 errorsAccumulator:(id)arg3 queue:(id)arg4 willLoadHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000007fbced
- (void)loadWithCallbackQueue:(id)arg1 requireWiFi:(_Bool)arg2 willLoadHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 finishedHandler:(CDUnknownBlockType)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000007fa996
- (void)encounteredErrors:(id)arg1;	// IMP=0x00000000007fa98a
- (double)networkDataRateKB;	// IMP=0x00000000007fa94b
- (void)resetErrors;	// IMP=0x00000000007fa93e
@property(readonly, nonatomic) _Bool hasLifetimeError;
@property(readonly, nonatomic) _Bool hasError;
- (_Bool)okToLoad;	// IMP=0x00000000007fa90d
- (id)description;	// IMP=0x00000000007fa8bb
- (id)initWithAuditToken:(id)arg1 highZoomMetrosAvailabilityFetcher:(id)arg2 assetMetadataFetcher:(id)arg3 preloaderSignpostID:(unsigned long long)arg4;	// IMP=0x00000000007fa7be
- (id)init;	// IMP=0x00000000007fa7a2

@end
