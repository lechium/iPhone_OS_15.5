//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASettingSettingsAction-Protocol.h>

@class NSString;

@interface SASettingSetVoiceOver <SASettingSettingsAction>
{
}

+ (id)setVoiceOverWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002fa28
+ (id)setVoiceOver;	// IMP=0x000000000002fa16
- (_Bool)mutatingCommand;	// IMP=0x000000000002fa3a
- (_Bool)requiresResponse;	// IMP=0x000000000002fa32
- (id)encodedClassName;	// IMP=0x000000000002fa09
- (id)groupIdentifier;	// IMP=0x000000000002f9f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

