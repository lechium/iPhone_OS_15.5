//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class NSDate, NSUUID;

@interface TTTextEdit : NSObject <NSCopying>
{
    NSDate *_timestamp;	// 8 = 0x8
    NSUUID *_replicaID;	// 16 = 0x10
    struct _NSRange _range;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003753e
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSUUID *replicaID; // @synthesize replicaID=_replicaID;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037477
- (unsigned long long)hash;	// IMP=0x00000000000373aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000037190
- (id)localizedDescriptionForNote:(id)arg1;	// IMP=0x0000000000036f2b
- (id)description;	// IMP=0x0000000000036e2e
- (id)initWithAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000036d26
- (id)initWithTimestamp:(id)arg1 replicaID:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x0000000000036c75

@end

