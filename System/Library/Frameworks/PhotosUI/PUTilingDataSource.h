//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface PUTilingDataSource : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSHashTable *__changeObservers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000043fd93
@property(readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000043fa12
- (id)description;	// IMP=0x000000000043f96d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000043f8bf
- (unsigned long long)hash;	// IMP=0x000000000043f87b
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;	// IMP=0x000000000043f7fe
- (id)init;	// IMP=0x000000000043f6d5

@end

