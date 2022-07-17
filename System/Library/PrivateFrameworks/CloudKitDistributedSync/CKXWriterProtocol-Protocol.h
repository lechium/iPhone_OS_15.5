//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKXReaderWriterProtocol-Protocol.h>

@class NSData;

@protocol CKXWriterProtocol <CKXReaderWriterProtocol>
- (NSData *)flush;
- (void)commitStruct:(CDStruct_08de4b04)arg1;
- (void)setData:(void *)arg1 withLength:(unsigned long long)arg2 forList:(CDStruct_2d6ed345)arg3;
- (void)setData:(void *)arg1 withEncoding:(const char *)arg2 forField:(unsigned long long)arg3 inStruct:(CDStruct_08de4b04)arg4;
- (CDStruct_08de4b04)beginAppendedListStructInList:(CDStruct_2d6ed345)arg1;
- (CDStruct_2d6ed345)beginReferencedListForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;
- (CDStruct_08de4b04)beginReferencedStructForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;
- (CDStruct_08de4b04)beginRootStructWithType:(unsigned long long)arg1;
@end
