//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, NSURL;

@interface WFJavaScriptStringRemoteQuarantineRequest
{
    unsigned long long _runtimeType;	// 8 = 0x8
    NSURL *_targetURL;	// 16 = 0x10
    NSDictionary *_preRuntimeJavaScriptSerializedRepresentation;	// 24 = 0x18
    NSString *_preRuntimeJavaScriptString;	// 32 = 0x20
    NSString *_runtimeJavaScriptString;	// 40 = 0x28
    NSArray *_actionList;	// 48 = 0x30
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000000109d1d
- (void).cxx_destruct;	// IMP=0x0000000000109cb9
@property(copy, nonatomic) NSArray *actionList; // @synthesize actionList=_actionList;
@property(copy, nonatomic) NSString *runtimeJavaScriptString; // @synthesize runtimeJavaScriptString=_runtimeJavaScriptString;
@property(readonly, nonatomic) NSString *preRuntimeJavaScriptString; // @synthesize preRuntimeJavaScriptString=_preRuntimeJavaScriptString;
@property(readonly, nonatomic) NSDictionary *preRuntimeJavaScriptSerializedRepresentation; // @synthesize preRuntimeJavaScriptSerializedRepresentation=_preRuntimeJavaScriptSerializedRepresentation;
@property(retain, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
@property(nonatomic) unsigned long long runtimeType; // @synthesize runtimeType=_runtimeType;
- (id)defaultLocalizedDeniedErrorMessage;	// IMP=0x0000000000109bfb
- (id)defaultLocalizedDeniedErrorTitle;	// IMP=0x0000000000109bea
- (id)defaultLocalizedPromptMessage;	// IMP=0x0000000000109bd9
- (id)defaultLocalizedPromptTitle;	// IMP=0x0000000000109bc8
- (id)policyFunctionName;	// IMP=0x0000000000109bbb
- (id)initWithWorkflow:(id)arg1 runtimeType:(unsigned long long)arg2 targetURL:(id)arg3 preRuntimeVariableString:(id)arg4 runtimeString:(id)arg5;	// IMP=0x00000000001098a5

@end
