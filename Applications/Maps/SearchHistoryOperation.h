//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AutocompleteContext, NSArray, NSString;
@protocol SearchHistoryOperationDelegate;

__attribute__((visibility("hidden")))
@interface SearchHistoryOperation : NSOperation
{
    NSString *_searchQuery;	// 8 = 0x8
    unsigned int _searchMode;	// 16 = 0x10
    NSArray *_history;	// 24 = 0x18
    id <SearchHistoryOperationDelegate> _delegate;	// 32 = 0x20
    AutocompleteContext *_context;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000076c57c
@property(nonatomic) __weak id <SearchHistoryOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_historyResultsForSearchQuery:(id)arg1 searchMode:(unsigned int)arg2;	// IMP=0x001000000076b8a2
- (id)shortAddressForMapItem:(id)arg1;	// IMP=0x001000000076b819
- (_Bool)_removeCompletionItemForStringKey:(id)arg1 query:(id)arg2 fromCompletions:(id)arg3;	// IMP=0x001000000076b753
- (void)main;	// IMP=0x001000000076b3e8
- (id)initWithSearchQuery:(id)arg1 searchMode:(unsigned int)arg2 history:(id)arg3 context:(id)arg4;	// IMP=0x001000000076b310

@end

