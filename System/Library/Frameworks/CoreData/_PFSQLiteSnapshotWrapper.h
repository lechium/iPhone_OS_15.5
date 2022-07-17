//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying, NSMutableCopying>
{
    struct sqlite3_snapshot *_s;	// 8 = 0x8
    int _externalReferences;	// 16 = 0x10
    int _flags;	// 20 = 0x14
}

- (long long)compare:(id)arg1;	// IMP=0x0000000000195126
- (void)dealloc;	// IMP=0x00000000001950bc
@property(readonly, nonatomic) const void *bytes;
- (id)description;	// IMP=0x0000000000195037
- (unsigned long long)hash;	// IMP=0x000000000019501b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000194fcf
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000194fbd
- (id)mutableCopy;	// IMP=0x0000000000194f40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000194f35

@end
