//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFResultSection.h>

@class NSArray, NSString;

@interface CompletionListGroup : SFResultSection
{
    NSString *_headerViewReuseIdentifier;	// 8 = 0x8
    NSArray *_completions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009accd
@property(readonly, copy, nonatomic) NSArray *completions; // @synthesize completions=_completions;
@property(readonly, copy, nonatomic) NSString *headerViewReuseIdentifier; // @synthesize headerViewReuseIdentifier=_headerViewReuseIdentifier;
- (void)setCompletions:(id)arg1;	// IMP=0x000000000009ab92
@property(readonly, nonatomic) NSString *defaultHeaderTitle;
- (void)configureHeaderView:(id)arg1 forCompletionList:(id)arg2;	// IMP=0x000000000009aa02
- (id)headerView;	// IMP=0x000000000009a991
- (id)initWithTitle:(id)arg1 completions:(id)arg2 maximumNumberOfCompletions:(unsigned long long)arg3;	// IMP=0x000000000009a73b

@end
