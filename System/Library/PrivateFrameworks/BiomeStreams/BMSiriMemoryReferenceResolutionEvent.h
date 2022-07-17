//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSDictionary, NSString;

@interface BMSiriMemoryReferenceResolutionEvent : NSObject <BMStoreData, BMProtoBufWrapper>
{
    NSString *_version;	// 8 = 0x8
    NSDictionary *_entitiesByEntityID;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000003ffd7
- (void).cxx_destruct;	// IMP=0x00000000000409d0
@property(readonly, copy, nonatomic) NSDictionary *entitiesByEntityID; // @synthesize entitiesByEntityID=_entitiesByEntityID;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000408c7
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x0000000000040509
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000004046d
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000400d5
- (id)encodeAsProto;	// IMP=0x0000000000040085
- (id)serialize;	// IMP=0x0000000000040073
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithVersion:(id)arg1 entityDict:(id)arg2;	// IMP=0x000000000003ff33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
