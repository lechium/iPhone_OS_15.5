//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSApplePayClassic : NSObject <AMSBagConsumer>
{
}

+ (id)bagKeySet;	// IMP=0x000000000008d9d5
+ (id)createBagForSubProfile;	// IMP=0x000000000008d93b
+ (id)bagSubProfileVersion;	// IMP=0x000000000008d8eb
+ (id)bagSubProfile;	// IMP=0x000000000008d89b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
