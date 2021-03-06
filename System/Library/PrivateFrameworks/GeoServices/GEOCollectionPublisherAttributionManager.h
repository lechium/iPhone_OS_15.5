//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPublisherAttributionManifestIndex, NSCache, geo_isolater;

@interface GEOCollectionPublisherAttributionManager : NSObject
{
    NSCache *_manifestsCache;	// 8 = 0x8
    geo_isolater *_isolator;	// 16 = 0x10
    GEOPublisherAttributionManifestIndex *_index;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000011ae2c7
- (void).cxx_destruct;	// IMP=0x00000000011af047
- (id)bestAttributionForPublisher:(id)arg1 preferredLanguages:(id)arg2;	// IMP=0x00000000011ae41e
- (id)bestAttributionForPublisher:(id)arg1;	// IMP=0x00000000011ae391
- (id)init;	// IMP=0x00000000011ae31c

@end

