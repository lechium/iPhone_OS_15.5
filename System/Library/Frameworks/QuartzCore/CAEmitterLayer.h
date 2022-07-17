//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CAEmitterLayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;	// IMP=0x0000000000009cae
+ (_Bool)_hasRenderLayerSubclass;	// IMP=0x0000000000009ca6
+ (id)defaultValueForKey:(id)arg1;	// IMP=0x0000000000009acd
@property unsigned int seed;
@property _Bool preservesDepth;
@property(copy) NSString *renderMode;
@property float spin;
@property float scale;
@property float velocity;
@property double emitterDepth;
@property struct CGSize emitterSize;
@property double emitterZPosition;
@property struct CGPoint emitterPosition;
@property(copy) NSString *emitterMode;
@property(copy) NSString *emitterShape;
@property float lifetime;
@property float birthRate;
@property(copy) NSArray *emitterCells;
- (_Bool)CA_validateValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000a86e
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;	// IMP=0x000000000000a7f3
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;	// IMP=0x000000000000a77b
- (void)_colorSpaceDidChange;	// IMP=0x000000000000a702
- (void *)_copyRenderLayer:(void *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;	// IMP=0x0000000000009fb1
- (id)implicitAnimationForKeyPath:(id)arg1;	// IMP=0x0000000000009ebc
- (void)reloadValueForKeyPath:(id)arg1;	// IMP=0x0000000000009db8
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0000000000009d21
@property double cullMaxZ;
@property double cullMinZ;
@property struct CGRect cullRect;
@property float spinBias;
@property double updateInterval;
@property float emitterDuration;
@property(copy) NSArray *emitterBehaviors;
@property(copy) NSArray *emitterRects;
@property const struct CGPath *emitterPath;

@end
