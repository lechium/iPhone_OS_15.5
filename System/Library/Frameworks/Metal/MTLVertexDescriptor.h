//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLVertexAttributeDescriptorArray, MTLVertexBufferLayoutDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b42d4
+ (id)alloc;	// IMP=0x00000000000b42ca
+ (id)vertexDescriptor;	// IMP=0x00000000000b42b1
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000b434d
- (void)reset;	// IMP=0x00000000000b4347
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b433f

// Remaining properties
@property(readonly) MTLVertexAttributeDescriptorArray *attributes; // @dynamic attributes;
@property(readonly) MTLVertexBufferLayoutDescriptorArray *layouts; // @dynamic layouts;

@end

