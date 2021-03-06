//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStorage/NSCopying-Protocol.h>

@class BMPruningPolicy, NSString;

@interface BMStoreConfig : NSObject <NSCopying>
{
    unsigned long long _streamType;	// 8 = 0x8
    NSString *_datastorePath;	// 16 = 0x10
    unsigned long long _segmentSize;	// 24 = 0x18
    unsigned long long _protectionClass;	// 32 = 0x20
    BMPruningPolicy *_pruningPolicy;	// 40 = 0x28
    unsigned long long _datastoreVersion;	// 48 = 0x30
    long long _storeLocationOption;	// 56 = 0x38
    NSString *_remoteStreamName;	// 64 = 0x40
}

+ (unsigned long long)streamTypeFromStorePath:(id)arg1;	// IMP=0x0000000000015390
+ (id)newPrivateStreamDefaultConfigurationWithProtectionClass:(unsigned long long)arg1 segmentSize:(unsigned long long)arg2;	// IMP=0x0000000000014cdc
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)arg1 protectionClass:(unsigned long long)arg2;	// IMP=0x0000000000014c67
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)arg1;	// IMP=0x0000000000014c50
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)arg1 protectionClass:(unsigned long long)arg2;	// IMP=0x0000000000014bbe
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)arg1;	// IMP=0x0000000000014ba7
+ (id)newRestrictedStreamDefaultConfigurationWithProtectionClass:(unsigned long long)arg1;	// IMP=0x0000000000014b8d
+ (id)newRestrictedStreamDefaultConfiguration;	// IMP=0x0000000000014b76
+ (id)newPublicStreamDefaultConfigurationWithProtectionClass:(unsigned long long)arg1;	// IMP=0x0000000000014b5c
+ (id)newPublicStreamDefaultConfiguration;	// IMP=0x0000000000014b45
+ (id)newStreamDefaultConfigurationForPublicStream:(_Bool)arg1 protectionClass:(unsigned long long)arg2 segmentSize:(unsigned long long)arg3;	// IMP=0x0000000000014aa1
+ (id)newStreamDefaultConfigurationForPublicStream:(_Bool)arg1 protectionClass:(unsigned long long)arg2;	// IMP=0x0000000000014a89
+ (id)newStreamDefaultConfigurationForPublicStream:(_Bool)arg1;	// IMP=0x0000000000014a72
- (void).cxx_destruct;	// IMP=0x00000000000154fb
@property(copy, nonatomic) NSString *remoteStreamName; // @synthesize remoteStreamName=_remoteStreamName;
@property(nonatomic) long long storeLocationOption; // @synthesize storeLocationOption=_storeLocationOption;
@property(readonly, nonatomic) unsigned long long datastoreVersion; // @synthesize datastoreVersion=_datastoreVersion;
@property(retain, nonatomic) BMPruningPolicy *pruningPolicy; // @synthesize pruningPolicy=_pruningPolicy;
@property(readonly, nonatomic) unsigned long long protectionClass; // @synthesize protectionClass=_protectionClass;
@property(readonly, nonatomic) unsigned long long segmentSize; // @synthesize segmentSize=_segmentSize;
@property(readonly, nonatomic) NSString *datastorePath; // @synthesize datastorePath=_datastorePath;
- (unsigned long long)hash;	// IMP=0x00000000000152a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014fc9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014f14
- (id)copyStoreConfigWithOption:(long long)arg1 remoteStreamName:(id)arg2;	// IMP=0x0000000000014e9f
- (unsigned long long)streamType;	// IMP=0x0000000000014e95
- (id)initWithStoreBasePath:(id)arg1 segmentSize:(unsigned long long)arg2 protectionClass:(unsigned long long)arg3;	// IMP=0x0000000000014e5c
- (id)initWithStoreBasePath:(id)arg1 segmentSize:(unsigned long long)arg2;	// IMP=0x0000000000014e44
- (id)initWithStoreVersion:(unsigned long long)arg1 datastorePath:(id)arg2 maxAllowedMappedPages:(unsigned long long)arg3 segmentSize:(unsigned long long)arg4 segmentResizeFactor:(float)arg5 segmentPaddingFactor:(float)arg6;	// IMP=0x0000000000014e29
- (id)initWithStoreVersion:(unsigned long long)arg1 storeBasePath:(id)arg2 segmentSize:(unsigned long long)arg3 protectionClass:(unsigned long long)arg4 storeLocationOption:(long long)arg5 remoteStreamName:(id)arg6 pruningPolicy:(id)arg7;	// IMP=0x0000000000014d21
- (id)initWithStoreVersion:(unsigned long long)arg1 storeBasePath:(id)arg2 segmentSize:(unsigned long long)arg3 protectionClass:(unsigned long long)arg4;	// IMP=0x0000000000014cf6
- (id)init;	// IMP=0x0000000000014a6c

@end

