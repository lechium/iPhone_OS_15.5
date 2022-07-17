//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMSocialHighlightContact <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isSignificant;	// 8 = 0x8
    _Bool _isMe;	// 9 = 0x9
    NSString *_handle;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000b7c0b
- (void).cxx_destruct;	// IMP=0x00000000000b7f54
@property(readonly, nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(readonly, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) _Bool isSignificant; // @synthesize isSignificant=_isSignificant;
- (id)proto;	// IMP=0x00000000000b7e84
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000b7de8
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000b7cc3
- (id)encodeAsProto;	// IMP=0x00000000000b7c73
- (id)serialize;	// IMP=0x00000000000b7c61
- (id)initWithHandle:(id)arg1 isSignificant:(_Bool)arg2 isMe:(_Bool)arg3;	// IMP=0x00000000000b7b79
@property(readonly, nonatomic) unsigned int dataVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
