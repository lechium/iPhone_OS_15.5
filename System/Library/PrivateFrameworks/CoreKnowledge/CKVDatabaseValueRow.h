//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CKVDatabaseValueRow : NSObject
{
    NSArray *_databaseValueArray;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000094a77
- (id)dataValueAtColumnIndex:(unsigned long long)arg1;	// IMP=0x0000000000094a23
- (id)numberValueAtColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000000949cf
- (id)stringValueAtColumnIndex:(unsigned long long)arg1;	// IMP=0x000000000009497b
- (unsigned long long)count;	// IMP=0x0000000000094965
- (id)init;	// IMP=0x000000000009491d
- (id)initWithDatabaseValueArray:(id)arg1;	// IMP=0x0000000000094878

@end
