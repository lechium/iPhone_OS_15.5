//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class CKVSpanInfo;

@interface CKVSpanMatchField : NSObject <NSCopying>
{
    unsigned char _fieldComponent;	// 8 = 0x8
    CKVSpanInfo *_spanInfo;	// 16 = 0x10
    long long _fieldType;	// 24 = 0x18
}

+ (id)labelMatchWithFieldType:(long long)arg1 spanInfo:(id)arg2;	// IMP=0x00000000000ebed7
+ (id)valueMatchWithFieldType:(long long)arg1 spanInfo:(id)arg2;	// IMP=0x00000000000ebe71
- (void).cxx_destruct;	// IMP=0x00000000000ebdda
@property(readonly, nonatomic) unsigned char fieldComponent; // @synthesize fieldComponent=_fieldComponent;
@property(readonly, nonatomic) long long fieldType; // @synthesize fieldType=_fieldType;
@property(readonly, nonatomic) CKVSpanInfo *spanInfo; // @synthesize spanInfo=_spanInfo;
- (unsigned long long)hash;	// IMP=0x00000000000ebd0d
- (id)description;	// IMP=0x00000000000ebc48
- (_Bool)isEqualToSpanMatchField:(id)arg1;	// IMP=0x00000000000ebb96
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ebb2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ebac4
- (id)init;	// IMP=0x00000000000eba7c
- (id)initWithSpanInfo:(id)arg1 fieldType:(long long)arg2 fieldComponent:(unsigned char)arg3;	// IMP=0x00000000000eb7f5

@end
