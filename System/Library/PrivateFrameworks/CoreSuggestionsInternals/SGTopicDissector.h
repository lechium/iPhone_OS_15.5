//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/SGMailMessageProcessing-Protocol.h>

@class CKContextClient, NSString, PPTextToTopicTransform;

@interface SGTopicDissector <SGMailMessageProcessing>
{
    CKContextClient *_contextClient;	// 8 = 0x8
    PPTextToTopicTransform *_transform;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000006dd92
- (void).cxx_destruct;	// IMP=0x000000000006c964
- (void)_collectHighLevelTopicsWithText:(id)arg1 bundleId:(id)arg2 addTopic:(CDUnknownBlockType)arg3 weight:(double)arg4;	// IMP=0x000000000006c7f8
- (void)_collectResultsFromContextKitWithText:(id)arg1 isPlainText:(_Bool)arg2 bundleId:(id)arg3 language:(id)arg4 useContextKitTopics:(_Bool)arg5 useContextKitNamedEntities:(_Bool)arg6 addTopic:(CDUnknownBlockType)arg7 addNamedEntity:(CDUnknownBlockType)arg8 weight:(double)arg9;	// IMP=0x000000000006c560
- (id)topicsInText:(id)arg1 isPlainText:(_Bool)arg2 source:(id)arg3 cloudSync:(_Bool)arg4 language:(id)arg5 topicAlgorithms:(id)arg6 namedEntityAlgorithms:(id)arg7 weight:(double)arg8;	// IMP=0x000000000006ba60
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;	// IMP=0x000000000006ac41
- (id)extractionsFromContextKitWithText:(id)arg1 isPlainText:(_Bool)arg2 bundleId:(id)arg3 language:(id)arg4 weight:(double)arg5;	// IMP=0x000000000006a889
- (id)init;	// IMP=0x000000000006a7a9
- (id)initWithContextClient:(id)arg1;	// IMP=0x000000000006a70a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
