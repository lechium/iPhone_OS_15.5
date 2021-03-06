//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewPropertyAnimator;
@protocol UIDragAnimating;

@interface SSSAnimator : NSObject
{
    UIViewPropertyAnimator *_propertyAnimator;	// 8 = 0x8
    id <UIDragAnimating> _dragAnimating;	// 16 = 0x10
}

+ (id)animatorWithDragAnimating:(id)arg1;	// IMP=0x00400000000548d5
+ (id)animatorWithPropertyAnimator:(id)arg1;	// IMP=0x001000000005487b
- (void).cxx_destruct;	// IMP=0x0020000000054abd
@property(nonatomic) __weak id <UIDragAnimating> dragAnimating; // @synthesize dragAnimating=_dragAnimating;
- (void)setPropertyAnimator:(id)arg1;	// IMP=0x0010000000054a85
- (id)propertyAnimator;	// IMP=0x0010000000054a6f
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000549cf
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x001000000005492f

@end

