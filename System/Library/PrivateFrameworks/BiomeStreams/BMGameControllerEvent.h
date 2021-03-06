//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMGameControllerEvent <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isControllerConnected;	// 8 = 0x8
    unsigned long long _numberOfControllersConnected;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000ba516
@property(nonatomic) unsigned long long numberOfControllersConnected; // @synthesize numberOfControllersConnected=_numberOfControllersConnected;
@property(nonatomic) _Bool isControllerConnected; // @synthesize isControllerConnected=_isControllerConnected;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ba885
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x00000000000ba769
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000ba6cd
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000ba5c1
- (id)encodeAsProto;	// IMP=0x00000000000ba571
- (id)serialize;	// IMP=0x00000000000ba55f
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithIsControllerConnected:(_Bool)arg1 numberOfControllersConnected:(unsigned long long)arg2;	// IMP=0x00000000000ba406

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

