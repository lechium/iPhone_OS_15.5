//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString, SGMIBiomeReducedMessageEvents, SGMailClientUtil, SGSimpleMailMessage, SGSqlEntityStore;

@interface SGMIFeatureVector : NSObject
{
    NSString *_messageId;	// 8 = 0x8
    SGSimpleMailMessage *_mailMessage;	// 16 = 0x10
    NSMutableDictionary *_features;	// 24 = 0x18
    SGMailClientUtil *_mailClientUtil;	// 32 = 0x20
    SGMIBiomeReducedMessageEvents *_biomeMessageSummary;	// 40 = 0x28
    NSNumber *_senderConnectionScore;	// 48 = 0x30
    _Bool _hasHashedMessageId;	// 56 = 0x38
    SGSqlEntityStore *_store;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001f7891
@property(readonly, nonatomic) SGSqlEntityStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) SGSimpleMailMessage *mailMessage; // @synthesize mailMessage=_mailMessage;
@property(readonly, nonatomic) _Bool hasHashedMessageId; // @synthesize hasHashedMessageId=_hasHashedMessageId;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void)logOrStageWithSaliency:(id)arg1;	// IMP=0x00000000001f7733
- (id)saliencyWithScore:(id)arg1 isSalient:(_Bool)arg2 gteSaliency:(long long)arg3 isCounted:(_Bool)arg4;	// IMP=0x00000000001f7606
- (id)saliencyWithScore:(id)arg1 isSalient:(_Bool)arg2;	// IMP=0x00000000001f75eb
- (id)defaultSaliencyOnOverrideFor:(long long)arg1;	// IMP=0x00000000001f75ac
- (id)defaultSaliencyOnError;	// IMP=0x00000000001f7591
@property(readonly, nonatomic) NSString *mailboxId;
- (long long)estimateGroundTruthWithConfig:(id)arg1;	// IMP=0x00000000001f71c2
- (long long)estimateGroundTruth;	// IMP=0x00000000001f7168
- (long long)evaluateFirstMatchAmong:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x00000000001f6e5b
- (void)ingestFeatures:(id)arg1;	// IMP=0x00000000001f6c8c
- (void)setFeatureToNumberArrayValue:(id)arg1 forName:(long long)arg2;	// IMP=0x00000000001f6bdc
- (void)setFeatureToNumberValue:(id)arg1 forName:(long long)arg2;	// IMP=0x00000000001f6b2c
- (void)setFeatureToStringArrayValue:(id)arg1 forName:(long long)arg2;	// IMP=0x00000000001f6a7c
- (void)setFeatureToStringValue:(id)arg1 forName:(long long)arg2;	// IMP=0x00000000001f69cc
- (id)feature:(long long)arg1;	// IMP=0x00000000001f3804
- (id)cachedFeature:(long long)arg1;	// IMP=0x00000000001f379d
- (id)features;	// IMP=0x00000000001f3787
- (id)description;	// IMP=0x00000000001f353f
- (id)flatVectorForFeatureNames:(id)arg1;	// IMP=0x00000000001f3137
- (id)initWithMessageId:(id)arg1 hasHashedMessageId:(_Bool)arg2 simpleMailMessage:(id)arg3 senderConnectionScore:(id)arg4 biomeMessageSummary:(id)arg5 store:(id)arg6 preLoadedFeatureNames:(id)arg7;	// IMP=0x00000000001f3021
- (id)initWithMessageId:(id)arg1 hasHashedMessageId:(_Bool)arg2 simpleMailMessage:(id)arg3 senderConnectionScore:(id)arg4 biomeMessageSummary:(id)arg5 mailClientUtil:(id)arg6 store:(id)arg7 preLoadedFeatureNames:(id)arg8;	// IMP=0x00000000001f2d2c

@end
