//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback
{
    SFSearchSuggestion *_suggestion;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019d748
- (void).cxx_destruct;	// IMP=0x000000000019d735
@property(retain, nonatomic) SFSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019d693
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019d5f8
- (id)initWithSuggestion:(id)arg1;	// IMP=0x000000000019d58a

@end
