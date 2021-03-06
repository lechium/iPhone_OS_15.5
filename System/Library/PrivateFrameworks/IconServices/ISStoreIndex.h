//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface ISStoreIndex : NSObject
{
    NSURL *_indexFileURL;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    struct os_unfair_lock_s _dataLock;	// 24 = 0x18
    NSData *_entryData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000ed2d
@property(readonly) NSURL *indexFileURL; // @synthesize indexFileURL=_indexFileURL;
- (_Bool)validate;	// IMP=0x000000000000e9d9
- (id)description;	// IMP=0x000000000000e707
- (void)enumerateValuesForUUID:(unsigned char [16])arg1 bock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e561
- (void)enumerateValuesWithBock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e45f
- (void)_internalSetData:(id)arg1;	// IMP=0x000000000000e44e
- (id)_internalData;	// IMP=0x000000000000e440
@property(readonly) NSData *data; // @dynamic data;
@property(readonly) struct os_unfair_lock_s *dataLock;
- (void)invalidate;	// IMP=0x000000000000e2ad
- (id)initWithStoreFileURL:(id)arg1;	// IMP=0x000000000000e262

@end

