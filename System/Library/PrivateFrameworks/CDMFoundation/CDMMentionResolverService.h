//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRRMultimodalMentionResolver, NSArray;

@interface CDMMentionResolverService
{
    MRRMultimodalMentionResolver *_mentionResolver;	// 32 = 0x20
    NSArray *_overrideMentionsForReplay;	// 40 = 0x28
}

+ (id)trialFactorName;	// IMP=0x0000000000063b29
+ (id)assetFolderNames;	// IMP=0x0000000000063ac2
- (void).cxx_destruct;	// IMP=0x0000000000063c37
@property(readonly, nonatomic) NSArray *overrideMentionsForReplay; // @synthesize overrideMentionsForReplay=_overrideMentionsForReplay;
@property(retain, nonatomic) MRRMultimodalMentionResolver *mentionResolver; // @synthesize mentionResolver=_mentionResolver;
- (id)predictWithInput:(id)arg1 forLocale:(id)arg2 status:(id *)arg3;	// IMP=0x0000000000063bd1
- (id)getPredictor:(id)arg1 forLocale:(id)arg2 status:(id *)arg3;	// IMP=0x0000000000063b3e
- (_Bool)isAssetRequired;	// IMP=0x0000000000063b36
- (id)handle:(id)arg1;	// IMP=0x00000000000636e9
- (id)setup:(id)arg1;	// IMP=0x0000000000063284
- (_Bool)isEnabled;	// IMP=0x000000000006326b
- (id)handleRequestCommandTypeNames;	// IMP=0x00000000000631b1

@end
