//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UNNotificationContact;

@interface _UNNotificationContactServiceRecord : NSObject
{
    _UNNotificationContact *_contact;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000115d8
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) _UNNotificationContact *contact; // @synthesize contact=_contact;
- (unsigned long long)hash;	// IMP=0x0000000000011561
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001145c

@end
