//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SASRecognition;

@interface SAUIShowSpeechAlternatives
{
}

+ (id)showSpeechAlternativesWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001085f
+ (id)showSpeechAlternatives;	// IMP=0x000000000001084d
- (_Bool)requiresResponse;	// IMP=0x00000000000108cf
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *requestId;
@property(retain, nonatomic) SASRecognition *recognition;
- (id)encodedClassName;	// IMP=0x0000000000010840
- (id)groupIdentifier;	// IMP=0x000000000001082c

@end

