//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <PrivateFederatedLearning/CKCodeOperationMessageMutation-Protocol.h>
#import <PrivateFederatedLearning/NSCopying-Protocol.h>

@class NSString;

@interface PFLFetchModelRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying>
{
    NSString *_taskId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015261
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000015218
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015161
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000150e9
- (void)copyTo:(id)arg1;	// IMP=0x00000000000150bf
- (void)writeTo:(id)arg1;	// IMP=0x000000000001509b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001508e
- (id)dictionaryRepresentation;	// IMP=0x0000000000014ec0
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasTaskId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
