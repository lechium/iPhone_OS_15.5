//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@interface IDSMPIdentity : NSObject <NSCopying>
{
    void *_backingValue;	// 8 = 0x8
}

@property(readonly, nonatomic) void *backingValue; // @synthesize backingValue=_backingValue;
- (id)description;	// IMP=0x00000000000f0e58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f0e4d
- (void)dealloc;	// IMP=0x00000000000f0e0e
- (id)initWithBackingValue:(void *)arg1;	// IMP=0x00000000000f0dbf

@end
