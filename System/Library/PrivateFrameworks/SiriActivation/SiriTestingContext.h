//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFRequestInfo, NSDictionary;

@interface SiriTestingContext
{
    NSDictionary *_testingContext;	// 8 = 0x8
    AFRequestInfo *_testingRequestInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e059
- (void).cxx_destruct;	// IMP=0x000000000001e23e
@property(readonly, nonatomic) AFRequestInfo *testingRequestInfo; // @synthesize testingRequestInfo=_testingRequestInfo;
@property(readonly, nonatomic) NSDictionary *testingContext; // @synthesize testingContext=_testingContext;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e181
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e061
- (id)description;	// IMP=0x000000000001dfc6
- (_Bool)containsAudioInput;	// IMP=0x000000000001df81
- (_Bool)containsRecognitionStrings;	// IMP=0x000000000001df3c
- (id)initWithRequestInfo:(id)arg1 recognitionStrings:(id)arg2 siriContextOverride:(id)arg3;	// IMP=0x000000000001dee2
- (id)initWithRequestInfo:(id)arg1 recognitionStrings:(id)arg2;	// IMP=0x000000000001decd
- (id)initWithAudioInput:(id)arg1 siriContextOverride:(id)arg2;	// IMP=0x000000000001ddff
- (id)initWithAudioInput:(id)arg1;	// IMP=0x000000000001ddeb
- (id)initWithRecognitionStrings:(id)arg1 siriContextOverride:(id)arg2;	// IMP=0x000000000001dd1d
- (id)initWithRecognitionStrings:(id)arg1;	// IMP=0x000000000001dd09
- (id)initWithPPTContext:(id)arg1 siriContextOverride:(id)arg2;	// IMP=0x000000000001dc91
- (id)initWithPPTContext:(id)arg1;	// IMP=0x000000000001dc7d

@end
