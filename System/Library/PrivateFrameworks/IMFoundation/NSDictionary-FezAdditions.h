//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FezAdditions)
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;	// IMP=0x00000000000071b4
+ (id)dictionaryWithPlistData:(id)arg1;	// IMP=0x0000000000006df5
- (id)__imDictionaryByFilteringWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000735b
- (id)__imDeepCopy;	// IMP=0x0000000000007135
- (id)dictionaryFromChanges:(id)arg1;	// IMP=0x0000000000006ecb
- (id)plistData;	// IMP=0x0000000000006ea4
- (id)keysOfChangedEntriesComparedTo:(id)arg1;	// IMP=0x0000000000006b07
- (_Bool)__imIsMutable;	// IMP=0x0000000000006ac7
- (id)_dataForKey:(id)arg1;	// IMP=0x000000000000b2f1
- (id)_stringForKey:(id)arg1;	// IMP=0x000000000000b291
- (id)_numberForKey:(id)arg1;	// IMP=0x000000000000b231
- (id)_arrayForKey:(id)arg1;	// IMP=0x000000000000b1d1
- (id)_dictionaryForKey:(id)arg1;	// IMP=0x000000000000b171
@property(readonly, nonatomic) unsigned long long fileHFSResourceForkSize;
@property(readonly, nonatomic) unsigned short fileHFSFlags;
@end

