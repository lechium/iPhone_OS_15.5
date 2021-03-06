//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

@interface SBRemovalDodgingModifier
{
    NSString *_identifier;	// 24 = 0x18
    NSUUID *_completionIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a6559
@property(retain, nonatomic) NSUUID *completionIdentifier; // @synthesize completionIdentifier=_completionIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)handleAnimationCompletionEvent:(id)arg1;	// IMP=0x00000000001a6411
- (id)handleRemovalEvent:(id)arg1;	// IMP=0x00000000001a628b
- (long long)animationBehaviorModeForIdentifier:(id)arg1;	// IMP=0x00000000001a6280
- (id)modelForInvalidatedModel:(id)arg1;	// IMP=0x00000000001a6112
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001a60a4

@end

