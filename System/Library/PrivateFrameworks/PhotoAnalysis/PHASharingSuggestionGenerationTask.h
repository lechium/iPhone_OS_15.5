//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface PHASharingSuggestionGenerationTask
{
    NSDictionary *_suggestionOptionsDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000873f2
- (void)setSuggestionOptionsDictionary:(id)arg1;	// IMP=0x00000000000873de
- (id)suggestionOptionsDictionary;	// IMP=0x00000000000873cd
- (_Bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000087070
- (_Bool)shouldRunWithGraphManager:(id)arg1;	// IMP=0x0000000000086f4e
- (id)name;	// IMP=0x0000000000086f41

@end

