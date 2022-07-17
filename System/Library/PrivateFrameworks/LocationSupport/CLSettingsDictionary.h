//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CLSettingsDictionary : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (id)settingsWithDictionary:(id)arg1;	// IMP=0x000000000001267d
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_internal;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012ad3
- (id)arrayForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0000000000012a77
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x00000000000129e0
- (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x0000000000012984
- (float)floatForKey:(id)arg1 defaultValue:(float)arg2;	// IMP=0x0000000000012928
- (long long)longForKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x00000000000128cd
- (int)intForKey:(id)arg1 defaultValue:(int)arg2;	// IMP=0x0000000000012872
- (short)shortForKey:(id)arg1 defaultValue:(short)arg2;	// IMP=0x0000000000012816
- (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x00000000000127bb
- (id)dictionaryForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x000000000001275f
- (_Bool)hasValueForKey:(id)arg1;	// IMP=0x0000000000012742
- (void)dealloc;	// IMP=0x0000000000012702
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000126ac

@end
