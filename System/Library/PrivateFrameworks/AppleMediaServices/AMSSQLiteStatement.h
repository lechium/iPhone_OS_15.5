//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSSQLiteBinding-Protocol.h>

@class AMSSQLiteConnection, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteStatement : NSObject <AMSSQLiteBinding>
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    AMSSQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000214e86
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x0000000000214e31
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000214ddd
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000214d69
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000214c60
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000214b73
- (void)bindNullableString:(id)arg1 atPosition:(int)arg2;	// IMP=0x0000000000214b4c
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x0000000000214b0f
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x0000000000214ad2
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x0000000000214a95
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x0000000000214a54
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x0000000000214a17
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002149ba
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000021497a
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002148c9
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x000000000021481c
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000002147bf
- (int)step;	// IMP=0x000000000021477e
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x00000000002146d3
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x0000000000214654
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 onConnection:(id)arg2;	// IMP=0x0000000000214485

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

