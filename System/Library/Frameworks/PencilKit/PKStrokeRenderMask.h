//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>

@class PKStroke;
@protocol PKStrokeRenderCache;

@interface PKStrokeRenderMask : NSObject <NSCopying>
{
    struct vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>> _maskPaths;	// 8 = 0x8
    PKStroke *_stroke;	// 32 = 0x20
    id <PKStrokeRenderCache> _renderCache;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000009de04
- (void).cxx_destruct;	// IMP=0x000000000009ddd3
@property(readonly, nonatomic) id <PKStrokeRenderCache> renderCache; // @synthesize renderCache=_renderCache;
@property(readonly, nonatomic) PKStroke *stroke; // @synthesize stroke=_stroke;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009ddb4
- (const void *)maskPaths;	// IMP=0x000000000009ddaa
- (id)initWithStroke:(id)arg1 renderCache:(id)arg2 maskPaths:(const void *)arg3;	// IMP=0x000000000009dccc

@end

