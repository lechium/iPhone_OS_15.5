//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySetTaskPriority : PBCodable
{
    unsigned int _priority;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    struct {
        unsigned int priority:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000006cca
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000006c1b
- (unsigned long long)hash;	// IMP=0x0010000000006bc9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000006b08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000006a70
- (void)copyTo:(id)arg1;	// IMP=0x0010000000006a0d
- (void)writeTo:(id)arg1;	// IMP=0x00100000000069a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000006761
- (id)dictionaryRepresentation;	// IMP=0x001000000000667c
- (id)description;	// IMP=0x00100000000065cd
@property(nonatomic) _Bool hasPriority;
@property(readonly, nonatomic) _Bool hasTask;

@end
