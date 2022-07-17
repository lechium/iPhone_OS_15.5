//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TIKeyboardCandidate;

@interface TISKCandidateAcceptEvent
{
    _Bool _isAutocorrection;	// 32 = 0x20
    TIKeyboardCandidate *_candidate;	// 40 = 0x28
    NSString *_wordBucketCategory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000019be21
@property(nonatomic) _Bool isAutocorrection; // @synthesize isAutocorrection=_isAutocorrection;
@property(retain, nonatomic) NSString *wordBucketCategory; // @synthesize wordBucketCategory=_wordBucketCategory;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (void)reportToSession:(id)arg1;	// IMP=0x000000000019b9bd
- (id)description;	// IMP=0x000000000019b99b
- (id)init:(id)arg1 emojiSearchMode:(_Bool)arg2 order:(long long)arg3 wordBucketCategory:(id)arg4 isAutocorrection:(_Bool)arg5;	// IMP=0x000000000019b8d0

@end
