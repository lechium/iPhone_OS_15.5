//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSQLiteEntityForeignKey, NSString;

@interface _HDSQLiteEntityColumn : NSObject
{
    unsigned char _keyPathType;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_columnType;	// 24 = 0x18
    HDSQLiteEntityForeignKey *_foreignKey;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000327d46
@property(readonly, nonatomic) HDSQLiteEntityForeignKey *foreignKey; // @synthesize foreignKey=_foreignKey;
@property(readonly, nonatomic) unsigned char keyPathType; // @synthesize keyPathType=_keyPathType;
@property(readonly, copy, nonatomic) NSString *columnType; // @synthesize columnType=_columnType;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000327c92
- (id)creationSQL;	// IMP=0x0000000000327b50
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 targetEntityClass:(Class)arg4 targetProperty:(id)arg5 deletionAction:(long long)arg6;	// IMP=0x0000000000072e27
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 foreignKey:(id)arg4;	// IMP=0x00000000003279d6
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3;	// IMP=0x0000000000072e12

@end

