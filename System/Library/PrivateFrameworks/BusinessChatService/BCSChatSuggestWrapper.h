//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BusinessChatService/NSCopying-Protocol.h>

@class BCSChatSuggestMessage, NSString;

__attribute__((visibility("hidden")))
@interface BCSChatSuggestWrapper : PBCodable <NSCopying>
{
    long long _modTime;	// 8 = 0x8
    BCSChatSuggestMessage *_message;	// 16 = 0x10
    NSString *_phone;	// 24 = 0x18
    CDStruct_14b7a8ea _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000108ff
@property(nonatomic) long long modTime; // @synthesize modTime=_modTime;
@property(retain, nonatomic) BCSChatSuggestMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000010809
- (unsigned long long)hash;	// IMP=0x0000000000010797
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000106a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000105e3
- (void)copyTo:(id)arg1;	// IMP=0x000000000001055f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000104dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001023f
- (id)dictionaryRepresentation;	// IMP=0x0000000000010134
- (id)description;	// IMP=0x0000000000010085
@property(nonatomic) _Bool hasModTime;
@property(readonly, nonatomic) _Bool hasMessage;
@property(readonly, nonatomic) _Bool hasPhone;

@end
