//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGBloomFilterChunk-Protocol.h>

@class NSString;

@interface SGBloomFilterChunkMmap : NSObject <SGBloomFilterChunk>
{
    NSString *_path;	// 8 = 0x8
    int _fd;	// 16 = 0x10
    unsigned int *_countPtr;	// 24 = 0x18
    unsigned int _mask;	// 32 = 0x20
    char *_buf;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000f6e68
- (_Bool)exists:(CDUnion_e7c9147b)arg1;	// IMP=0x00000000000f6dd9
- (void)add:(CDUnion_e7c9147b)arg1;	// IMP=0x00000000000f6dae
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) unsigned int count;
- (void)close;	// IMP=0x00000000000f6d46
- (void)dealloc;	// IMP=0x00000000000f6d08
- (id)init;	// IMP=0x00000000000f6c81
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000f6986

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
