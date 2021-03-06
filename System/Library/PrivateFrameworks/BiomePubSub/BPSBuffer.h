//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSBuffer
{
    id <BPSPublisher> _upstream;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
    unsigned long long _prefetch;	// 24 = 0x18
    unsigned long long _whenFull;	// 32 = 0x20
    NSMutableArray *_values;	// 40 = 0x28
}

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;	// IMP=0x00000000000076b8
- (void).cxx_destruct;	// IMP=0x00000000000078bf
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) unsigned long long whenFull; // @synthesize whenFull=_whenFull;
@property(readonly, nonatomic) unsigned long long prefetch; // @synthesize prefetch=_prefetch;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) id <BPSPublisher> upstream; // @synthesize upstream=_upstream;
- (_Bool)canStoreInternalStateInBookmark;	// IMP=0x000000000000784e
- (id)bookmarkableUpstreams;	// IMP=0x000000000000764d
- (void)subscribe:(id)arg1;	// IMP=0x00000000000075ab
- (id)initWithUpstream:(id)arg1 size:(unsigned long long)arg2 prefetch:(unsigned long long)arg3 whenFull:(unsigned long long)arg4 values:(id)arg5;	// IMP=0x00000000000074d0
- (id)initWithUpstream:(id)arg1 size:(unsigned long long)arg2 prefetch:(unsigned long long)arg3 whenFull:(unsigned long long)arg4;	// IMP=0x00000000000074ad

@end

