//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBFLockScreenActionContext : NSObject
{
    NSString *_lockLabel;	// 8 = 0x8
    NSString *_shortLockLabel;	// 16 = 0x10
    NSString *_unlockDestination;	// 24 = 0x18
    CDUnknownBlockType _action;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    double _fontSize;	// 48 = 0x30
    _Bool _requiresUIUnlock;	// 56 = 0x38
    _Bool _deactivateAwayController;	// 57 = 0x39
    _Bool _canBypassPinLock;	// 58 = 0x3a
    _Bool _wantsBiometricPresentation;	// 59 = 0x3b
    int _source;	// 60 = 0x3c
    int _intent;	// 64 = 0x40
    _Bool _confirmedNotInPocket;	// 68 = 0x44
    _Bool _requiresAuthentication;	// 69 = 0x45
}

- (void).cxx_destruct;	// IMP=0x0000000000022e79
@property(nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(nonatomic) _Bool confirmedNotInPocket; // @synthesize confirmedNotInPocket=_confirmedNotInPocket;
@property(nonatomic) _Bool wantsBiometricPresentation; // @synthesize wantsBiometricPresentation=_wantsBiometricPresentation;
@property(nonatomic) _Bool canBypassPinLock; // @synthesize canBypassPinLock=_canBypassPinLock;
@property(nonatomic) _Bool deactivateAwayController; // @synthesize deactivateAwayController=_deactivateAwayController;
@property(nonatomic) _Bool requiresUIUnlock; // @synthesize requiresUIUnlock=_requiresUIUnlock;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) int intent; // @synthesize intent=_intent;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(retain, nonatomic) NSString *shortLockLabel; // @synthesize shortLockLabel=_shortLockLabel;
@property(retain, nonatomic) NSString *lockLabel; // @synthesize lockLabel=_lockLabel;
@property(readonly, nonatomic) _Bool hasCustomUnlockLabel;
- (id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 action:(CDUnknownBlockType)arg3 identifier:(id)arg4;	// IMP=0x0000000000022af0

@end

