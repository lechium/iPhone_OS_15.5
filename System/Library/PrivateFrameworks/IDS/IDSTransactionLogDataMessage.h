//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface IDSTransactionLogDataMessage
{
    NSData *_dataValue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c7452
@property(readonly, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
- (id)dictionaryRepresentation;	// IMP=0x00000000000c739d
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000c7311
- (id)initWithData:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5;	// IMP=0x00000000000c7283

@end

