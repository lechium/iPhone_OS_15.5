//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFSpeakTextLanguagePickerParameterMigration
{
}

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;	// IMP=0x0000000000347866
- (id)availableLanguageCodes;	// IMP=0x0000000000347fa5
- (void)migrateSpeakTextLanguageParameterInParametersDictionary:(id)arg1;	// IMP=0x0000000000347b3a
- (void)migrateWorkflow;	// IMP=0x00000000003478ba

@end

