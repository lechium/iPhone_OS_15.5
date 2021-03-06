//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ODCurareEvaluationAndReporting/NSCopying-Protocol.h>

@class NSString;

@interface ODCurareReportFillerMetadata : PBCodable <NSCopying>
{
    NSString *_date;	// 8 = 0x8
    NSString *_selectedModelName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005320
@property(retain, nonatomic) NSString *selectedModelName; // @synthesize selectedModelName=_selectedModelName;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000005273
- (unsigned long long)hash;	// IMP=0x0000000000005226
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000515e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000050c0
- (void)copyTo:(id)arg1;	// IMP=0x000000000000504f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000004fe8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000004fdb
- (id)dictionaryRepresentation;	// IMP=0x0000000000004dc4
- (id)description;	// IMP=0x0000000000004d15

@end

