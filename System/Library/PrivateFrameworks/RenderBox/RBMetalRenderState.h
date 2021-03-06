//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor;
@protocol MTLCommandBuffer, MTLRenderCommandEncoder;

@interface RBMetalRenderState : NSObject
{
    unsigned int _flags;	// 8 = 0x8
    int _blendMode;	// 12 = 0xc
    float _alpha;	// 16 = 0x10
    id <MTLCommandBuffer> _commandBuffer;	// 24 = 0x18
    MTLRenderPassDescriptor *_descriptor;	// 32 = 0x20
    unsigned long long _formatKey;	// 40 = 0x28
    id <MTLRenderCommandEncoder> _encoder;	// 48 = 0x30
    struct CGSize _size;	// 56 = 0x38
    CDStruct_5f3a0cd7 _bounds;	// 72 = 0x48
    struct CGAffineTransform _CTM;	// 104 = 0x68
}

@property(nonatomic) struct CGAffineTransform CTM; // @synthesize CTM=_CTM;
@property(nonatomic) CDStruct_5f3a0cd7 bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) id <MTLRenderCommandEncoder> encoder; // @synthesize encoder=_encoder;
@property(nonatomic) unsigned long long formatKey; // @synthesize formatKey=_formatKey;
@property(retain, nonatomic) MTLRenderPassDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
- (void)dealloc;	// IMP=0x000000000006edc2

@end

