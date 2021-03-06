//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CABackdropLayer.h>

#import <MediaToolbox/FigPiPableLayer-Protocol.h>

@interface FigBaseCABackdropLayer : CABackdropLayer <FigPiPableLayer>
{
    _Bool _preventsChangesToSublayerHierarchy;	// 8 = 0x8
}

+ (id)defaultActionForKey:(id)arg1;	// IMP=0x000000000027e013
@property(nonatomic) _Bool preventsChangesToSublayerHierarchy; // @synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy;
- (void)removeFromSuperlayer;	// IMP=0x000000000027e18b
- (void)replaceSublayer:(id)arg1 with:(id)arg2;	// IMP=0x000000000027e14f
- (void)insertSublayer:(id)arg1 above:(id)arg2;	// IMP=0x000000000027e113
- (void)insertSublayer:(id)arg1 below:(id)arg2;	// IMP=0x000000000027e0d7
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000027e09b
- (void)addSublayer:(id)arg1;	// IMP=0x000000000027e05f
- (void)setSublayers:(id)arg1;	// IMP=0x000000000027e023
- (id)actionForKey:(id)arg1;	// IMP=0x000000000027e01b
- (id)init;	// IMP=0x000000000027dfe4

@end

