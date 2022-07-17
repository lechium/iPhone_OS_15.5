//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyError, PDURLSessionProxyTaskMessage, __NSCFURLSessionTaskInfo;

@interface PDURLSessionProxyTaskCompleted : PBCodable
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    NSData *_taskInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x001000000006e892
@property(retain, nonatomic) NSData *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006e772
- (unsigned long long)hash;	// IMP=0x001000000006e705
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006e60d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006e549
- (void)copyTo:(id)arg1;	// IMP=0x001000000006e4c6
- (void)writeTo:(id)arg1;	// IMP=0x001000000006e44c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006e227
- (id)dictionaryRepresentation;	// IMP=0x001000000006e12b
- (id)description;	// IMP=0x001000000006e07c
@property(readonly, nonatomic) _Bool hasTaskInfo;
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTask;
@property(retain, setter=_setActualTaskInfo:) __NSCFURLSessionTaskInfo *_actualTaskInfo;

@end
