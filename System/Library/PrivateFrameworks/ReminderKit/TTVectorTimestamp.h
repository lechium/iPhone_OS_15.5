//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject <NSCopying>
{
    NSMutableDictionary *_clock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cd371
- (id)description;	// IMP=0x00000000000cd110
- (void)mergeWithTimestamp:(id)arg1;	// IMP=0x00000000000cce55
- (unsigned long long)compareTo:(id)arg1;	// IMP=0x00000000000ccad9
- (id)sortedUUIDs;	// IMP=0x00000000000cca7e
- (id)allUUIDs;	// IMP=0x00000000000cca68
- (void)incrementClockForUUID:(id)arg1;	// IMP=0x00000000000cca0f
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;	// IMP=0x00000000000cc977
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;	// IMP=0x00000000000cc8d0
- (unsigned long long)subclockForUUID:(id)arg1;	// IMP=0x00000000000cc888
- (unsigned long long)clockForUUID:(id)arg1;	// IMP=0x00000000000cc840
- (id)clockElementForUUID:(id)arg1;	// IMP=0x00000000000cc82a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cc7c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cc795
- (id)init;	// IMP=0x00000000000cc73f
- (id)serialize;	// IMP=0x00000000000e39f4
- (void)saveToArchive:(void *)arg1;	// IMP=0x00000000000e391f
- (id)initWithArchive:(const void *)arg1;	// IMP=0x00000000000e3851
- (id)initWithData:(id)arg1;	// IMP=0x00000000000e3766

@end

