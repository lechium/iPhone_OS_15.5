//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol NSCoding;

@interface ENSSKeychainQuery : NSObject
{
    NSString *_account;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
    NSData *_passwordData;	// 32 = 0x20
    NSString *_accessGroup;	// 40 = 0x28
    unsigned long long _synchronizationMode;	// 48 = 0x30
}

+ (id)errorWithCode:(int)arg1;	// IMP=0x000000000020e9fe
+ (_Bool)isSynchronizationAvailable;	// IMP=0x000000000020e9dd
- (void).cxx_destruct;	// IMP=0x000000000020f809
@property(nonatomic) unsigned long long synchronizationMode; // @synthesize synchronizationMode=_synchronizationMode;
@property(copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(copy, nonatomic) NSData *passwordData; // @synthesize passwordData=_passwordData;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
- (id)query;	// IMP=0x000000000020f5b2
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) id <NSCoding> passwordObject;
- (_Bool)fetch:(id *)arg1;	// IMP=0x000000000020f213
- (id)fetchAll:(id *)arg1;	// IMP=0x000000000020f136
- (_Bool)deleteItem:(id *)arg1;	// IMP=0x000000000020f018
- (_Bool)save:(id *)arg1;	// IMP=0x000000000020edd0

@end

