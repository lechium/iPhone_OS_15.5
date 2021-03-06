//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircle/NSSecureCoding-Protocol.h>

@class CNContact, NSString;

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding>
{
    NSString *_handle;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    CNContact *_contact;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e0cb
- (void).cxx_destruct;	// IMP=0x000000000000e55e
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e30b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e1bd
- (id)_safeClasses;	// IMP=0x000000000000e156
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e0d3
- (id)initWithRecommendation:(id)arg1;	// IMP=0x000000000000e002

@end

