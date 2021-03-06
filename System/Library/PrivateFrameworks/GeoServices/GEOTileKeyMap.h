//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTileKeyMap : NSObject <NSCopying>
{
    long long _type;	// 8 = 0x8
    void *_map;	// 16 = 0x10
}

- (unsigned long long)count;	// IMP=0x0000000000a2cb2d
- (void)removeObjectForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000a2c98d
- (void)setObject:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;	// IMP=0x0000000000a2c6b7
- (id)objectForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000a2c698
- (id)contentsDescription;	// IMP=0x0000000000a2bc63
- (void)reserveCapacity:(unsigned long long)arg1;	// IMP=0x0000000000a2bc01
- (void)dealloc;	// IMP=0x0000000000a2bb60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a2b9ab
- (id)initWithMapType:(long long)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000a2b8ea
- (id)initWithMapType:(long long)arg1;	// IMP=0x0000000000a2b8d6
- (id)init;	// IMP=0x0000000000a2b8ac

@end

