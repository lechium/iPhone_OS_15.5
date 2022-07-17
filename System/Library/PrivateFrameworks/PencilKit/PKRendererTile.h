//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>

@class CALayer, NSArray, NSUUID, PKMetalFramebuffer;

@interface PKRendererTile : NSObject <NSCopying>
{
    _Atomic double _cachedContentsScale;	// 8 = 0x8
    _Atomic long long _renderCount;	// 16 = 0x10
    _Atomic double _lastUsedTimestamp;	// 24 = 0x18
    struct CGAffineTransform _drawingTransform;	// 32 = 0x20
    _Bool _framebufferIsLocked;	// 80 = 0x50
    _Bool _multiplyFramebufferIsLocked;	// 81 = 0x51
    _Bool _sixChannelMode;	// 82 = 0x52
    _Bool _outOfDate;	// 83 = 0x53
    _Bool _hidden;	// 84 = 0x54
    CALayer *_tileLayer;	// 88 = 0x58
    CALayer *_tileMultiplyLayer;	// 96 = 0x60
    PKMetalFramebuffer *_framebuffer;	// 104 = 0x68
    PKMetalFramebuffer *_multiplyFramebuffer;	// 112 = 0x70
    NSUUID *_identifier;	// 120 = 0x78
    long long _level;	// 128 = 0x80
    NSArray *_renderedStrokes;	// 136 = 0x88
    long long _currentlyRenderingCount;	// 144 = 0x90
    double _contentsScale;	// 152 = 0x98
    double _opacity;	// 160 = 0xa0
    struct CGPoint _offset;	// 168 = 0xa8
    struct CGRect _drawingFrame;	// 184 = 0xb8
    struct CGRect _frame;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000209a91
- (id)debugDescription;	// IMP=0x00000000002091b8
- (id)description;	// IMP=0x0000000000209087
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000208800
- (void)dealloc;	// IMP=0x00000000002084fd

@end
