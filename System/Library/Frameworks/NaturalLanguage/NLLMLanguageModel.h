//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLLMTokenIDConverter;

__attribute__((visibility("hidden")))
@interface NLLMLanguageModel
{
    NLLMTokenIDConverter *_tokenIDConverter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001f2dc
- (id)tokenIDConverter;	// IMP=0x000000000001f288
- (id)sessionWithOptions:(id)arg1;	// IMP=0x000000000001f22c
- (_Bool)generatesPredictions;	// IMP=0x000000000001f224

@end

