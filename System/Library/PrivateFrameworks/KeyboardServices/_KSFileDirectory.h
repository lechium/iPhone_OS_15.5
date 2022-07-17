//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeyboardServices/NSFastEnumeration-Protocol.h>
#import <KeyboardServices/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface _KSFileDirectory <NSSecureCoding, NSFastEnumeration>
{
    NSMutableDictionary *_contents;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015495
- (void).cxx_destruct;	// IMP=0x0000000000016279
- (id)findEntryWithComparison:(CDUnknownBlockType)arg1 recursively:(_Bool)arg2;	// IMP=0x000000000001606a
- (void)restoreToPath:(id)arg1;	// IMP=0x0000000000015dda
- (void)consistencyCheck;	// IMP=0x0000000000015c90
- (id)description;	// IMP=0x0000000000015c03
- (void)performOnEverything:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015a95
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000015a23
@property(readonly, retain, nonatomic) NSArray *contents;
- (id)entryForName:(id)arg1;	// IMP=0x00000000000159e9
- (void)removeEntryWithName:(id)arg1;	// IMP=0x00000000000159cc
- (void)addEntry:(id)arg1;	// IMP=0x0000000000015958
- (id)initWithDirectory:(id)arg1 captureContents:(_Bool)arg2 storeRoot:(_Bool)arg3;	// IMP=0x00000000000156bf
- (id)initWithName:(id)arg1;	// IMP=0x0000000000015652
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000155d5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001549d

@end
