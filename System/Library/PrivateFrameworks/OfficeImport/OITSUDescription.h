//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OITSUDescription : NSObject
{
    NSObject *_object;	// 8 = 0x8
    Class _class;	// 16 = 0x10
    void *_cfType;	// 24 = 0x18
    NSString *_header;	// 32 = 0x20
    NSMutableDictionary *_fields;	// 40 = 0x28
    NSMutableArray *_fieldOrder;	// 48 = 0x30
    unsigned long long _fieldNameWidth;	// 56 = 0x38
    _Bool _commaSeparated;	// 64 = 0x40
}

+ (id)descriptionWithObject:(id)arg1;	// IMP=0x00000000002753db
+ (id)descriptionWithCFType:(void *)arg1 format:(id)arg2;	// IMP=0x00000000002752cf
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2;	// IMP=0x000000000027528b
+ (id)descriptionWithObject:(id)arg1 format:(id)arg2;	// IMP=0x000000000027519e
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;	// IMP=0x00000000002750c2
- (id)descriptionString;	// IMP=0x000000000027587f
- (void)setFieldOptionCommaSeparated;	// IMP=0x0000000000275875
- (void)addSuperDescription;	// IMP=0x0000000000275824
- (void)addFieldValue:(id)arg1;	// IMP=0x0000000000275806
- (void)addFieldWithFormat:(id)arg1;	// IMP=0x0000000000275711
- (void)addField:(id)arg1 format:(id)arg2;	// IMP=0x0000000000275615
- (void)addField:(id)arg1 value:(id)arg2;	// IMP=0x00000000002754f1
- (id)p_header;	// IMP=0x0000000000275447
- (void)dealloc;	// IMP=0x00000000002753f6
- (id)initWithObject:(id)arg1;	// IMP=0x000000000027508a
- (id)initWithObject:(id)arg1 format:(id)arg2;	// IMP=0x0000000000274fb6
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;	// IMP=0x0000000000274f19
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 arguments:(struct __va_list_tag [1])arg4;	// IMP=0x0000000000274e9d
- (id)initWithCFType:(void *)arg1 header:(id)arg2;	// IMP=0x0000000000274e34
- (id)initWithObject:(id)arg1 class:(Class)arg2 header:(id)arg3;	// IMP=0x0000000000274dc0

@end

