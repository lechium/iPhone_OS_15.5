//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface CEKAnimationGenerator : NSObject
{
    NSMutableDictionary *__animations;	// 8 = 0x8
    CADisplayLink *__displayLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000022ba9
@property(retain, nonatomic) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(retain, nonatomic) NSMutableDictionary *_animations; // @synthesize _animations=__animations;
- (void)_updateAnimationForIdentifer:(id)arg1 timestamp:(double)arg2;	// IMP=0x0000000000022a3e
- (void)_handleDisplayLinkFired:(id)arg1;	// IMP=0x0000000000022922
- (_Bool)isAnimatingForIdentifier:(id)arg1;	// IMP=0x0000000000022898
- (void)stopAllAnimations;	// IMP=0x00000000000227fe
- (void)_stopAnimationForIdentifier:(id)arg1 didComplete:(_Bool)arg2;	// IMP=0x0000000000022679
- (void)stopAnimationForIdentifier:(id)arg1;	// IMP=0x0000000000022665
- (void)startAnimationForIdentifier:(id)arg1 duration:(double)arg2 updateHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000022459
- (void)dealloc;	// IMP=0x00000000000223ea
- (id)init;	// IMP=0x0000000000022382

@end
