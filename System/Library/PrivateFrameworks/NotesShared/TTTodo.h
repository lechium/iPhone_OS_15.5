//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class NSUUID;

@interface TTTodo : NSObject <NSCopying>
{
    _Bool _done;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008dc11
@property(readonly, nonatomic) _Bool done; // @synthesize done=_done;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008dbf3
- (unsigned long long)hash;	// IMP=0x000000000008db90
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008da96
- (id)description;	// IMP=0x000000000008d9b6
- (id)todoWithDone:(_Bool)arg1;	// IMP=0x000000000008d91e
- (id)initWithIdentifier:(id)arg1 done:(_Bool)arg2;	// IMP=0x000000000008d8a8
- (id)init;	// IMP=0x000000000008d84c
- (id)serialize;	// IMP=0x00000000000eb362
- (void)saveToArchive:(void *)arg1;	// IMP=0x00000000000eb264
- (id)initWithArchive:(const void *)arg1;	// IMP=0x00000000000eb1ae
- (id)initWithData:(id)arg1;	// IMP=0x00000000000eb086

@end

