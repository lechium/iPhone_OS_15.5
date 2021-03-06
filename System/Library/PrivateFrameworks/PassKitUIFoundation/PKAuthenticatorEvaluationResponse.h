//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PKAuthenticatorEvaluationResponse : NSObject
{
    _Bool _biometricMatch;	// 8 = 0x8
    long long _result;	// 16 = 0x10
    NSString *_kextBlacklistVersion;	// 24 = 0x18
    NSData *_credential;	// 32 = 0x20
}

+ (id)responseWithResult:(long long)arg1 biometricMatch:(_Bool)arg2 credential:(id)arg3;	// IMP=0x0000000000006fbb
+ (id)responseWithResult:(long long)arg1;	// IMP=0x0000000000006fa4
- (void).cxx_destruct;	// IMP=0x000000000000705e
@property(readonly, copy, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property(copy, nonatomic) NSString *kextBlacklistVersion; // @synthesize kextBlacklistVersion=_kextBlacklistVersion;
@property(readonly, nonatomic) _Bool biometricMatch; // @synthesize biometricMatch=_biometricMatch;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;

@end

