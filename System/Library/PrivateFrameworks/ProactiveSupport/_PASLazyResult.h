//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASLazyResult : NSObject
{
    id _data;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _lock;	// 16 = 0x10
    CDUnknownBlockType _block;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000045a5d
@property(readonly, nonatomic) id resultIfAvailable;
@property(readonly, nonatomic) id result;
- (void)dealloc;	// IMP=0x0000000000045a17
- (id)initWithResult:(id)arg1;	// IMP=0x00000000000459b9
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004595b
- (id)_initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004587c
- (id)_init;	// IMP=0x0000000000045832

@end
