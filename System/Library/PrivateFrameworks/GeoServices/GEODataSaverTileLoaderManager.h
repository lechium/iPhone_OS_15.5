//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSaverTileLoaderProxy-Protocol.h>

@class NSString;
@protocol GEODataSaverTileLoaderProxy;

@interface GEODataSaverTileLoaderManager : NSObject <GEODataSaverTileLoaderProxy>
{
    id <GEODataSaverTileLoaderProxy> _proxy;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x000000000031cae4
+ (void)useProxyClass:(Class)arg1;	// IMP=0x000000000031cad7
- (void).cxx_destruct;	// IMP=0x000000000031cbf5
- (void)_debug_initiateDataSaverPreload;	// IMP=0x000000000031cbdf
@property(readonly, nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled;
- (id)init;	// IMP=0x000000000031cb39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

