//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SASVoiceIdentificationSignal
{
}

+ (id)voiceIdentificationSignalWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000255d5
+ (id)voiceIdentificationSignal;	// IMP=0x00000000000255c3
- (_Bool)requiresResponse;	// IMP=0x0000000000025645
@property(copy, nonatomic) NSString *selectedSharedUserId;
@property(copy, nonatomic) NSString *resultCandidateId;
@property(nonatomic) _Bool recordUserAudio;
- (id)encodedClassName;	// IMP=0x00000000000255b6
- (id)groupIdentifier;	// IMP=0x00000000000255a2

@end

