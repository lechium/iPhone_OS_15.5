//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface IMBlockListController : NSObject
{
    NSOrderedSet *_imBlockItemList;	// 8 = 0x8
    id _cmfBlockListUpdatedObserver;	// 16 = 0x10
    id _cnDatabaseChangedExternallyObserver;	// 24 = 0x18
}

+ (void *)_createCMFItemRefWithUnsanitizedAddress:(id)arg1;	// IMP=0x000000000000921d
+ (id)sharedBlockList;	// IMP=0x0000000000008e57
@property(retain, nonatomic) id cnDatabaseChangedExternallyObserver; // @synthesize cnDatabaseChangedExternallyObserver=_cnDatabaseChangedExternallyObserver;
@property(retain, nonatomic) id cmfBlockListUpdatedObserver; // @synthesize cmfBlockListUpdatedObserver=_cmfBlockListUpdatedObserver;
@property(retain, nonatomic) NSOrderedSet *imBlockItemList; // @synthesize imBlockItemList=_imBlockItemList;
- (void)_unblockCMFItem:(void *)arg1;	// IMP=0x000000000000957c
- (_Bool)_blockCMFItemRef:(void *)arg1;	// IMP=0x0000000000009543
- (id)_addressForCMItemRef:(void *)arg1;	// IMP=0x00000000000094eb
- (void)_buildBlockList;	// IMP=0x0000000000009332
- (void)unblockAddress:(id)arg1;	// IMP=0x00000000000091bf
- (void)unblockItem:(id)arg1;	// IMP=0x000000000000918b
- (_Bool)blockAddress:(id)arg1;	// IMP=0x000000000000913a
- (_Bool)blockItem:(id)arg1;	// IMP=0x0000000000009106
- (_Bool)addressIsBlocked:(id)arg1;	// IMP=0x00000000000090bb
- (_Bool)itemIsBlocked:(id)arg1;	// IMP=0x0000000000009091
- (void)removeCNNotifications;	// IMP=0x0000000000009018
- (void)listenToCNNotifications;	// IMP=0x0000000000008ea6
- (id)blockListItems;	// IMP=0x0000000000008e7c
- (void)dealloc;	// IMP=0x0000000000008dc1
- (id)init;	// IMP=0x0000000000008c38

@end

