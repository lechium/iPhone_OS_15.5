//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXMosaicGalleryCluster : NSObject
{
    NSArray *_items;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001355af
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)description;	// IMP=0x0000000000135539
- (unsigned long long)hash;	// IMP=0x00000000001354f5
- (_Bool)clusterIsEqualToTileTypes:(id)arg1;	// IMP=0x0000000000135308
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000135242
- (_Bool)isClusterOfType:(int)arg1;	// IMP=0x00000000001350f2
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000135087

@end

