//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PKKeychainItemWrapper : NSObject
{
    NSMutableDictionary *keychainItemData;	// 8 = 0x8
    NSMutableDictionary *genericPasswordQuery;	// 16 = 0x10
    _Bool _invisible;	// 24 = 0x18
    unsigned long long type;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
    unsigned long long _accessibility;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000044f0b8
@property(nonatomic) unsigned long long accessibility; // @synthesize accessibility=_accessibility;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long type; // @synthesize type;
@property(retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery;
@property(retain, nonatomic) NSMutableDictionary *keychainItemData; // @synthesize keychainItemData;
- (void)applyAccessibilityValueToDictionary:(id)arg1;	// IMP=0x000000000044effc
- (void)applySynchronizableValueToDictionary:(id)arg1;	// IMP=0x000000000044ef26
- (void)writeToKeychain;	// IMP=0x000000000044ec67
- (id)secItemFormatToDictionary:(id)arg1;	// IMP=0x000000000044eb35
- (id)dictionaryToSecItemFormat:(id)arg1;	// IMP=0x000000000044e90b
- (void)_resetKeychainItem:(_Bool)arg1;	// IMP=0x000000000044e769
- (void)resetLocalKeychainItem;	// IMP=0x000000000044e752
- (void)resetKeychainItem;	// IMP=0x000000000044e73e
- (id)objectForKey:(id)arg1;	// IMP=0x000000000044e728
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000044e677
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 invisible:(_Bool)arg5 accessibility:(unsigned long long)arg6;	// IMP=0x000000000044e46a
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4 invisible:(_Bool)arg5;	// IMP=0x000000000044e44c
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3;	// IMP=0x000000000044e424

@end
