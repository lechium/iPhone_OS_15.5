//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface BPSCorrelateOrderedMerge
{
    NSArray *_publishers;	// 8 = 0x8
    CDUnknownBlockType _comparator;	// 16 = 0x10
}

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;	// IMP=0x000000000002bc14
- (void).cxx_destruct;	// IMP=0x000000000002bbd1
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) NSArray *publishers; // @synthesize publishers=_publishers;
- (void)subscribe:(id)arg1;	// IMP=0x000000000002b990
- (id)initWithPublishers:(id)arg1 comparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b8e3
- (id)initWithA:(id)arg1 b:(id)arg2 comparator:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b803
- (id)init;	// IMP=0x000000000002b7fd
- (_Bool)canStoreInternalStateInBookmark;	// IMP=0x000000000002bcb4
- (id)bookmarkableUpstreams;	// IMP=0x000000000002bc02

@end

