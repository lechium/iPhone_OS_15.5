//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface HDCloudSyncSerializedField : NSObject
{
    _Bool _encrypted;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSSet *_classes;	// 24 = 0x18
}

+ (id)fieldForKey:(id)arg1 classes:(id)arg2 encrypted:(_Bool)arg3;	// IMP=0x000000000009a81e
- (void).cxx_destruct;	// IMP=0x000000000009a8f8
@property(readonly, nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, copy, nonatomic) NSSet *classes; // @synthesize classes=_classes;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

