//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SATTSSpeechSynthesisFailure
{
}

+ (id)speechSynthesisFailureWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000023c03
+ (id)speechSynthesisFailure;	// IMP=0x0000000000023bf1
- (_Bool)requiresResponse;	// IMP=0x0000000000023c73
@property(copy, nonatomic) NSString *reasonDescription;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) long long errorCode;
- (id)encodedClassName;	// IMP=0x0000000000023be4
- (id)groupIdentifier;	// IMP=0x0000000000023bd0

@end

