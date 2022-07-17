//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSString;

@interface HMIVideoAnalyzerResultOutcome : HMFObject <NSSecureCoding>
{
    NSString *_message;	// 8 = 0x8
    double _analysisFPS;	// 16 = 0x10
    unsigned long long _code;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000089a1f
+ (id)skipped;	// IMP=0x0000000000089862
+ (id)success;	// IMP=0x00000000000897be
- (void).cxx_destruct;	// IMP=0x0000000000089c9c
@property(readonly) unsigned long long code; // @synthesize code=_code;
@property(readonly) double analysisFPS; // @synthesize analysisFPS=_analysisFPS;
@property(readonly) NSString *message; // @synthesize message=_message;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000089b41
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000089a27
- (id)description;	// IMP=0x0000000000089903
@property(readonly) _Bool isSuccess;
@property(readonly) _Bool isSkipped;
- (id)initWithCode:(unsigned long long)arg1 analysisFPS:(double)arg2 message:(id)arg3;	// IMP=0x00000000000896f5

@end
