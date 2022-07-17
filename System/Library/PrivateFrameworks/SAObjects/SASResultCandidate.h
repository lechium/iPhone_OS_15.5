//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SASRecognition;

@interface SASResultCandidate
{
}

+ (id)resultCandidateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000334f1
+ (id)resultCandidate;	// IMP=0x00000000000334df
- (_Bool)mutatingCommand;	// IMP=0x0000000000033569
- (_Bool)requiresResponse;	// IMP=0x0000000000033561
@property(copy, nonatomic) NSString *resultId;
@property(retain, nonatomic) SASRecognition *recognition;
@property(copy, nonatomic) NSNumber *processedAudioDuration;
- (id)encodedClassName;	// IMP=0x00000000000334d2
- (id)groupIdentifier;	// IMP=0x00000000000334be

@end
