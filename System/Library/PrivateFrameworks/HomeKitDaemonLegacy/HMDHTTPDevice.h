//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSString, NSUUID;

@interface HMDHTTPDevice : HMFObject <HMFLogging>
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000034b5f3
+ (id)shortDescription;	// IMP=0x000000000034b5e1
- (void).cxx_destruct;	// IMP=0x000000000034b5ce
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x000000000034b56d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000034b4af
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000034b315
- (id)shortDescription;	// IMP=0x000000000034b253
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000034b0d4
- (id)init;	// IMP=0x000000000034b07a

// Remaining properties
@property(readonly) Class superclass;

@end
