//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/NSCopying-Protocol.h>

@interface _SBWindowReference : NSObject <NSCopying>
{
    id _object;	// 8 = 0x8
}

+ (id)referenceForObject:(id)arg1;	// IMP=0x000000000009ffba
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (id)description;	// IMP=0x00000000000a00c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a006b
- (unsigned long long)hash;	// IMP=0x00000000000a0059
@property(readonly, nonatomic) unsigned long long pointer;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0044
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000a0007

@end
