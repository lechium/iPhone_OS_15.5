//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSSettingDescriptionProvider-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/SBDeactivationSettings-Protocol.h>

@class BSMutableSettings, NSString;

@interface SBDeactivationSettings : NSObject <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding>
{
    BSMutableSettings *_settings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003fed18
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x00000000003fed10
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x00000000003fec7a
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000003feb52
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000003feb02
- (id)succinctDescriptionBuilder;	// IMP=0x00000000003feae6
- (id)succinctDescription;	// IMP=0x00000000003fea96
@property(readonly, copy) NSString *description;
- (void)clearDeactivationSettings;	// IMP=0x00000000003fea6c
- (void)applyDeactivationSettings:(id)arg1;	// IMP=0x00000000003fea4b
- (id)copyDeactivationSettings;	// IMP=0x00000000003fea39
- (id)objectForDeactivationSetting:(unsigned int)arg1;	// IMP=0x00000000003fea21
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;	// IMP=0x00000000003fea09
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;	// IMP=0x00000000003fe9f1
- (long long)flagForDeactivationSetting:(unsigned int)arg1;	// IMP=0x00000000003fe9d9
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;	// IMP=0x00000000003fe9c1
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)dealloc;	// IMP=0x00000000003fe967
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fe90e
- (id)init;	// IMP=0x00000000003fe8a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
