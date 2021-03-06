//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface SQLiteTransporter : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
}

+ (void)_removeKnownDatabasePath:(id)arg1;	// IMP=0x004000000010e271
+ (_Bool)_isKnownDatabasePath:(id)arg1;	// IMP=0x001000000010e07f
+ (void)_addKnownDatabasePath:(id)arg1;	// IMP=0x001000000010df38
- (void).cxx_destruct;	// IMP=0x002000000010e386
- (void)performTransportationUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000010de86
- (_Bool)endTransporationAndRemoveDatabase;	// IMP=0x001000000010dda7
- (_Bool)canBeginTransportation;	// IMP=0x001000000010dba2
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x001000000010db37

@end

