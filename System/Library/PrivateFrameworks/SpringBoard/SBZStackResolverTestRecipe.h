//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFZStackParticipantDelegate-Protocol.h>
#import <SpringBoard/SBTestRecipe-Protocol.h>

@class NSString, SBFZStackParticipant;

@interface SBZStackResolverTestRecipe : NSObject <SBFZStackParticipantDelegate, SBTestRecipe>
{
    _Bool _wantsHomeGesture;	// 8 = 0x8
    SBFZStackParticipant *_participant;	// 16 = 0x10
}

+ (void)load;	// IMP=0x000000000032c82a
- (void).cxx_destruct;	// IMP=0x000000000032cd14
@property(nonatomic) _Bool wantsHomeGesture; // @synthesize wantsHomeGesture=_wantsHomeGesture;
@property(retain, nonatomic) SBFZStackParticipant *participant; // @synthesize participant=_participant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;	// IMP=0x000000000032cc04
- (void)zStackParticipantDidChange:(id)arg1;	// IMP=0x000000000032cb51
- (void)handleVolumeDecrease;	// IMP=0x000000000032ca6f
- (void)handleVolumeIncrease;	// IMP=0x000000000032c853
- (id)title;	// IMP=0x000000000032c846

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

