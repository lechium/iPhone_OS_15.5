//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFSpeechToken : NSObject <NSSecureCoding>
{
    _Bool _removeSpaceBefore;	// 8 = 0x8
    _Bool _removeSpaceAfter;	// 9 = 0x9
    NSString *_text;	// 16 = 0x10
    NSString *_phoneSequence;	// 24 = 0x18
    NSString *_ipaPhoneSequence;	// 32 = 0x20
    long long _confidenceScore;	// 40 = 0x28
    double _startTime;	// 48 = 0x30
    double _silenceStartTime;	// 56 = 0x38
    double _endTime;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000059814
- (void).cxx_destruct;	// IMP=0x0000000000059fe9
@property(nonatomic) _Bool removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property(nonatomic) _Bool removeSpaceBefore; // @synthesize removeSpaceBefore=_removeSpaceBefore;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double silenceStartTime; // @synthesize silenceStartTime=_silenceStartTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(copy, nonatomic) NSString *ipaPhoneSequence; // @synthesize ipaPhoneSequence=_ipaPhoneSequence;
@property(copy, nonatomic) NSString *phoneSequence; // @synthesize phoneSequence=_phoneSequence;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)dictionaryRepresentation;	// IMP=0x0000000000059cf5
- (id)aceToken;	// IMP=0x0000000000059ace
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005992f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005981c
- (id)description;	// IMP=0x0000000000059755
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005962e
- (unsigned long long)hash;	// IMP=0x0000000000059618

@end

