//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>

@interface TRIPBUnknownFieldSet : NSObject <NSCopying>
{
    struct __CFDictionary *fields_;	// 8 = 0x8
}

+ (_Bool)isFieldTag:(int)arg1;	// IMP=0x00000000000179c2
- (void)getTags:(int *)arg1;	// IMP=0x0000000000017f72
- (void)mergeFromCodedInputStream:(id)arg1;	// IMP=0x0000000000017f18
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;	// IMP=0x0000000000017ee2
- (void)mergeMessageSetMessage:(int)arg1 data:(id)arg2;	// IMP=0x0000000000017eac
- (_Bool)mergeFieldFrom:(int)arg1 input:(id)arg2;	// IMP=0x0000000000017c9d
- (void)mergeVarintField:(int)arg1 value:(int)arg2;	// IMP=0x0000000000017c2a
- (void)mergeFromData:(id)arg1;	// IMP=0x0000000000017bc2
- (void)mergeUnknownFields:(id)arg1;	// IMP=0x0000000000017ae2
- (id)mutableFieldForNumber:(int)arg1 create:(_Bool)arg2;	// IMP=0x0000000000017a61
- (void)addField:(id)arg1;	// IMP=0x00000000000179d5
- (id)data;	// IMP=0x0000000000017945
- (unsigned long long)serializedSizeAsMessageSet;	// IMP=0x00000000000178ea
- (void)writeAsMessageSetTo:(id)arg1;	// IMP=0x00000000000178b9
- (unsigned long long)serializedSize;	// IMP=0x000000000001785e
- (id)description;	// IMP=0x00000000000177e0
- (void)writeToCodedOutputStream:(id)arg1;	// IMP=0x0000000000017672
- (id)sortedFields;	// IMP=0x00000000000174f2
- (unsigned long long)countOfFields;	// IMP=0x00000000000174db
- (id)getField:(int)arg1;	// IMP=0x00000000000174c1
- (_Bool)hasField:(int)arg1;	// IMP=0x00000000000174a0
- (unsigned long long)hash;	// IMP=0x0000000000017480
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001742a
- (void)dealloc;	// IMP=0x00000000000173eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017354

@end
