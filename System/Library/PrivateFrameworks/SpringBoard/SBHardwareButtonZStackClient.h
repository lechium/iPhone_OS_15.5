//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFZStackParticipantDelegate-Protocol.h>
#import <SpringBoard/SBHardwareButtonServiceObserver-Protocol.h>

@class NSString, SBFZStackParticipant, SBFZStackResolver, SBHardwareButtonService;
@protocol BSInvalidatable;

@interface SBHardwareButtonZStackClient : NSObject <SBHardwareButtonServiceObserver, SBFZStackParticipantDelegate>
{
    SBFZStackResolver *_zStackResolver;	// 8 = 0x8
    SBHardwareButtonService *_hardwareButtonService;	// 16 = 0x10
    SBFZStackParticipant *_zStackParticipant;	// 24 = 0x18
    id <BSInvalidatable> _hardwareButtonObserverAssertion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000047c701
@property(retain, nonatomic) id <BSInvalidatable> hardwareButtonObserverAssertion; // @synthesize hardwareButtonObserverAssertion=_hardwareButtonObserverAssertion;
@property(retain, nonatomic) SBFZStackParticipant *zStackParticipant; // @synthesize zStackParticipant=_zStackParticipant;
@property(readonly, nonatomic) __weak SBHardwareButtonService *hardwareButtonService; // @synthesize hardwareButtonService=_hardwareButtonService;
@property(readonly, nonatomic) __weak SBFZStackResolver *zStackResolver; // @synthesize zStackResolver=_zStackResolver;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;	// IMP=0x000000000047c64b
- (void)zStackParticipantDidChange:(id)arg1;	// IMP=0x000000000047c645
- (void)buttonService:(id)arg1 buttonKind:(long long)arg2 eventsConsumedDidChange:(unsigned long long)arg3;	// IMP=0x000000000047c633
- (void)_updateZStackParticipant;	// IMP=0x000000000047c4da
- (void)dealloc;	// IMP=0x000000000047c498
- (id)initWithZStackResolver:(id)arg1 hardwareButtonService:(id)arg2;	// IMP=0x000000000047c3cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
