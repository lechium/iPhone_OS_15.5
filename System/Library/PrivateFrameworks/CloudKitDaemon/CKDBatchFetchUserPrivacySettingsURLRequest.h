//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsURLRequest
{
    NSArray *_containerPrivacySettings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001bff4d
@property(retain, nonatomic) NSArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001bfdd6
- (id)generateRequestOperations;	// IMP=0x00000000001bfd08
- (_Bool)requiresTokenRegistration;	// IMP=0x00000000001bfd00
- (id)requestOperationClasses;	// IMP=0x00000000001bfc94
- (long long)databaseScope;	// IMP=0x00000000001bfc89

@end

