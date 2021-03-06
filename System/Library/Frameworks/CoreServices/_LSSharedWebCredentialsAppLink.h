//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _SWCServiceDetails;

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLink
{
    struct LSBinding _binding;	// 8 = 0x8
    _SWCServiceDetails *_serviceDetails;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000048c0c
+ (_Bool)removeAllSettingsReturningError:(id *)arg1;	// IMP=0x0000000000048a96
+ (_Bool)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000486fb
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)arg1;	// IMP=0x0000000000048452
+ (void)afterAppLinksBecomeAvailableForURL:(id)arg1 limit:(unsigned long long)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047972
+ (_Bool)_areAppLinksEnabledForServiceDetails:(id)arg1 cachedSettings:(id *)arg2;	// IMP=0x000000000004773a
+ (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 withApplicationIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000473f8
+ (id)_SWCSettingsWithApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000472c7
+ (id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)arg1;	// IMP=0x000000000004717d
+ (void)initialize;	// IMP=0x0000000000047136
- (id).cxx_construct;	// IMP=0x0000000000048e33
- (void).cxx_destruct;	// IMP=0x0000000000048deb
@property(retain, nonatomic) _SWCServiceDetails *serviceDetails; // @synthesize serviceDetails=_serviceDetails;
@property(readonly) struct LSBinding binding; // @synthesize binding=_binding;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000048c97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000048c14
- (_Bool)removeSettingsReturningError:(id *)arg1;	// IMP=0x0000000000048920
- (_Bool)setBrowserSettings:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048903
- (id)browserSettings;	// IMP=0x0000000000048877
- (_Bool)setEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000483d8
- (_Bool)isEnabled;	// IMP=0x0000000000048379
- (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000047633
- (id)_SWCSettingsReturningError:(id *)arg1;	// IMP=0x0000000000047341
- (id)_SWCSpecifierForSettings;	// IMP=0x0000000000047215

@end

