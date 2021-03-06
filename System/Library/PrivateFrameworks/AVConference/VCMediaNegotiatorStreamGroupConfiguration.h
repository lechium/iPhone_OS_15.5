//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorStreamGroupConfiguration : NSObject <NSCopying>
{
    unsigned int _groupID;	// 8 = 0x8
    unsigned int _mediaType;	// 12 = 0xc
    unsigned int _mediaSubtype;	// 16 = 0x10
    unsigned int _syncGroupID;	// 20 = 0x14
    unsigned int _cipherSuite;	// 24 = 0x18
    NSMutableOrderedSet *_streamConfigs;	// 32 = 0x20
    NSMutableOrderedSet *_codecConfigs;	// 40 = 0x28
}

+ (id)streamGroupConfigWithGroupID:(unsigned int)arg1 mediaType:(unsigned int)arg2 subtype:(unsigned int)arg3 syncGroupID:(unsigned int)arg4 cipherSuite:(unsigned int)arg5;	// IMP=0x00000000000d24fa
@property(nonatomic) unsigned int syncGroupID; // @synthesize syncGroupID=_syncGroupID;
@property(readonly, nonatomic) NSOrderedSet *codecConfigs; // @synthesize codecConfigs=_codecConfigs;
@property(readonly, nonatomic) NSOrderedSet *streamConfigs; // @synthesize streamConfigs=_streamConfigs;
@property(nonatomic) unsigned int mediaSubtype; // @synthesize mediaSubtype=_mediaSubtype;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned int groupID; // @synthesize groupID=_groupID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d2ac2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d2886
- (void)removeStreamConfigs:(struct _NSRange)arg1;	// IMP=0x00000000000d2870
- (unsigned long long)indexOfCodecConfig:(id)arg1;	// IMP=0x00000000000d27c8
- (void)addCodecConfig:(id)arg1;	// IMP=0x00000000000d2674
- (void)addStreamConfig:(id)arg1;	// IMP=0x00000000000d2630
- (id)description;	// IMP=0x00000000000d25c5
- (void)dealloc;	// IMP=0x00000000000d2558
- (id)initWithGroupID:(unsigned int)arg1 mediaType:(unsigned int)arg2 subtype:(unsigned int)arg3 syncGroupID:(unsigned int)arg4 cipherSuite:(unsigned int)arg5;	// IMP=0x00000000000d24dc
- (id)initWithGroupID:(unsigned int)arg1 mediaType:(unsigned int)arg2 subtype:(unsigned int)arg3 syncGroupID:(unsigned int)arg4;	// IMP=0x00000000000d249c
- (id)init;	// IMP=0x00000000000d241d

@end

