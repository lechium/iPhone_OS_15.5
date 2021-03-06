//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCharacterSet;
@protocol OS_dispatch_queue;

@interface CRCHCharacterSetRules : NSObject
{
    NSCharacterSet *_lowercaseCharSet;	// 8 = 0x8
    NSCharacterSet *_uppercaseCharSet;	// 16 = 0x10
    NSCharacterSet *_digitCharSet;	// 24 = 0x18
    NSCharacterSet *_startPunctuationCharSet;	// 32 = 0x20
    NSCharacterSet *_middlePunctuationCharSet;	// 40 = 0x28
    NSCharacterSet *_endPunctuationCharSet;	// 48 = 0x30
    NSCharacterSet *_digitStartPunctuationCharSet;	// 56 = 0x38
    NSCharacterSet *_digitEndPunctuationCharSet;	// 64 = 0x40
    NSCharacterSet *_arithmeticOperatorCharSet;	// 72 = 0x48
    NSCharacterSet *_dateTimeSeparatorCharSet;	// 80 = 0x50
    NSCharacterSet *_dateTimeEndLetterCharSet;	// 88 = 0x58
    NSCharacterSet *_numeralEndLetterCharSet;	// 96 = 0x60
    NSCharacterSet *_lexiconSkipCharSet;	// 104 = 0x68
    NSCharacterSet *_containsDotCharSet;	// 112 = 0x70
    NSCharacterSet *_prefixCapitalizationExceptionCharSet;	// 120 = 0x78
    NSCharacterSet *_selfLoopPunctuationCharSet;	// 128 = 0x80
    NSCharacterSet *_emoticonTopCharSet;	// 136 = 0x88
    NSCharacterSet *_emoticonMiddleCharSet;	// 144 = 0x90
    NSCharacterSet *_emoticonBottomCharSet;	// 152 = 0x98
    NSCharacterSet *_emailAtCharSet;	// 160 = 0xa0
    NSCharacterSet *_emailPunctuationCharSet;	// 168 = 0xa8
    NSCharacterSet *_urlPunctuationCharSet;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *__charSetRulesQueue;	// 184 = 0xb8
    map_aaf15588 _strokeMaxPenalties;	// 192 = 0xc0
    map_3815c996 _signatureUniChar;	// 216 = 0xd8
}

+ (unsigned long long)characterType:(unsigned int)arg1;	// IMP=0x0000000000042a38
+ (unsigned long long)expectedMinStrokeCount:(unsigned int)arg1;	// IMP=0x000000000004292e
+ (unsigned long long)expectedMaxStrokeCount:(unsigned int)arg1;	// IMP=0x00000000000427c1
+ (id)sharedCharacterSetRules;	// IMP=0x000000000004277c
- (id).cxx_construct;	// IMP=0x0000000000043d83
- (void).cxx_destruct;	// IMP=0x0000000000043d4b
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *_charSetRulesQueue; // @synthesize _charSetRulesQueue=__charSetRulesQueue;
@property(nonatomic) map_3815c996 signatureUniChar; // @synthesize signatureUniChar=_signatureUniChar;
@property(nonatomic) map_aaf15588 strokeMaxPenalties; // @synthesize strokeMaxPenalties=_strokeMaxPenalties;
@property(retain, nonatomic) NSCharacterSet *urlPunctuationCharSet; // @synthesize urlPunctuationCharSet=_urlPunctuationCharSet;
@property(retain, nonatomic) NSCharacterSet *emailPunctuationCharSet; // @synthesize emailPunctuationCharSet=_emailPunctuationCharSet;
@property(retain, nonatomic) NSCharacterSet *emailAtCharSet; // @synthesize emailAtCharSet=_emailAtCharSet;
@property(retain, nonatomic) NSCharacterSet *emoticonBottomCharSet; // @synthesize emoticonBottomCharSet=_emoticonBottomCharSet;
@property(retain, nonatomic) NSCharacterSet *emoticonMiddleCharSet; // @synthesize emoticonMiddleCharSet=_emoticonMiddleCharSet;
@property(retain, nonatomic) NSCharacterSet *emoticonTopCharSet; // @synthesize emoticonTopCharSet=_emoticonTopCharSet;
@property(retain, nonatomic) NSCharacterSet *selfLoopPunctuationCharSet; // @synthesize selfLoopPunctuationCharSet=_selfLoopPunctuationCharSet;
@property(retain, nonatomic) NSCharacterSet *prefixCapitalizationExceptionCharSet; // @synthesize prefixCapitalizationExceptionCharSet=_prefixCapitalizationExceptionCharSet;
@property(retain, nonatomic) NSCharacterSet *containsDotCharSet; // @synthesize containsDotCharSet=_containsDotCharSet;
@property(retain, nonatomic) NSCharacterSet *lexiconSkipCharSet; // @synthesize lexiconSkipCharSet=_lexiconSkipCharSet;
@property(retain, nonatomic) NSCharacterSet *numeralEndLetterCharSet; // @synthesize numeralEndLetterCharSet=_numeralEndLetterCharSet;
@property(retain, nonatomic) NSCharacterSet *dateTimeEndLetterCharSet; // @synthesize dateTimeEndLetterCharSet=_dateTimeEndLetterCharSet;
@property(retain, nonatomic) NSCharacterSet *dateTimeSeparatorCharSet; // @synthesize dateTimeSeparatorCharSet=_dateTimeSeparatorCharSet;
@property(retain, nonatomic) NSCharacterSet *arithmeticOperatorCharSet; // @synthesize arithmeticOperatorCharSet=_arithmeticOperatorCharSet;
@property(retain, nonatomic) NSCharacterSet *digitEndPunctuationCharSet; // @synthesize digitEndPunctuationCharSet=_digitEndPunctuationCharSet;
@property(retain, nonatomic) NSCharacterSet *digitStartPunctuationCharSet; // @synthesize digitStartPunctuationCharSet=_digitStartPunctuationCharSet;
@property(retain, nonatomic) NSCharacterSet *endPunctuationCharSet; // @synthesize endPunctuationCharSet=_endPunctuationCharSet;
@property(retain, nonatomic) NSCharacterSet *middlePunctuationCharSet; // @synthesize middlePunctuationCharSet=_middlePunctuationCharSet;
@property(retain, nonatomic) NSCharacterSet *startPunctuationCharSet; // @synthesize startPunctuationCharSet=_startPunctuationCharSet;
@property(retain, nonatomic) NSCharacterSet *digitCharSet; // @synthesize digitCharSet=_digitCharSet;
@property(retain, nonatomic) NSCharacterSet *uppercaseCharSet; // @synthesize uppercaseCharSet=_uppercaseCharSet;
@property(retain, nonatomic) NSCharacterSet *lowercaseCharSet; // @synthesize lowercaseCharSet=_lowercaseCharSet;
- (unsigned long long)_characterType:(unsigned int)arg1;	// IMP=0x00000000000436fc
- (unsigned long long)_expectedMinStrokeCount:(unsigned int)arg1;	// IMP=0x000000000004351c
- (unsigned long long)_expectedMaxStrokeCount:(unsigned int)arg1;	// IMP=0x0000000000042f5d
- (void)dealloc;	// IMP=0x0000000000042e68
- (id)init;	// IMP=0x0000000000042b42

@end

