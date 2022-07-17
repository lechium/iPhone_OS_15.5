//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface TPSAnalyticsEventContentEligibilityMet
{
    NSString *_contentID;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSArray *_eligibleContext;	// 24 = 0x18
    unsigned long long _displayType;	// 32 = 0x20
    unsigned long long _usageFlags;	// 40 = 0x28
}

+ (id)eventWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 usageFlags:(unsigned long long)arg5 date:(id)arg6;	// IMP=0x0000000000015aa1
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015651
- (void).cxx_destruct;	// IMP=0x0000000000015d0a
@property(readonly, nonatomic) unsigned long long usageFlags; // @synthesize usageFlags=_usageFlags;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NSArray *eligibleContext; // @synthesize eligibleContext=_eligibleContext;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (id)mutableAnalyticsEventRepresentation;	// IMP=0x0000000000015cad
- (id)duetEvent;	// IMP=0x0000000000015b95
- (id)eventName;	// IMP=0x0000000000015b62
- (id)_initWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 usageFlags:(unsigned long long)arg5 date:(id)arg6;	// IMP=0x00000000000159b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001586c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015659

@end
