//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMViewfinderFlipTransition, CAMViewfinderOpenAndCloseTransition;
@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderTransitionController : NSObject
{
    id <CAMViewfinderTransitionable> _target;	// 8 = 0x8
    CAMViewfinderOpenAndCloseTransition *__openAndCloseTransition;	// 16 = 0x10
    CAMViewfinderFlipTransition *__flipTransition;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b3d86
@property(retain, nonatomic, setter=_setFlipTransition:) CAMViewfinderFlipTransition *_flipTransition; // @synthesize _flipTransition=__flipTransition;
@property(retain, nonatomic, setter=_setOpenAndCloseTransition:) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition; // @synthesize _openAndCloseTransition=__openAndCloseTransition;
@property(nonatomic) __weak id <CAMViewfinderTransitionable> target; // @synthesize target=_target;
- (void)handleApplicationDidEnterBackground;	// IMP=0x00000000000b3ce7
- (void)openForReason:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b3b6a
- (void)closeAndRotateWithDirection:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b3a92
- (void)closeWithBlur:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b3987

@end

