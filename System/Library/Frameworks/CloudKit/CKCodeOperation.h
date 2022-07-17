//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKCodeOperationCallbacks-Protocol.h>
#import <CloudKit/CKOperationInMemoryAssets-Protocol.h>

@class CKCodeFunctionInvokeOperationInfo, CKCodeService, NSArray, NSError, NSMutableDictionary, NSString, NSURL, PBCodable;
@protocol CKCodeOperationCallbacks, CKCodeOperationMessageMutation;

@interface CKCodeOperation <CKOperationInMemoryAssets, CKCodeOperationCallbacks>
{
    _Bool _dropInMemoryAssetContentASAP;	// 8 = 0x8
    _Bool _shouldFetchAssetContentInMemory;	// 9 = 0x9
    NSMutableDictionary *_assetInfoByArrayIndexByRecordKeyByRecordID;	// 16 = 0x10
    CDUnknownBlockType _perRecordProgressBlock;	// 24 = 0x18
    CDUnknownBlockType _perRecordCompletionBlock;	// 32 = 0x20
    CDUnknownBlockType _codeOperationCompletionBlock;	// 40 = 0x28
    CDUnknownBlockType _incompleteResponsePreviewBlock;	// 48 = 0x30
    CDUnknownBlockType _didSubstituteRequestRecordTransportsBlock;	// 56 = 0x38
    PBCodable<CKCodeOperationMessageMutation> *_request;	// 64 = 0x40
    Class _responseClass;	// 72 = 0x48
    NSString *_functionName;	// 80 = 0x50
    CKCodeService *_codeService;	// 88 = 0x58
    NSString *_serviceName;	// 96 = 0x60
    long long _destinationServer;	// 104 = 0x68
    NSURL *_destinationServerExplicitURL;	// 112 = 0x70
    NSArray *_requestLocalSerializations;	// 120 = 0x78
    PBCodable<CKCodeOperationMessageMutation> *_response;	// 128 = 0x80
    NSError *_responseError;	// 136 = 0x88
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x00000000000b36e4
+ (id)operationDaemonCallbackProtocol;	// IMP=0x00000000000b1cf2
+ (Class)operationInfoClass;	// IMP=0x00000000000b1948
- (void).cxx_destruct;	// IMP=0x00000000000b3921
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) PBCodable<CKCodeOperationMessageMutation> *response; // @synthesize response=_response;
@property(retain, nonatomic) NSArray *requestLocalSerializations; // @synthesize requestLocalSerializations=_requestLocalSerializations;
@property(copy, nonatomic) NSURL *destinationServerExplicitURL; // @synthesize destinationServerExplicitURL=_destinationServerExplicitURL;
@property(nonatomic) long long destinationServer; // @synthesize destinationServer=_destinationServer;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) CKCodeService *codeService; // @synthesize codeService=_codeService;
@property(nonatomic) _Bool shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) _Bool dropInMemoryAssetContentASAP; // @synthesize dropInMemoryAssetContentASAP=_dropInMemoryAssetContentASAP;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(retain, nonatomic) PBCodable<CKCodeOperationMessageMutation> *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID; // @synthesize assetInfoByArrayIndexByRecordKeyByRecordID=_assetInfoByArrayIndexByRecordKeyByRecordID;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000b30ef
- (void)handleAssetDataForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 data:(id)arg4 offset:(unsigned long long)arg5;	// IMP=0x00000000000b3057
- (void)handleFetchForRecordID:(id)arg1 didProgress:(double)arg2;	// IMP=0x00000000000b2e75
- (void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b2a6c
- (void)handleReplaceWireSerializationsWithRecords:(id)arg1;	// IMP=0x00000000000b2703
- (void)handleInitialResponseReceived:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b20f9
- (void)handleReplaceLocalWithWireSerializations:(id)arg1 encryptedMasterKeys:(id)arg2 wireEnvelopes:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000b1d03
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x00000000000b1c39
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x00000000000b1959
- (id)activityCreate;	// IMP=0x00000000000b191f
- (void)performCKOperation;	// IMP=0x00000000000b12b3
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000000b10d1
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x00000000000b0fdc
@property(copy, nonatomic) CDUnknownBlockType didSubstituteRequestRecordTransportsBlock; // @synthesize didSubstituteRequestRecordTransportsBlock=_didSubstituteRequestRecordTransportsBlock;
@property(copy, nonatomic) CDUnknownBlockType incompleteResponsePreviewBlock; // @synthesize incompleteResponsePreviewBlock=_incompleteResponsePreviewBlock;
@property(copy, nonatomic) CDUnknownBlockType codeOperationCompletionBlock; // @synthesize codeOperationCompletionBlock=_codeOperationCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 responseClass:(Class)arg3;	// IMP=0x00000000000afb3f
- (id)initWithFunctionName:(id)arg1 responseClass:(Class)arg2;	// IMP=0x00000000000af9ea

// Remaining properties
@property(readonly, nonatomic) id <CKCodeOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKCodeFunctionInvokeOperationInfo *operationInfo; // @dynamic operationInfo;

@end
