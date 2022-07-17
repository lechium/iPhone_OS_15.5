//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying>
{
    NSMutableArray *_applicationMessageSyncResponses;	// 8 = 0x8
}

+ (Class)applicationMessageSyncResponsesType;	// IMP=0x000000000009b4e4
- (void).cxx_destruct;	// IMP=0x000000000009b321
@property(retain, nonatomic) NSMutableArray *applicationMessageSyncResponses; // @synthesize applicationMessageSyncResponses=_applicationMessageSyncResponses;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000009b1c7
- (unsigned long long)hash;	// IMP=0x000000000009b1aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009b110
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009af4d
- (void)copyTo:(id)arg1;	// IMP=0x000000000009ae86
- (void)writeTo:(id)arg1;	// IMP=0x000000000009ad56
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009ad49
- (id)dictionaryRepresentation;	// IMP=0x000000000009ab16
- (id)description;	// IMP=0x000000000009aa67
- (id)applicationMessageSyncResponsesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009aa4a
- (unsigned long long)applicationMessageSyncResponsesCount;	// IMP=0x000000000009aa2d
- (void)addApplicationMessageSyncResponses:(id)arg1;	// IMP=0x000000000009a9c3
- (void)clearApplicationMessageSyncResponses;	// IMP=0x000000000009a9a6

@end
