//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPDirectionsCategoryQuestion;

__attribute__((visibility("hidden")))
@interface RAPReportComposerBadRouteSuggestionSection
{
    RAPDirectionsCategoryQuestion *_question;	// 8 = 0x8
    CDUnknownBlockType _selection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000007ffc65
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;	// IMP=0x00100000007ffbf8
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x00100000007ffb27
- (long long)rowsCount;	// IMP=0x00100000007ffb1c
- (id)initWithQuestion:(id)arg1 selection:(CDUnknownBlockType)arg2;	// IMP=0x00100000007ffa3c

@end

