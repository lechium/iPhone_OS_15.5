//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSString;

@interface PKDelayedAnimationTracker : NSObject
{
    CALayer *_layer;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    CDUnknownBlockType _removalAction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003cdca9
@property(copy, nonatomic) CDUnknownBlockType removalAction; // @synthesize removalAction=_removalAction;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) __weak CALayer *layer; // @synthesize layer=_layer;
- (void)removeAnimationIfPossible;	// IMP=0x00000000003cdb69
- (id)initWithLayer:(id)arg1 key:(id)arg2;	// IMP=0x00000000003cdaa2
- (id)init;	// IMP=0x00000000003cda94

@end
