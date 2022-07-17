//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXLivePhotoTrimScrubberHiddenAnimationHelper : NSObject
{
    long long _hideRequestCounter;	// 8 = 0x8
    _Bool _hidden;	// 16 = 0x10
    CDUnknownBlockType _animationBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000090c973
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
- (void)_setHidden:(_Bool)arg1 animated:(_Bool)arg2 withRequstID:(long long)arg3;	// IMP=0x000000000090c8b6
- (void)_setHidden:(_Bool)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;	// IMP=0x000000000090c7a1
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000090c78c
- (id)initWithAnimationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000090c705

@end
