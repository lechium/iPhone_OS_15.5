//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SFService;
@protocol OS_dispatch_queue;

@interface RPAppSignInService : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    SFService *_bleAdvertiser;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    unsigned int _flags;	// 28 = 0x1c
    NSString *_appName;	// 32 = 0x20
    NSString *_appBundleID;	// 40 = 0x28
    NSArray *_associatedDomains;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000222e
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void)_invalidated;	// IMP=0x0000000000002159
- (void)_invalidate;	// IMP=0x00000000000020c8
- (void)invalidate;	// IMP=0x0000000000002000
- (void)_activate;	// IMP=0x0000000000001d89
- (void)activate;	// IMP=0x0000000000001cc1
- (id)description;	// IMP=0x0000000000001c88
- (id)init;	// IMP=0x0000000000001c18

@end
