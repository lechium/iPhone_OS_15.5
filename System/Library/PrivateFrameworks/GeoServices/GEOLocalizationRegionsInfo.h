//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GEOLocalizationRegionsInfo : NSObject
{
    NSDictionary *_regions;	// 8 = 0x8
    struct os_unfair_lock_s _regionsLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000109a543
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1 language:(id)arg2;	// IMP=0x000000000109a052
- (void)reset;	// IMP=0x000000000109a019
- (id)init;	// IMP=0x0000000001099fc4

@end

