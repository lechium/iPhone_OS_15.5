//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, SearchUIWatchListState, WLKCanonicalPlayablesResponse;

@interface SearchUIWatchListCardsManager : NSObject
{
    _Bool _isInUpNext;	// 8 = 0x8
    NSHashTable *_rowModels;	// 16 = 0x10
    NSString *_watchListIdentifier;	// 24 = 0x18
    WLKCanonicalPlayablesResponse *_response;	// 32 = 0x20
    SearchUIWatchListState *_watchListState;	// 40 = 0x28
}

+ (_Bool)isUpNextCardSection:(id)arg1;	// IMP=0x000000000003c690
- (void).cxx_destruct;	// IMP=0x000000000003cbeb
@property(nonatomic) _Bool isInUpNext; // @synthesize isInUpNext=_isInUpNext;
@property(retain, nonatomic) SearchUIWatchListState *watchListState; // @synthesize watchListState=_watchListState;
@property(retain, nonatomic) WLKCanonicalPlayablesResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property(retain, nonatomic) NSHashTable *rowModels; // @synthesize rowModels=_rowModels;
- (void)toggleUpNext;	// IMP=0x000000000003c8b3
- (long long)currentUpNextButtonState;	// IMP=0x000000000003c86e
- (id)currentUpNextTextForRowModel:(id)arg1;	// IMP=0x000000000003c7aa
- (_Bool)isTappable;	// IMP=0x000000000003c777
- (void)addWatchListRowModelObserver:(id)arg1;	// IMP=0x000000000003c705
- (id)initWithWatchListIdentifier:(id)arg1;	// IMP=0x000000000003b8be

@end
