//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SNLPPommesServerClassifier;

@interface CDMPSCService
{
    SNLPPommesServerClassifier *_pscOrchestrator;	// 32 = 0x20
}

+ (id)trialFactorName;	// IMP=0x00000000000313d4
+ (id)assetFolderNames;	// IMP=0x000000000003136d
+ (id)_emptyResponse;	// IMP=0x00000000000301f3
- (void).cxx_destruct;	// IMP=0x00000000000317c6
- (id)getSNLPPommesServerClassifierPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000316b4
- (id)doInference:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000031573
- (id)assetsPathURLForModelBundle:(id)arg1;	// IMP=0x00000000000313e9
- (_Bool)isAssetRequired;	// IMP=0x00000000000313e1
- (id)setup:(id)arg1;	// IMP=0x0000000000030b51
- (id)handle:(id)arg1;	// IMP=0x000000000003020c
- (_Bool)isEnabled;	// IMP=0x00000000000301da
- (id)handleRequestCommandTypeNames;	// IMP=0x0000000000030120

@end

