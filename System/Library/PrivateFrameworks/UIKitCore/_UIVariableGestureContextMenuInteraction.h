//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIVariableGestureContextMenuInteraction
{
    struct {
        unsigned int presentOnTouchDown:1;
    } _flags;	// 8 = 0x8
    _Bool __prefersCompactAppearance;	// 12 = 0xc
    id __proxySender;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000880898
@property(nonatomic, setter=_setPrefersCompactAppearance:) _Bool _prefersCompactAppearance; // @synthesize _prefersCompactAppearance=__prefersCompactAppearance;
@property(nonatomic, setter=_setProxySender:) __weak id _proxySender; // @synthesize _proxySender=__proxySender;
- (_Bool)_clickPresentationInteractionShouldPlayFeedback:(id)arg1;	// IMP=0x0000000000880843
- (void)_willBeginWithConfiguration:(id)arg1;	// IMP=0x00000000008807a1
@property(nonatomic, setter=_setPresentOnTouchDown:) _Bool _presentOnTouchDown;
- (long long)menuAppearance;	// IMP=0x0000000000880702
- (id)_interactionDrivers;	// IMP=0x000000000088053d
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000008804ec

@end

