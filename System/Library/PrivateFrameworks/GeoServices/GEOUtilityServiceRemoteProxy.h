//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOUtilityServiceProxy-Protocol.h>

@class NSString;

@interface GEOUtilityServiceRemoteProxy : NSObject <GEOUtilityServiceProxy>
{
}

- (void)getCurrentGeoServicesState:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ad413
- (id)getGeoServicesCacheDirectoryPath;	// IMP=0x00000000009ad3fa
- (id)getHomeDirectoryPath;	// IMP=0x00000000009ad3e1
- (id)_getPathSynchronous:(const char *)arg1;	// IMP=0x00000000009ad2ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
