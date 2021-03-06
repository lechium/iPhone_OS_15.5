//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTResetServerEndpointer : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ResetServerEndpointer *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009e072
- (id)flatbuffData;	// IMP=0x000000000009defa
- (Offset_012fa2a8)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000009de23
@property(readonly, nonatomic) long long speech_packet_count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009ddea
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ResetServerEndpointer *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000009dc1c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ResetServerEndpointer *)arg2;	// IMP=0x000000000009dc06
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000009dbeb
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000009dbd3

@end

