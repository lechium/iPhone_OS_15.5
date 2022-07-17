//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACDClient, NSDictionary, NSSet;

@interface ACDClientAuthorization : NSObject
{
    _Bool _isGranted;	// 8 = 0x8
    ACDClient *_client;	// 16 = 0x10
    NSSet *_grantedPermissions;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006497f
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSSet *grantedPermissions; // @synthesize grantedPermissions=_grantedPermissions;
@property(retain, nonatomic) ACDClient *client; // @synthesize client=_client;
@property(nonatomic) _Bool isGranted; // @synthesize isGranted=_isGranted;
- (id)initForClient:(id)arg1;	// IMP=0x00000000000648b3

@end
