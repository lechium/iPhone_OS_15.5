//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOUtilityServiceProxy-Protocol.h>

@class NSString;

@interface GEOUtilityServiceLocalProxy : NSObject <GEOUtilityServiceProxy>
{
}

- (void)getCurrentGeoServicesState:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ad1ec
- (id)getGeoServicesCacheDirectoryPath;	// IMP=0x00000000009ad1d3
- (id)getHomeDirectoryPath;	// IMP=0x00000000009ad1ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

