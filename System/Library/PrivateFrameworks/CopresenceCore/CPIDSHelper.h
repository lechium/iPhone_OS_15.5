//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSString;

@interface CPIDSHelper : NSObject
{
    IDSService *_service;	// 8 = 0x8
}

+ (id)rawAddressForDestination:(id)arg1;	// IMP=0x00000000000303a6
+ (id)convertToIDSDestintation:(id)arg1;	// IMP=0x000000000003033f
+ (_Bool)isMuseCapable;	// IMP=0x000000000002fd57
- (void).cxx_destruct;	// IMP=0x00000000000303ea
- (_Bool)isSelfAlias:(id)arg1;	// IMP=0x0000000000030023
@property(readonly, copy, nonatomic) NSString *selfAccountName;
- (id)anySelfAccount;	// IMP=0x000000000002fdb9
- (_Bool)isLoggedIn;	// IMP=0x000000000002fd68
- (id)initWithSevice:(id)arg1;	// IMP=0x000000000002fcb0

@end
