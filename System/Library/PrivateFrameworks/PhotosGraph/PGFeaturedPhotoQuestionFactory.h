//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGSuggestionSession;

@interface PGFeaturedPhotoQuestionFactory
{
    PGSuggestionSession *_suggestionSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000355489
- (id)randomAssetsUUIDsWithLimit:(unsigned long long)arg1;	// IMP=0x00000000003551d9
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003543f1
- (long long)questionOptions;	// IMP=0x00000000003543e6
- (unsigned short)questionType;	// IMP=0x00000000003543db
- (id)initWithWorkingContext:(id)arg1;	// IMP=0x000000000035434a

@end

