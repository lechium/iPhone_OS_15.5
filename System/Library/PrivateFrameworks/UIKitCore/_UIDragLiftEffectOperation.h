//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, UIDragInteraction, UIViewPropertyAnimator;
@protocol UIDragInteractionContext;

__attribute__((visibility("hidden")))
@interface _UIDragLiftEffectOperation : NSObject
{
    UIViewPropertyAnimator *_propertyAnimator;	// 8 = 0x8
    id <UIDragInteractionContext> _context;	// 16 = 0x10
    NSSet *_items;	// 24 = 0x18
    UIDragInteraction *_interaction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005db861
@property(retain, nonatomic) UIDragInteraction *interaction; // @synthesize interaction=_interaction;
@property(retain, nonatomic) NSSet *items; // @synthesize items=_items;
@property(retain, nonatomic) id <UIDragInteractionContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;

@end

