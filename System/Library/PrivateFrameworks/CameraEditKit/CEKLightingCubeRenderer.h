//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CEKLightingCube, CEKLightingCubeAppearance;

@interface CEKLightingCubeRenderer : NSObject
{
    CEKLightingCube *_cube;	// 8 = 0x8
    CEKLightingCubeAppearance *_appearance;	// 16 = 0x10
    long long _components;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000013b10
- (void)renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 cornerRadius:(double)arg4 stroke:(double)arg5;	// IMP=0x00000000000128c0
- (id)initWithCube:(id)arg1 appearance:(id)arg2 components:(long long)arg3;	// IMP=0x000000000001281b

@end

