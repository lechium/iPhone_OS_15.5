//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSaverTileLoaderProxy-Protocol.h>

@class NSString;

@interface GEODataSaverTileLoaderRemoteProxy : NSObject <GEODataSaverTileLoaderProxy>
{
}

- (void)_debug_initiateDataSaverPreload;	// IMP=0x00000000007f345f
@property(readonly, nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

