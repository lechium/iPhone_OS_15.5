//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveExperiments/PREExperimentResolverProtocol-Protocol.h>

@class NSDictionary, TRIClient, _PASLock;

@interface PREExperimentResolver : NSObject <PREExperimentResolverProtocol>
{
    _PASLock *_guardedSmartReplyConfig;	// 8 = 0x8
    NSDictionary *_lockPerLanguage;	// 16 = 0x10
    TRIClient *_trialClient;	// 24 = 0x18
    NSDictionary *_smartReplyLangAndNamespaces;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000012497
- (void).cxx_destruct;	// IMP=0x00000000000120cd
@property(readonly, nonatomic) NSDictionary *smartReplyLangAndNamespaces; // @synthesize smartReplyLangAndNamespaces=_smartReplyLangAndNamespaces;
- (id)_getDefaultResponseSuggestionsExperimentConfig:(id)arg1;	// IMP=0x0000000000012087
- (id)getResponseSuggestionsExperimentConfig:(id)arg1 shouldDownloadAssets:(_Bool)arg2;	// IMP=0x0000000000011bc8
- (void)warmupForLocale:(id)arg1;	// IMP=0x0000000000011ba8
- (id)init;	// IMP=0x00000000000116de

@end
