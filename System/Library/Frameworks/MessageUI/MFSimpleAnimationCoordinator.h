//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MFSimpleAnimationCoordinator : NSObject
{
    _Bool _animated;	// 8 = 0x8
    NSMutableArray *_animations;	// 16 = 0x10
    NSMutableArray *_completions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001012aa
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (void)playCompletions:(_Bool)arg1;	// IMP=0x000000000010112d
- (void)playAnimations;	// IMP=0x0000000000100fff
- (void)animateAlongsideAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000100e69
- (id)init;	// IMP=0x0000000000100d7c
- (id)initCoordinatorAnimated:(_Bool)arg1;	// IMP=0x0000000000100d1e

@end

