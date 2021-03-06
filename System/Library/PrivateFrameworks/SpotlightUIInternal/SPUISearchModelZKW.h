//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, SPZKWSession;
@protocol OS_dispatch_queue;

@interface SPUISearchModelZKW
{
    NSObject<OS_dispatch_queue> *_queryProcessor;	// 64 = 0x40
    _Bool _shouldCacheResults;	// 72 = 0x48
    _Bool _newQuery;	// 73 = 0x49
    SPZKWSession *_session;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000154a9
@property(retain, nonatomic) SPZKWSession *session; // @synthesize session=_session;
- (void)updateWithQueryContext:(id)arg1;	// IMP=0x00000000000151ab
- (void)dealloc;	// IMP=0x000000000001516a
- (id)init;	// IMP=0x0000000000015093

@end

