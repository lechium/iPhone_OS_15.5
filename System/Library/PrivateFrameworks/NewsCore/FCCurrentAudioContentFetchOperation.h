//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCurrentAudioContent;
@protocol FCContentContext;

@interface FCCurrentAudioContentFetchOperation
{
    CDUnknownBlockType _fetchCompletionHandler;	// 8 = 0x8
    id <FCContentContext> _context;	// 16 = 0x10
    FCCurrentAudioContent *_resultCurrentContent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b7289
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
- (id)_promisePlaceholderContentWithConfiguration:(id)arg1;	// IMP=0x00000000000b6cc4
- (id)_promiseContentWithConfiguration:(id)arg1;	// IMP=0x00000000000b6353
- (id)_promiseConfiguration;	// IMP=0x00000000000b62d3
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x00000000000b602e
- (void)performOperation;	// IMP=0x00000000000b5d51
- (_Bool)validateOperation;	// IMP=0x00000000000b5c49
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000b5bdb
- (id)init;	// IMP=0x00000000000b5a96

@end

