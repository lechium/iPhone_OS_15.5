//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriCoreSQLiteStatement : NSObject
{
    struct sqlite3_stmt *_impl;	// 8 = 0x8
    _Bool _finalizeWhenDone;	// 16 = 0x10
}

- (struct sqlite3_stmt *)impl;	// IMP=0x000000000002f494
- (id)initWithImpl:(struct sqlite3_stmt *)arg1 finalizeWhenDone:(_Bool)arg2;	// IMP=0x000000000002f44c
- (void)clearBindings;	// IMP=0x000000000002f437
- (void)reset;	// IMP=0x000000000002f422
- (void)dealloc;	// IMP=0x000000000002f3d5

@end
