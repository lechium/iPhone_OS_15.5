//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver>
{
    _Bool _networkReachable;	// 8 = 0x8
    unsigned long long _errorCount;	// 16 = 0x10
    int _symptomsAlternateAdviceToken;	// 24 = 0x18
}

+ (id)sharedReachability;	// IMP=0x000000000115ce78
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000115d313
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x000000000115d30d
- (void)_reachabilityChanged:(id)arg1;	// IMP=0x000000000115d277
- (_Bool)networkAvailable;	// IMP=0x000000000115d26e
- (void)reportLoadFailure:(id)arg1;	// IMP=0x000000000115d1b3
- (_Bool)anyFailures;	// IMP=0x000000000115d1a5
- (void)reportTileLoadSuccess:(id)arg1;	// IMP=0x000000000115d136
- (void)_resetErrors;	// IMP=0x000000000115d0c2
- (void)dealloc;	// IMP=0x000000000115cfe1
- (id)init;	// IMP=0x000000000115cecd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

