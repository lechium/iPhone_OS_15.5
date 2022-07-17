//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface AXSSDatabaseManager : NSObject
{
    int _lockNotificationToken;	// 8 = 0x8
    _Bool _isScreenedLocked;	// 12 = 0xc
    NSManagedObjectContext *_managedObjectContext;	// 16 = 0x10
}

+ (id)sharedDatabase;	// IMP=0x00000000000396b1
- (void).cxx_destruct;	// IMP=0x000000000003469a
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (id)cloudObjectFromLocalObjects:(id)arg1 withTable:(id)arg2 andObjectID:(id)arg3;	// IMP=0x000000000003424b
- (void)userAuthChanged;	// IMP=0x00000000000396d8
@property(readonly, nonatomic) _Bool canSave;
- (void)dealloc;	// IMP=0x000000000003417a
- (id)init;	// IMP=0x0000000000033f8b

@end
