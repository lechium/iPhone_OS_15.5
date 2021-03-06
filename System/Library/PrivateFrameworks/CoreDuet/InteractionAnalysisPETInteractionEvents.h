//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface InteractionAnalysisPETInteractionEvents : PBCodable <NSCopying>
{
    NSString *_deviceID;	// 8 = 0x8
    NSMutableArray *_interactionEvents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000195512
- (unsigned long long)hash;	// IMP=0x00000000001954c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001953fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019523e
- (void)writeTo:(id)arg1;	// IMP=0x00000000001950e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001950dc
- (id)dictionaryRepresentation;	// IMP=0x0000000000194c9d
- (id)description;	// IMP=0x0000000000194bee

@end

