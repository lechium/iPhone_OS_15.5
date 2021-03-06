//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_code;	// 8 = 0x8
    NSString *_query;	// 16 = 0x10
    NSString *_requestedScope;	// 24 = 0x18
    NSUUID *_state;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000215a62
- (void).cxx_destruct;	// IMP=0x0000000000215d20
@property(readonly, copy, nonatomic) NSUUID *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *requestedScope; // @synthesize requestedScope=_requestedScope;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000215b82
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000215a6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000215a57
- (unsigned long long)hash;	// IMP=0x0000000000215966
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000215370
- (id)initWithCode:(id)arg1 query:(id)arg2 requestedScope:(id)arg3 state:(id)arg4;	// IMP=0x0000000000215263
- (id)init;	// IMP=0x00000000002151e9

@end

