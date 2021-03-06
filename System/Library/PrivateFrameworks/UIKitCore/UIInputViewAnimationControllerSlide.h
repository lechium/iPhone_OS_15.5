//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInputViewAnimationController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController>
{
    int _slide;	// 8 = 0x8
}

- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;	// IMP=0x000000000078e05e
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;	// IMP=0x000000000078dfc7
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;	// IMP=0x000000000078de39
- (id)placementForSlideStart:(_Bool)arg1;	// IMP=0x000000000078dde7
- (id)initWithSlide:(int)arg1;	// IMP=0x000000000078ddac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

