//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface PUMutableIndexPathSet
{
    NSMutableSet *_indexPaths;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001ef167
- (id)description;	// IMP=0x00000000001ef0eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eef61
- (unsigned long long)hash;	// IMP=0x00000000001eef44
- (void)removeAllIndexPaths;	// IMP=0x00000000001eef27
- (void)setIndexPathSet:(id)arg1;	// IMP=0x00000000001eee6c
- (_Bool)containsIndexPath:(id)arg1;	// IMP=0x00000000001eee4f
- (void)removeIndexPath:(id)arg1;	// IMP=0x00000000001eee32
- (void)addIndexPath:(id)arg1;	// IMP=0x00000000001eee15
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eeda3
- (void)enumerateIndexPathsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001eec58
- (long long)count;	// IMP=0x00000000001eec3b
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000001eebc4
- (id)init;	// IMP=0x00000000001eeb3d

@end
