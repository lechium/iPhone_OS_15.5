//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAExternalAnimation
{
    CDUnknownBlockType _presentationBlock;	// 24 = 0x18
}

+ (id)animationWithKeyPath:(id)arg1;	// IMP=0x00000000001ef4f7
- (void)setAnimId:(unsigned long long)arg1;	// IMP=0x00000000001ef4b0
@property(readonly) unsigned long long animId;
- (_Bool)_setCARenderAnimation:(void *)arg1 layer:(id)arg2;	// IMP=0x00000000001ef3e2
- (void *)_copyRenderAnimationForLayer:(id)arg1;	// IMP=0x00000000001ef31d
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;	// IMP=0x00000000001ef2c4
@property(copy) CDUnknownBlockType presentationBlock; // @synthesize presentationBlock=_presentationBlock;
- (void)dealloc;	// IMP=0x00000000001ef207
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ef181

@end

