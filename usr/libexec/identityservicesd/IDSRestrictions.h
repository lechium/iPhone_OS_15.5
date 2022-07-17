//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;

@interface IDSRestrictions : NSObject
{
    NSMutableDictionary *_parentalControls;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    MISSING_TYPE *_shouldPostNotifications;	// 17 = 0x11
}

+ (id)sharedInstance;	// IMP=0x0040000000251ad0
- (void).cxx_destruct;	// IMP=0x0020000000252fa0
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool shouldPostNotifications; // @synthesize shouldPostNotifications=_shouldPostNotifications;
- (void)_managedPrefsNotification:(id)arg1;	// IMP=0x0010000000252e40
- (_Bool)shouldDisableAccount:(id)arg1;	// IMP=0x0010000000252d40
- (_Bool)shouldDisableService:(id)arg1;	// IMP=0x0010000000252c40
- (void)updateAccountActivation;	// IMP=0x0010000000252500
- (void)_updateParentalSettings;	// IMP=0x0010000000252000
- (void)_setIsDisabled:(_Bool)arg1 forService:(id)arg2;	// IMP=0x0010000000251f30
- (_Bool)_isDisabledService:(id)arg1;	// IMP=0x0010000000251ea0
- (id)init;	// IMP=0x0010000000251ca0

@end
