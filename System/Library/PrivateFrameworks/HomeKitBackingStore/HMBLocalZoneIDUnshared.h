//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBLocalZoneID-Protocol.h>

@class NSArray, NSData, NSString;

@interface HMBLocalZoneIDUnshared : HMFObject <HMBLocalZoneID>
{
    NSString *_name;	// 8 = 0x8
}

+ (id)shortDescription;	// IMP=0x000000000002779e
- (void).cxx_destruct;	// IMP=0x000000000002778b
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002767f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027619
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *token;
@property(readonly, nonatomic) NSArray *labels;
- (id)initWithName:(id)arg1;	// IMP=0x0000000000027407

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
