//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSSqliteDatabaseConnection;

@interface BSSqlitePreparedStatement : NSObject
{
    BSSqliteDatabaseConnection *_dbConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000092e2
- (_Bool)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;	// IMP=0x0000000000009251
- (void)dealloc;	// IMP=0x0000000000008a9c
- (id)init;	// IMP=0x00000000000089fa

@end

