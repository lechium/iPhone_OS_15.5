//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASettingSettingsAction-Protocol.h>

@class NSString;

@interface SASettingOpenSettingsApp <SASettingSettingsAction>
{
}

+ (id)openSettingsAppWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000039127
+ (id)openSettingsApp;	// IMP=0x0000000000039115
- (_Bool)requiresResponse;	// IMP=0x0000000000039131
- (id)encodedClassName;	// IMP=0x0000000000039108
- (id)groupIdentifier;	// IMP=0x00000000000390f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

