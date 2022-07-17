//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSMutableDictionary, NSString;

@interface AMSNetworkConstraints : NSObject <AMSBagConsumer>
{
    NSMutableDictionary *_sizeLimits;	// 8 = 0x8
}

+ (id)bagKeySet;	// IMP=0x00000000001be21f
+ (id)_networkConstraintsForMediaType:(id)arg1 withArray:(id)arg2;	// IMP=0x00000000001bdd79
+ (id)createBagForSubProfile;	// IMP=0x00000000001bd71f
+ (id)bagSubProfileVersion;	// IMP=0x00000000001bd6cf
+ (id)bagSubProfile;	// IMP=0x00000000001bd67f
+ (id)networkConstraintsForMediaType:(id)arg1 withBag:(id)arg2;	// IMP=0x00000000001bcebc
- (void).cxx_destruct;	// IMP=0x00000000001be253
@property(retain, nonatomic) NSMutableDictionary *sizeLimits; // @synthesize sizeLimits=_sizeLimits;
- (long long)_sizeLimitForNetworkType:(id)arg1;	// IMP=0x00000000001be1ce
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(id)arg2;	// IMP=0x00000000001be12c
- (void)_disableAllNetworkTypes;	// IMP=0x00000000001bdb64
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bdafd
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (long long)sizeLimitForNetworkType:(id)arg1;	// IMP=0x00000000001bd66d
- (_Bool)isEqualToConstraints:(id)arg1;	// IMP=0x00000000001bd56e
- (_Bool)hasSizeLimitForNetworkType:(id)arg1;	// IMP=0x00000000001bd537
@property(readonly, getter=isAnyNetworkTypeEnabled) _Bool anyNetworkTypeEnabled;
- (id)_initWithStoreConstraintDictionary:(id)arg1;	// IMP=0x00000000001bd0e1
- (id)init;	// IMP=0x00000000001bd087

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
