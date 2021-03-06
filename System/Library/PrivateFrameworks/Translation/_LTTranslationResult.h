//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/NSSecureCoding-Protocol.h>

@class NSArray, NSLocale, NSString;

@interface _LTTranslationResult : NSObject <NSSecureCoding>
{
    _Bool _isFinal;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSLocale *_locale;	// 24 = 0x18
    NSArray *_translations;	// 32 = 0x20
    NSString *_sourceString;	// 40 = 0x28
    NSString *_sanitizedSourceString;	// 48 = 0x30
    long long _route;	// 56 = 0x38
    NSArray *_alignments;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005b492
+ (id)resultWithLocale:(id)arg1 translations:(id)arg2;	// IMP=0x000000000005afbc
+ (id)passthroughResultWithString:(id)arg1 sanitizedString:(id)arg2 locale:(id)arg3;	// IMP=0x000000000005ae7f
- (void).cxx_destruct;	// IMP=0x000000000005b556
@property(copy, nonatomic) NSArray *alignments; // @synthesize alignments=_alignments;
@property(nonatomic) long long route; // @synthesize route=_route;
@property(nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(copy, nonatomic) NSString *sanitizedSourceString; // @synthesize sanitizedSourceString=_sanitizedSourceString;
@property(copy, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
@property(copy, nonatomic) NSArray *translations; // @synthesize translations=_translations;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005b19c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005b0ae
- (id)init;	// IMP=0x000000000005b05c
- (void)updateAlignmentWithSourceSpan:(id)arg1 targetSpan:(id)arg2;	// IMP=0x000000000005a8b0
- (id)initWithOspreyBatchResponse:(id)arg1;	// IMP=0x000000000005a769
- (id)initWithOspreyResponse:(id)arg1;	// IMP=0x000000000005a646
- (id)initWithOspreySpeechTranslationMTResponse:(id)arg1;	// IMP=0x000000000005a3cf

@end

