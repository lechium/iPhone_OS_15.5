//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADVector3D : NSObject <NSCopying>
{
    float mDx;	// 8 = 0x8
    float mDy;	// 12 = 0xc
    float mDz;	// 16 = 0x10
}

- (id)description;	// IMP=0x000000000030a101
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000309fe6
- (unsigned long long)hash;	// IMP=0x0000000000309f72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000309f1e
- (float)dz;	// IMP=0x0000000000309f13
- (float)dy;	// IMP=0x0000000000309f08
- (float)dx;	// IMP=0x0000000000309efd
- (id)initWithDx:(float)arg1 dy:(float)arg2 dz:(float)arg3;	// IMP=0x0000000000309e9c

@end

