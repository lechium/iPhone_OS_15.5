//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/_GCDeviceMatchingFilter-Protocol.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _GCDevicePIDVIDMatchingFilter : NSObject <_GCDeviceMatchingFilter>
{
    NSNumber *_vendorID;	// 8 = 0x8
    NSArray *_productIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000027ffc
- (id)identifier;	// IMP=0x0000000000027f86
- (_Bool)match:(id)arg1;	// IMP=0x0000000000027d8a
- (id)initWithVendorID:(id)arg1 productIDs:(id)arg2;	// IMP=0x0000000000027cf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

