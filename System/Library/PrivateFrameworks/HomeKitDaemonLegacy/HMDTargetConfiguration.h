//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber, NSString, NSUUID;

@interface HMDTargetConfiguration : HMFObject
{
    NSUUID *_uuid;	// 8 = 0x8
    NSNumber *_identifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    long long _category;	// 32 = 0x20
    NSArray *_buttonConfiguration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002888b9
@property(retain, nonatomic) NSArray *buttonConfiguration; // @synthesize buttonConfiguration=_buttonConfiguration;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (unsigned long long)hash;	// IMP=0x00000000002887f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002886f2
- (id)initWithAccessory:(id)arg1 buttonConfiguration:(id)arg2;	// IMP=0x00000000002883cc
- (id)description;	// IMP=0x00000000002882ae
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(long long)arg3 buttonConfiguration:(id)arg4;	// IMP=0x00000000002881a9
- (id)init;	// IMP=0x0000000000288101

@end

