//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLVertexAttributeDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b3e19
+ (id)alloc;	// IMP=0x00000000000b3e0f
- (unsigned long long)hash;	// IMP=0x00000000000b3f38
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b3e84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b3e07

// Remaining properties
@property(nonatomic) unsigned long long bufferIndex; // @dynamic bufferIndex;
@property(nonatomic) unsigned long long format; // @dynamic format;
@property(nonatomic) unsigned long long offset; // @dynamic offset;

@end

