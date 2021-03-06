//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SAAppInfo;

@interface SACFSpokenNotificationFlowCommand
{
}

+ (id)spokenNotificationFlowCommandWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000020fdd
+ (id)spokenNotificationFlowCommand;	// IMP=0x0000000000020fcb
- (_Bool)mutatingCommand;	// IMP=0x00000000000210dd
- (_Bool)requiresResponse;	// IMP=0x00000000000210d5
@property(copy, nonatomic) NSString *userInterfaceIdiom;
@property(copy, nonatomic) NSString *userAgent;
@property(nonatomic) _Bool shouldPromptUser;
@property(copy, nonatomic) NSString *outputVoiceLanguageCode;
@property(copy, nonatomic) NSString *notificationID;
@property(copy, nonatomic) NSString *languageCode;
@property(retain, nonatomic) SAAppInfo *appInfo;
- (id)encodedClassName;	// IMP=0x0000000000020fbe
- (id)groupIdentifier;	// IMP=0x0000000000020faa

@end

