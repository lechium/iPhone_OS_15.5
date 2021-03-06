//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AutocompleteContext, NSString;
@protocol SearchRecentsOperationDelegate;

__attribute__((visibility("hidden")))
@interface SearchRecentsOperation : NSOperation
{
    NSString *_query;	// 8 = 0x8
    _Bool _isExecuting;	// 16 = 0x10
    _Bool _isFinished;	// 17 = 0x11
    AutocompleteContext *_context;	// 24 = 0x18
    id <SearchRecentsOperationDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000009dc39f
@property(nonatomic) __weak id <SearchRecentsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isFinished;	// IMP=0x00100000009dc362
- (_Bool)isExecuting;	// IMP=0x00100000009dc352
- (_Bool)isAsynchronous;	// IMP=0x00100000009dc34a
- (void)start;	// IMP=0x00100000009dbbd2
- (id)initWithSearchQuery:(id)arg1 context:(id)arg2;	// IMP=0x00100000009dbb24

@end

