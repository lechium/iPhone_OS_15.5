//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenReaderCore/NSCopying-Protocol.h>

@interface SCRCWeakReferenceContainer : NSObject <NSCopying>
{
    id _weakReference;	// 8 = 0x8
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c75a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c69b
- (unsigned long long)hash;	// IMP=0x000000000002c65f
- (id)strongReference;	// IMP=0x000000000002c651
- (id)autoreleasedReference;	// IMP=0x000000000002c637
- (void)dealloc;	// IMP=0x000000000002c5fd
- (id)initWithObject:(id)arg1;	// IMP=0x000000000002c5ab

@end

