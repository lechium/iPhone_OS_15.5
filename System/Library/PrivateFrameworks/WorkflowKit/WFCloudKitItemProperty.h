//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSValue, WFFileType;

@interface WFCloudKitItemProperty : NSObject
{
    _Bool _ignoredByDefault;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    Class _itemClass;	// 32 = 0x20
    NSValue *_nilValue;	// 40 = 0x28
    WFFileType *_fileType;	// 48 = 0x30
}

+ (id)itemPropertyWithName:(id)arg1 itemClass:(Class)arg2;	// IMP=0x00000000001c48f2
+ (id)itemReferencePropertyWithName:(id)arg1 itemClass:(Class)arg2;	// IMP=0x00000000001c47f0
+ (id)assetPropertyWithName:(id)arg1 fileType:(id)arg2 ignoredByDefault:(_Bool)arg3;	// IMP=0x00000000001c4766
+ (id)assetPropertyWithName:(id)arg1 fileType:(id)arg2;	// IMP=0x00000000001c46e8
+ (id)assetPropertyWithName:(id)arg1;	// IMP=0x00000000001c4685
+ (id)objectPropertyWithName:(id)arg1 ignoredByDefault:(_Bool)arg2;	// IMP=0x00000000001c461b
+ (id)objectPropertyWithName:(id)arg1;	// IMP=0x00000000001c45b8
+ (id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2 ignoredByDefault:(_Bool)arg3;	// IMP=0x00000000001c44bb
+ (id)scalarPropertyWithName:(id)arg1 nilValue:(id)arg2;	// IMP=0x00000000001c43c4
- (void).cxx_destruct;	// IMP=0x00000000001c4386
@property(readonly, nonatomic) WFFileType *fileType; // @synthesize fileType=_fileType;
@property(readonly, nonatomic) NSValue *nilValue; // @synthesize nilValue=_nilValue;
@property(readonly, nonatomic, getter=isIgnoredByDefault) _Bool ignoredByDefault; // @synthesize ignoredByDefault=_ignoredByDefault;
@property(readonly, nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 itemClass:(Class)arg3 ignoredByDefault:(_Bool)arg4 nilValue:(id)arg5 fileType:(id)arg6;	// IMP=0x00000000001c41d8

@end
