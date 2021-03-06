//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDTrustedTargetWrappedKey, NSArray, NSData, NSString;

@interface CKDCodeFunctionInvokeURLRequest
{
    CDUnknownBlockType _serializedResultsCallback;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
    NSString *_functionName;	// 24 = 0x18
    NSData *_serializedParameters;	// 32 = 0x20
    NSData *_attestationEntropy;	// 40 = 0x28
    NSArray *_pccWrappedInvocationKeys;	// 48 = 0x30
    CKDTrustedTargetWrappedKey *_trustedTargetWrappedInvocationKey;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001672c7
@property(copy, nonatomic) CKDTrustedTargetWrappedKey *trustedTargetWrappedInvocationKey; // @synthesize trustedTargetWrappedInvocationKey=_trustedTargetWrappedInvocationKey;
@property(copy, nonatomic) NSArray *pccWrappedInvocationKeys; // @synthesize pccWrappedInvocationKeys=_pccWrappedInvocationKeys;
@property(retain, nonatomic) NSData *attestationEntropy; // @synthesize attestationEntropy=_attestationEntropy;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType serializedResultsCallback; // @synthesize serializedResultsCallback=_serializedResultsCallback;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000167122
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000166db8
- (id)generateRequestOperations;	// IMP=0x00000000001668a4
- (_Bool)requestGETPreAuth;	// IMP=0x0000000000166859
- (id)requestOperationClasses;	// IMP=0x00000000001667ed
- (long long)databaseScope;	// IMP=0x000000000016674e
- (_Bool)allowsAnonymousAccount;	// IMP=0x0000000000166734
- (id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 attestationEntropy:(id)arg5 pccWrappedInvocationKeys:(id)arg6 trustedTargetWrappedInvocationKey:(id)arg7;	// IMP=0x00000000001665ea

@end

