//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCArticleAudioTrack;
@protocol FCContentContext;

@interface FCAudioTrackFetchOperation
{
    _Bool _cachedOnly;	// 8 = 0x8
    CDUnknownBlockType _interestTokenHandler;	// 16 = 0x10
    CDUnknownBlockType _archiveHandler;	// 24 = 0x18
    CDUnknownBlockType _fetchCompletionHandler;	// 32 = 0x20
    id <FCContentContext> _context;	// 40 = 0x28
    FCArticleAudioTrack *_audioTrack;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001ea89d
@property(readonly, nonatomic) FCArticleAudioTrack *audioTrack; // @synthesize audioTrack=_audioTrack;
@property(readonly, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType archiveHandler; // @synthesize archiveHandler=_archiveHandler;
@property(copy, nonatomic) CDUnknownBlockType interestTokenHandler; // @synthesize interestTokenHandler=_interestTokenHandler;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x00000000001ea602
- (void)performOperation;	// IMP=0x00000000001ea18c
- (id)initWithContext:(id)arg1 audioTrack:(id)arg2;	// IMP=0x00000000001ea0ea

@end
