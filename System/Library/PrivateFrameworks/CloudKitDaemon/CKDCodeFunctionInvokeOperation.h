//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDProtocolTranslator, CKDTrustedTargetKey, CKDTrustedTargetWrappedKey, NSArray, NSData, NSString, NSURL, PCCKey;
@protocol CKCodeOperationCallbacks;

@interface CKDCodeFunctionInvokeOperation
{
    _Bool _shouldSendRecordPCSKeys;	// 8 = 0x8
    _Bool _shouldFetchAssetContentInMemory;	// 9 = 0x9
    CDUnknownBlockType _replaceLocalSerializationsBlobs;	// 16 = 0x10
    CDUnknownBlockType _initialResponseReceivedCallback;	// 24 = 0x18
    CDUnknownBlockType _replaceWireSerializations;	// 32 = 0x20
    CDUnknownBlockType _recordFetchCompletionBlock;	// 40 = 0x28
    CDUnknownBlockType _recordFetchProgressBlock;	// 48 = 0x30
    CDUnknownBlockType _recordFetchCommandBlock;	// 56 = 0x38
    NSString *_serviceName;	// 64 = 0x40
    NSString *_functionName;	// 72 = 0x48
    PCCKey *_pccKey;	// 80 = 0x50
    NSArray *_pccWrappedKeys;	// 88 = 0x58
    NSData *_attestationEntropy;	// 96 = 0x60
    NSArray *_requestLocalSerializations;	// 104 = 0x68
    NSArray *_requestLocalEnvelopes;	// 112 = 0x70
    unsigned long long _dataProtectionType;	// 120 = 0x78
    NSData *_permittedRemoteMeasurement;	// 128 = 0x80
    NSString *_trustedTargetDomain;	// 136 = 0x88
    NSString *_trustedTargetOID;	// 144 = 0x90
    CKDTrustedTargetKey *_trustedTargetKey;	// 152 = 0x98
    CKDTrustedTargetWrappedKey *_trustedTargetWrappedKey;	// 160 = 0xa0
    NSURL *_resolvedBaseURL;	// 168 = 0xa8
    NSArray *_requestRecords;	// 176 = 0xb0
    NSData *_serializedArguments;	// 184 = 0xb8
    NSData *_serializedResponse;	// 192 = 0xc0
    NSArray *_responseRecords;	// 200 = 0xc8
    CKDProtocolTranslator *_translator;	// 208 = 0xd0
}

+ (id)entitlementURLForServiceName:(id)arg1 container:(id)arg2;	// IMP=0x000000000020fb25
+ (id)URLFromEntitlementString:(id)arg1;	// IMP=0x000000000020f984
+ (long long)isPredominatelyDownload;	// IMP=0x000000000020f7a2
- (void).cxx_destruct;	// IMP=0x00000000002103e1
@property(retain, nonatomic) CKDProtocolTranslator *translator; // @synthesize translator=_translator;
@property(copy, nonatomic) NSArray *responseRecords; // @synthesize responseRecords=_responseRecords;
@property(copy, nonatomic) NSData *serializedResponse; // @synthesize serializedResponse=_serializedResponse;
@property(copy, nonatomic) NSData *serializedArguments; // @synthesize serializedArguments=_serializedArguments;
@property(copy, nonatomic) NSArray *requestRecords; // @synthesize requestRecords=_requestRecords;
@property(nonatomic) _Bool shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(copy, nonatomic) NSURL *resolvedBaseURL; // @synthesize resolvedBaseURL=_resolvedBaseURL;
@property(retain, nonatomic) CKDTrustedTargetWrappedKey *trustedTargetWrappedKey; // @synthesize trustedTargetWrappedKey=_trustedTargetWrappedKey;
@property(retain, nonatomic) CKDTrustedTargetKey *trustedTargetKey; // @synthesize trustedTargetKey=_trustedTargetKey;
@property(copy, nonatomic) NSString *trustedTargetOID; // @synthesize trustedTargetOID=_trustedTargetOID;
@property(copy, nonatomic) NSString *trustedTargetDomain; // @synthesize trustedTargetDomain=_trustedTargetDomain;
@property(nonatomic) _Bool shouldSendRecordPCSKeys; // @synthesize shouldSendRecordPCSKeys=_shouldSendRecordPCSKeys;
@property(copy, nonatomic) NSData *permittedRemoteMeasurement; // @synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement;
@property(nonatomic) unsigned long long dataProtectionType; // @synthesize dataProtectionType=_dataProtectionType;
@property(copy, nonatomic) NSArray *requestLocalEnvelopes; // @synthesize requestLocalEnvelopes=_requestLocalEnvelopes;
@property(copy, nonatomic) NSArray *requestLocalSerializations; // @synthesize requestLocalSerializations=_requestLocalSerializations;
@property(retain, nonatomic) NSData *attestationEntropy; // @synthesize attestationEntropy=_attestationEntropy;
@property(retain, nonatomic) NSArray *pccWrappedKeys; // @synthesize pccWrappedKeys=_pccWrappedKeys;
@property(retain, nonatomic) PCCKey *pccKey; // @synthesize pccKey=_pccKey;
@property(readonly, copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType recordFetchCommandBlock; // @synthesize recordFetchCommandBlock=_recordFetchCommandBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchProgressBlock; // @synthesize recordFetchProgressBlock=_recordFetchProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchCompletionBlock; // @synthesize recordFetchCompletionBlock=_recordFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType replaceWireSerializations; // @synthesize replaceWireSerializations=_replaceWireSerializations;
@property(copy, nonatomic) CDUnknownBlockType initialResponseReceivedCallback; // @synthesize initialResponseReceivedCallback=_initialResponseReceivedCallback;
@property(copy, nonatomic) CDUnknownBlockType replaceLocalSerializationsBlobs; // @synthesize replaceLocalSerializationsBlobs=_replaceLocalSerializationsBlobs;
- (_Bool)validateAgainstLiveContainer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020fd2a
- (void)main;	// IMP=0x000000000020f7af
- (void)_postflightRecords;	// IMP=0x000000000020ef5b
- (void)_getDeserializedRecords;	// IMP=0x000000000020ea80
- (void)_invokeLocalFunction;	// IMP=0x000000000020dbd4
- (void)_invokeFunction;	// IMP=0x000000000020d2f5
- (void)_getSerializedRequest;	// IMP=0x000000000020c2a8
- (void)_checkShouldSendRecordPCSKeys;	// IMP=0x000000000020bd01
- (void)_prepareForTrustedTargetEncryption;	// IMP=0x000000000020b742
- (void)_prepareForProtectedCloudCompute;	// IMP=0x000000000020ab18
- (void)_preflightRecords;	// IMP=0x0000000000209df3
- (id)encryptData:(id)arg1;	// IMP=0x0000000000209d54
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x0000000000209cbc
- (_Bool)makeStateTransition;	// IMP=0x0000000000209af6
- (int)operationType;	// IMP=0x0000000000209aeb
- (id)activityCreate;	// IMP=0x0000000000209ac2
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002098a8

// Remaining properties
@property(retain, nonatomic) id <CKCodeOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

