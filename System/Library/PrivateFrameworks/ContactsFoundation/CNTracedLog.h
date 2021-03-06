//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CNTracedLog : NSObject
{
    NSString *_message;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSString *_domainVersion;	// 24 = 0x18
    NSString *_domainScope;	// 32 = 0x20
    NSString *_signature;	// 40 = 0x28
    NSString *_signature2;	// 48 = 0x30
    NSString *_signature3;	// 56 = 0x38
    NSString *_value;	// 64 = 0x40
    NSString *_value2;	// 72 = 0x48
    NSString *_value3;	// 80 = 0x50
    NSString *_uuid;	// 88 = 0x58
    _Bool _summarize;	// 96 = 0x60
    long long _result;	// 104 = 0x68
    NSDictionary *_customProperties;	// 112 = 0x70
}

+ (_Bool)shouldLogGivenSamplePercentage:(float)arg1;	// IMP=0x0000000000002b73
+ (long long)roundNumber:(long long)arg1 usingSignificantDigits:(unsigned long long)arg2;	// IMP=0x0000000000002acf
+ (id)formatTimeIntervalByRoundingForPrivacy:(double)arg1;	// IMP=0x0000000000002a81
+ (id)formatIntegerByRoundingForPrivacy:(long long)arg1;	// IMP=0x0000000000002a40
+ (id)logWithDomain:(id)arg1;	// IMP=0x000000000000298d
- (void).cxx_destruct;	// IMP=0x0000000000002d5b
@property(copy) NSDictionary *customProperties; // @synthesize customProperties=_customProperties;
@property long long result; // @synthesize result=_result;
@property _Bool summarize; // @synthesize summarize=_summarize;
@property(copy) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *value3; // @synthesize value3=_value3;
@property(copy) NSString *value2; // @synthesize value2=_value2;
@property(copy) NSString *value; // @synthesize value=_value;
@property(copy) NSString *signature3; // @synthesize signature3=_signature3;
@property(copy) NSString *signature2; // @synthesize signature2=_signature2;
@property(copy) NSString *signature; // @synthesize signature=_signature;
@property(copy) NSString *domainScope; // @synthesize domainScope=_domainScope;
@property(copy) NSString *domainVersion; // @synthesize domainVersion=_domainVersion;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSString *message; // @synthesize message=_message;
- (id)resultString;	// IMP=0x0000000000002a38
- (void)sendValue:(id)arg1 forKey:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002a32
- (void)enumerateCustomKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002a2c
- (void)enumerateStandardKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002a26
- (void)enumerateStandardizedKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002a20
- (void)sendTrace;	// IMP=0x0000000000002a1a
- (id)init;	// IMP=0x0000000000002a0c
- (id)initWithDomain:(id)arg1 message:(id)arg2;	// IMP=0x00000000000029dd

@end

