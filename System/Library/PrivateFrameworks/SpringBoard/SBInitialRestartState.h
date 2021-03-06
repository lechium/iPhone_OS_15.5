//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString, SBBootDefaults;

@interface SBInitialRestartState : NSObject <BSDescriptionProviding>
{
    _Bool _isAuthenticated;	// 8 = 0x8
    _Bool _isInLostMode;	// 9 = 0x9
    _Bool _isBlocked;	// 10 = 0xa
    _Bool _hasPasscodeSet;	// 11 = 0xb
    _Bool _requiresSetup;	// 12 = 0xc
    _Bool _shouldNeverLock;	// 13 = 0xd
    _Bool _forSimulator;	// 14 = 0xe
    _Bool _isLoginSession;	// 15 = 0xf
    long long _homeButtonType;	// 16 = 0x10
    SBBootDefaults *_bootDefaults;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000047685d
@property(nonatomic) long long homeButtonType; // @synthesize homeButtonType=_homeButtonType;
@property(nonatomic, getter=isForSimulator) _Bool forSimulator; // @synthesize forSimulator=_forSimulator;
@property(retain, nonatomic) SBBootDefaults *bootDefaults; // @synthesize bootDefaults=_bootDefaults;
@property(nonatomic, getter=isLoginSession) _Bool loginSession; // @synthesize loginSession=_isLoginSession;
@property(nonatomic) _Bool shouldNeverLock; // @synthesize shouldNeverLock=_shouldNeverLock;
@property(nonatomic) _Bool hasPasscodeSet; // @synthesize hasPasscodeSet=_hasPasscodeSet;
@property(nonatomic) _Bool requiresSetup; // @synthesize requiresSetup=_requiresSetup;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_isBlocked;
@property(nonatomic, getter=isInLostMode) _Bool inLostMode; // @synthesize inLostMode=_isInLostMode;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_isAuthenticated;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000476546
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000004764f6
- (id)succinctDescriptionBuilder;	// IMP=0x00000000004764da
- (id)succinctDescription;	// IMP=0x000000000047648a
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

