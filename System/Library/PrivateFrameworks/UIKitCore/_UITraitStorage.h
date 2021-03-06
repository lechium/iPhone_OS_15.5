//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UITraitStorage : NSObject <NSCoding>
{
    NSMutableArray *_records;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    id _object;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000089c7a9
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)_propertyDescriptionString;	// IMP=0x000000000089c71f
- (id)description;	// IMP=0x000000000089c67d
- (void)applyRecordsMatchingTraitCollection:(id)arg1;	// IMP=0x000000000089c603
- (void)addRecord:(id)arg1;	// IMP=0x000000000089c5ed
- (id)records;	// IMP=0x000000000089c5df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000089c543
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000089c44f
- (id)initWithObject:(id)arg1 keyPath:(id)arg2;	// IMP=0x000000000089c390

@end

