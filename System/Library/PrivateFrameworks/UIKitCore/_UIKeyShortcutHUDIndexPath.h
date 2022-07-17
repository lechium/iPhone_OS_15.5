//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath;
@protocol _UIKeyShortcutHUDCollectionViewManagerClient;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDIndexPath : NSObject
{
    id <_UIKeyShortcutHUDCollectionViewManagerClient> _client;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
}

+ (id)hudIndexPathWithClient:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000046b6bf
- (void).cxx_destruct;	// IMP=0x000000000046b92e
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <_UIKeyShortcutHUDCollectionViewManagerClient> client; // @synthesize client=_client;
- (unsigned long long)hash;	// IMP=0x000000000046b88a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046b747

@end
