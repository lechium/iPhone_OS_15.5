//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _NSExtensionContextVendor : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c8489
+ (Class)_extensionContextClass;	// IMP=0x00000000000c8451
+ (id)_extensionMainStoryboard;	// IMP=0x00000000000c8419
+ (Class)_extensionPrincipalClass;	// IMP=0x00000000000c83e1
+ (id)_extensionDictionary;	// IMP=0x00000000000c83a9
+ (id)_sharedExtensionContextVendor;	// IMP=0x00000000000c8345
+ (void)_startListening:(_Bool)arg1;	// IMP=0x00000000000c8301
+ (void)_startListening;	// IMP=0x00000000000c82c9
- (void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2;	// IMP=0x00000000000c860b
- (id)_extensionContextForUUID:(id)arg1;	// IMP=0x00000000000c85dd
- (void)_tearDownContextWithUUID:(id)arg1;	// IMP=0x00000000000c85b2
- (id)init;	// IMP=0x00000000000c8560
- (id)_init;	// IMP=0x00000000000c850e

@end
