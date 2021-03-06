//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTPronGuessResponse, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTPronGuessStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct PronGuessStreamingResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d3d9f
- (id)flatbuffData;	// IMP=0x00000000000d3c27
- (Offset_47dc73e1)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d3abf
@property(readonly, nonatomic) FTPronGuessResponse *contentAsFTPronGuessResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d399e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d37d0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessStreamingResponse *)arg2;	// IMP=0x00000000000d37ba
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d379f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d3787

@end

