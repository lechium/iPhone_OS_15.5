//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MRRMultimodalMentionDetector : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    struct unique_ptr<marrs::mrr::md::MRRMentionDetectorInterface, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>> _mentionDetector;	// 16 = 0x10
    NSString *_locale;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x0000000000049fd2
+ (id)name;	// IMP=0x0000000000049fc5
- (id).cxx_construct;	// IMP=0x000000000004c645
- (void).cxx_destruct;	// IMP=0x000000000004c606
- (_Bool)detectMentionsInUtterance:(id)arg1 utteranceTokens:(id)arg2 tokenEmbeddings:(id)arg3 maximumCandidates:(unsigned long long)arg4 status:(id *)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000004c141
- (_Bool)detectMentionsInUtterance:(id)arg1 maximumCandidates:(unsigned long long)arg2 status:(id *)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000004bc88
- (id)detectMentionsInUtterance:(id)arg1 utteranceTokens:(id)arg2 tokenEmbeddings:(id)arg3 maximumCandidates:(unsigned long long)arg4 status:(id *)arg5;	// IMP=0x000000000004b8ca
- (id)detectMentionsInUtterance:(id)arg1 maximumCandidates:(unsigned long long)arg2 status:(id *)arg3;	// IMP=0x000000000004b659
- (_Bool)detectMentionsInUtterance:(id)arg1 status:(id *)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b31b
- (id)detectMentionsInUtteranceRequest:(id)arg1 status:(id *)arg2;	// IMP=0x000000000004b1d6
- (id)detectMentionsInUtterance:(id)arg1 status:(id *)arg2;	// IMP=0x000000000004aff5
- (id)detectMentionsInUtteranceImpl:(id)arg1 status:(id *)arg2;	// IMP=0x000000000004a74b
- (id)initWithAssets:(id)arg1 forLocale:(id)arg2 status:(id *)arg3;	// IMP=0x000000000004a027

@end
