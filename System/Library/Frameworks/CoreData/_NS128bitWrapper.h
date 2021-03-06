//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _NS128bitWrapper : NSObject <NSCopying>
{
    struct _double_quad_uint {
        unsigned long long high64;
        unsigned long long low64;
    } bits;	// 8 = 0x8
}

- (long long)compare:(id)arg1;	// IMP=0x00000000001f6791
- (id)description;	// IMP=0x00000000001f6730
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f6717
- (unsigned long long)hash;	// IMP=0x00000000001f6704
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f66be

@end

