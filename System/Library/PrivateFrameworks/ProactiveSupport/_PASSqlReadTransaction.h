//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASSqliteDatabase;

@interface _PASSqlReadTransaction : NSObject
{
    _PASSqliteDatabase *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003f099
@property(readonly, nonatomic) _PASSqliteDatabase *db; // @synthesize db=_db;
- (id)init;	// IMP=0x000000000003f089
- (id)initWithHandle:(id)arg1;	// IMP=0x000000000003efa3

@end

