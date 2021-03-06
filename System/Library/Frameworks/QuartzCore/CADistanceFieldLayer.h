//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CADistanceFieldLayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;	// IMP=0x000000000022f64f
+ (_Bool)_hasRenderLayerSubclass;	// IMP=0x000000000022f647
+ (id)defaultValueForKey:(id)arg1;	// IMP=0x000000000022f545
@property struct CGColor *foregroundColor;
@property double sharpness;
@property double offset;
@property double lineWidth;
@property _Bool invertsShape;
@property(copy) NSString *renderMode;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;	// IMP=0x000000000022fada
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;	// IMP=0x000000000022fa69
- (unsigned int)_renderImageCopyFlags;	// IMP=0x000000000022fa14
- (void)_colorSpaceDidChange;	// IMP=0x000000000022f99b
- (void *)_copyRenderLayer:(void *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;	// IMP=0x000000000022f76f
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x000000000022f6c2

@end

