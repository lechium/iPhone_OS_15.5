//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SNLPEmbedder;

@interface CDMEmbeddingProtoService
{
    SNLPEmbedder *_snlpEmbedder;	// 32 = 0x20
}

+ (id)trialFactorName;	// IMP=0x00000000000432b8
+ (id)assetFolderNames;	// IMP=0x0000000000043246
- (void).cxx_destruct;	// IMP=0x00000000000435dc
- (long long)getServiceState;	// IMP=0x00000000000435c8
- (id)doEmbedding:(id)arg1;	// IMP=0x00000000000433a2
- (_Bool)hasEmbedderOrchestrator;	// IMP=0x000000000004338d
- (id)createEmbedderOrchestrator:(id)arg1 embedding_bert_path:(id)arg2 embedding_config_path:(id)arg3 reformulation_path:(id)arg4;	// IMP=0x00000000000432c5
- (id)handle:(id)arg1;	// IMP=0x0000000000042efb
- (id)setup:(id)arg1;	// IMP=0x00000000000422fc
- (id)handleRequestCommandTypeNames;	// IMP=0x0000000000042242

@end

