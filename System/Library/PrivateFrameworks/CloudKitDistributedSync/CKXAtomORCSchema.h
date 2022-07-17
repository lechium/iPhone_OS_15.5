//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/CKXORCHelpers-Protocol.h>

@protocol CKXORCHelpers;

@interface CKXAtomORCSchema : NSObject <CKXORCHelpers>
{
    id <CKXORCHelpers> _implementation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000da4e0
@property(readonly, nonatomic) id <CKXORCHelpers> implementation; // @synthesize implementation=_implementation;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;	// IMP=0x00000000000da4c0
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000da4aa
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000da494
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;	// IMP=0x00000000000da47e
- (void)configureColumnsWithRootColumn:(void *)arg1;	// IMP=0x00000000000da468
- (id)generateSchema;	// IMP=0x00000000000da452
- (id)initWithBinding:(id)arg1 formatVersion:(unsigned char)arg2;	// IMP=0x00000000000da2b9

@end
