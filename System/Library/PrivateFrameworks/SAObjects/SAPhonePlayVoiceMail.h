//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, SARemoteDevice;

@interface SAPhonePlayVoiceMail
{
}

+ (id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003933b
+ (id)playVoiceMail;	// IMP=0x0000000000039329
- (_Bool)requiresResponse;	// IMP=0x0000000000039389
@property(copy, nonatomic) NSURL *voiceMailId;
@property(retain, nonatomic) SARemoteDevice *targetDevice;
- (id)encodedClassName;	// IMP=0x000000000003931c
- (id)groupIdentifier;	// IMP=0x0000000000039308

@end

