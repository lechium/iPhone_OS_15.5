//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLAttributeDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003fb1
+ (id)alloc;	// IMP=0x0000000000003fa7
- (unsigned long long)hash;	// IMP=0x00000000000040d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000401c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003f9f

// Remaining properties
@property(nonatomic) unsigned long long bufferIndex; // @dynamic bufferIndex;
@property(nonatomic) unsigned long long format; // @dynamic format;
@property(nonatomic) unsigned long long offset; // @dynamic offset;

@end
